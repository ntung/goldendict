/* This file is (c) 2008-2010 Konstantin Isakov <ikm@users.berlios.de>
 * Part of GoldenDict. Licensed under GPLv3 or later, see the LICENSE file */

#include <stdio.h>
#include <QIcon>
#include "mainwindow.hh"
#include "config.hh"

#include "processwrapper.hh"
#include "hotkeywrapper.hh"

//#define __DO_DEBUG

#ifdef __DO_DEBUG
#include <sys/resource.h>
#endif

#include "termination.hh"

int main( int argc, char ** argv )
{
  if ( argc == 3 && strcmp( argv[ 1 ], "--show-error-file" ) == 0 )
  {
    // The program has crashed -- show a message about it

    QApplication app( argc, argv );

    QFile errFile( argv[ 2 ] );

    QString errorText;

    if ( errFile.open( QFile::ReadOnly ) )
      errorText = QString::fromUtf8( errFile.readAll() );

    errorText += "\n" + QString( "This information is located in file %1, "
                                 "which will be removed once you close this dialog.").arg( errFile.fileName() );

    QMessageBox::critical( 0, "GoldenDict has crashed", errorText );

    errFile.remove();

    return 0;
  }

  installTerminationHandler();

  #ifdef __DO_DEBUG
  {
    rlimit limit;

    memset( &limit, 0, sizeof( limit ) );
    limit.rlim_cur = RLIM_INFINITY;
    limit.rlim_max = RLIM_INFINITY;
    setrlimit( RLIMIT_CORE, &limit );
  }
  #endif

#ifdef __WIN32

  // Under Windows, increase the amount of fopen()-able file descriptors from
  // the default 512 up to 2048.
  _setmaxstdio( 2048 );

#endif

  QHotkeyApplication app( argc, argv );

  app.setApplicationName( "GoldenDict" );
  app.setOrganizationDomain( "http://goldendict.berlios.de/" );

  app.setWindowIcon( QIcon( ":/icons/programicon.png" ) );

  Config::Class cfg( Config::load() );


  // Prevent execution of the 2nd copy

  // get pid
  quint64 current_pid = QCoreApplication::applicationPid();

//  QString app_fname = QFileInfo(QCoreApplication::applicationFilePath()).baseName();
//  quint64 pid = ProcessWrapper::findProcess(
//          app_fname.toAscii().data(),
//          current_pid);
//
//  qDebug() << "pid " << pid;
//  qDebug() << "current_pid " << current_pid;

  // check pid file
  QFile pid_file( Config::getPidFileName() );

  if ( pid_file.exists() ) // pid file exists, check it
  {
    pid_file.open( QIODevice::ReadWrite );
    QDataStream ds( &pid_file );
    quint64 tmp; ds >> tmp;
    pid_file.close();

    bool isExist = ProcessWrapper::processExists(tmp);
    if ( isExist && tmp != current_pid )
    {
      puts( "Another GoldenDict copy started already." );
      return 1;
    }

//    if ( tmp == pid ) // it is active - exiting
//    {
//      // to do: switch to pid ?
//      return 1;
//    }
  }

  pid_file.open( QIODevice::WriteOnly );
  QDataStream ds( &pid_file );
  ds << current_pid;
  pid_file.close();


  // Load translations

  QTranslator qtTranslator;

  QString localeName = cfg.preferences.interfaceLanguage;

  if ( localeName.isEmpty() )
    localeName = QLocale::system().name();

  if ( !qtTranslator.load( "qt_" + localeName,
                           QLibraryInfo::location( QLibraryInfo::TranslationsPath ) ) )
    qtTranslator.load( "qt_" + localeName, Config::getProgramDataDir() + "/locale/" );

  app.installTranslator( &qtTranslator );

  QTranslator translator;

  translator.load( Config::getLocDir() + "/" + localeName );

  app.installTranslator( &translator );

  // Prevent app from quitting spontaneously when it works with scan popup
  // and with the main window closed.
  app.setQuitOnLastWindowClosed( false );

  MainWindow m( cfg );

  int r = app.exec();

  // remove pid file
  pid_file.remove();

  return r;
}