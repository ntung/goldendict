/********************************************************************************
** Form generated from reading UI file 'fulltextsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLTEXTSEARCH_H
#define UI_FULLTEXTSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FullTextSearchDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchLine;
    QGridLayout *gridLayout_2;
    QCheckBox *matchCase;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QComboBox *searchMode;
    QSpinBox *articlesPerDictionary;
    QSpinBox *distanceBetweenWords;
    QCheckBox *checkBoxDistanceBetweenWords;
    QCheckBox *checkBoxArticlesPerDictionary;
    QListView *headwordsView;
    QHBoxLayout *horizontalLayout;
    QLabel *articlesFoundLabel;
    QProgressBar *searchProgressBar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *totalDicts;
    QLabel *label_4;
    QLabel *readyDicts;
    QLabel *label;
    QLabel *label_2;
    QLabel *nonIndexableDicts;
    QLabel *toIndexDicts;
    QLabel *nowIndexingLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *OKButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *FullTextSearchDialog)
    {
        if (FullTextSearchDialog->objectName().isEmpty())
            FullTextSearchDialog->setObjectName(QStringLiteral("FullTextSearchDialog"));
        FullTextSearchDialog->resize(492, 593);
        FullTextSearchDialog->setMinimumSize(QSize(430, 450));
        verticalLayout_2 = new QVBoxLayout(FullTextSearchDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(FullTextSearchDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        searchLine = new QLineEdit(groupBox);
        searchLine->setObjectName(QStringLiteral("searchLine"));

        verticalLayout->addWidget(searchLine);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        matchCase = new QCheckBox(groupBox);
        matchCase->setObjectName(QStringLiteral("matchCase"));

        gridLayout_2->addWidget(matchCase, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        searchMode = new QComboBox(groupBox);
        searchMode->setObjectName(QStringLiteral("searchMode"));

        horizontalLayout_2->addWidget(searchMode);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        articlesPerDictionary = new QSpinBox(groupBox);
        articlesPerDictionary->setObjectName(QStringLiteral("articlesPerDictionary"));

        gridLayout_2->addWidget(articlesPerDictionary, 1, 1, 1, 1);

        distanceBetweenWords = new QSpinBox(groupBox);
        distanceBetweenWords->setObjectName(QStringLiteral("distanceBetweenWords"));

        gridLayout_2->addWidget(distanceBetweenWords, 0, 1, 1, 1);

        checkBoxDistanceBetweenWords = new QCheckBox(groupBox);
        checkBoxDistanceBetweenWords->setObjectName(QStringLiteral("checkBoxDistanceBetweenWords"));

        gridLayout_2->addWidget(checkBoxDistanceBetweenWords, 0, 0, 1, 1);

        checkBoxArticlesPerDictionary = new QCheckBox(groupBox);
        checkBoxArticlesPerDictionary->setObjectName(QStringLiteral("checkBoxArticlesPerDictionary"));

        gridLayout_2->addWidget(checkBoxArticlesPerDictionary, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);

        headwordsView = new QListView(FullTextSearchDialog);
        headwordsView->setObjectName(QStringLiteral("headwordsView"));

        verticalLayout_2->addWidget(headwordsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        articlesFoundLabel = new QLabel(FullTextSearchDialog);
        articlesFoundLabel->setObjectName(QStringLiteral("articlesFoundLabel"));
        articlesFoundLabel->setMinimumSize(QSize(0, 21));

        horizontalLayout->addWidget(articlesFoundLabel);

        searchProgressBar = new QProgressBar(FullTextSearchDialog);
        searchProgressBar->setObjectName(QStringLiteral("searchProgressBar"));
        searchProgressBar->setMaximum(0);
        searchProgressBar->setValue(-1);
        searchProgressBar->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(searchProgressBar);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(FullTextSearchDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        totalDicts = new QLabel(groupBox_2);
        totalDicts->setObjectName(QStringLiteral("totalDicts"));

        gridLayout->addWidget(totalDicts, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        readyDicts = new QLabel(groupBox_2);
        readyDicts->setObjectName(QStringLiteral("readyDicts"));

        gridLayout->addWidget(readyDicts, 0, 4, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        nonIndexableDicts = new QLabel(groupBox_2);
        nonIndexableDicts->setObjectName(QStringLiteral("nonIndexableDicts"));

        gridLayout->addWidget(nonIndexableDicts, 1, 4, 1, 1);

        toIndexDicts = new QLabel(groupBox_2);
        toIndexDicts->setObjectName(QStringLiteral("toIndexDicts"));

        gridLayout->addWidget(toIndexDicts, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        nowIndexingLabel = new QLabel(FullTextSearchDialog);
        nowIndexingLabel->setObjectName(QStringLiteral("nowIndexingLabel"));

        verticalLayout_2->addWidget(nowIndexingLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        OKButton = new QPushButton(FullTextSearchDialog);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setAutoDefault(false);
        OKButton->setDefault(true);

        horizontalLayout_3->addWidget(OKButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cancelButton = new QPushButton(FullTextSearchDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(FullTextSearchDialog);

        QMetaObject::connectSlotsByName(FullTextSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *FullTextSearchDialog)
    {
        FullTextSearchDialog->setWindowTitle(QString());
        groupBox->setTitle(QApplication::translate("FullTextSearchDialog", "Search", 0));
        matchCase->setText(QApplication::translate("FullTextSearchDialog", "Match case", 0));
        label_8->setText(QApplication::translate("FullTextSearchDialog", "Mode:", 0));
        checkBoxDistanceBetweenWords->setText(QString());
        checkBoxArticlesPerDictionary->setText(QString());
        articlesFoundLabel->setText(QApplication::translate("FullTextSearchDialog", "Articles found:", 0));
        groupBox_2->setTitle(QApplication::translate("FullTextSearchDialog", "Available dictionaries in group:", 0));
        label_3->setText(QApplication::translate("FullTextSearchDialog", "Wait for indexing:", 0));
        totalDicts->setText(QString());
        label_4->setText(QApplication::translate("FullTextSearchDialog", "Non-indexable:", 0));
        readyDicts->setText(QString());
        label->setText(QApplication::translate("FullTextSearchDialog", "Total:", 0));
        label_2->setText(QApplication::translate("FullTextSearchDialog", "Indexed:", 0));
        nonIndexableDicts->setText(QString());
        toIndexDicts->setText(QString());
        nowIndexingLabel->setText(QApplication::translate("FullTextSearchDialog", "Now indexing: None", 0));
        OKButton->setText(QApplication::translate("FullTextSearchDialog", "Search", 0));
        cancelButton->setText(QApplication::translate("FullTextSearchDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FullTextSearchDialog: public Ui_FullTextSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLTEXTSEARCH_H
