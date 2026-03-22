/********************************************************************************
** Form generated from reading UI file 'bannedusers.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNEDUSERS_H
#define UI_BANNEDUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_BannedUsersDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *filterLayout_1;
    QGroupBox *filterGroupBox;
    QHBoxLayout *filterLayout_2;
    QLabel *filterLabel;
    QLineEdit *filterEdit;
    QPushButton *filterButton;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    MyTableView *bannedTableView;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *bantypeBox;
    QLineEdit *banEdit;
    QToolButton *newbanBtn;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *rightButton;
    QToolButton *leftButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    MyTableView *unbannedTableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BannedUsersDlg)
    {
        if (BannedUsersDlg->objectName().isEmpty())
            BannedUsersDlg->setObjectName("BannedUsersDlg");
        BannedUsersDlg->resize(749, 506);
        BannedUsersDlg->setSizeGripEnabled(true);
        verticalLayout_4 = new QVBoxLayout(BannedUsersDlg);
        verticalLayout_4->setObjectName("verticalLayout_4");
        filterLayout_1 = new QVBoxLayout();
        filterLayout_1->setObjectName("filterLayout_1");
        filterGroupBox = new QGroupBox(BannedUsersDlg);
        filterGroupBox->setObjectName("filterGroupBox");
        filterLayout_2 = new QHBoxLayout(filterGroupBox);
        filterLayout_2->setObjectName("filterLayout_2");
        filterLabel = new QLabel(filterGroupBox);
        filterLabel->setObjectName("filterLabel");

        filterLayout_2->addWidget(filterLabel);

        filterEdit = new QLineEdit(filterGroupBox);
        filterEdit->setObjectName("filterEdit");

        filterLayout_2->addWidget(filterEdit);

        filterButton = new QPushButton(filterGroupBox);
        filterButton->setObjectName("filterButton");

        filterLayout_2->addWidget(filterButton);


        filterLayout_1->addWidget(filterGroupBox);


        verticalLayout_4->addLayout(filterLayout_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(BannedUsersDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        bannedTableView = new MyTableView(groupBox);
        bannedTableView->setObjectName("bannedTableView");
        QFont font;
        font.setPointSize(8);
        bannedTableView->setFont(font);
        bannedTableView->setTabKeyNavigation(false);
        bannedTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bannedTableView->setProperty("showDropIndicator", QVariant(false));
        bannedTableView->setAlternatingRowColors(true);
        bannedTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        bannedTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        bannedTableView->setSortingEnabled(true);

        verticalLayout_2->addWidget(bannedTableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        bantypeBox = new QComboBox(groupBox);
        bantypeBox->setObjectName("bantypeBox");

        horizontalLayout_2->addWidget(bantypeBox);

        banEdit = new QLineEdit(groupBox);
        banEdit->setObjectName("banEdit");

        horizontalLayout_2->addWidget(banEdit);

        newbanBtn = new QToolButton(groupBox);
        newbanBtn->setObjectName("newbanBtn");

        horizontalLayout_2->addWidget(newbanBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);

        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        rightButton = new QToolButton(BannedUsersDlg);
        rightButton->setObjectName("rightButton");
        rightButton->setText(QString::fromUtf8(">"));

        verticalLayout->addWidget(rightButton);

        leftButton = new QToolButton(BannedUsersDlg);
        leftButton->setObjectName("leftButton");
        leftButton->setText(QString::fromUtf8("<"));

        verticalLayout->addWidget(leftButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(BannedUsersDlg);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        unbannedTableView = new MyTableView(groupBox_2);
        unbannedTableView->setObjectName("unbannedTableView");
        unbannedTableView->setFont(font);
        unbannedTableView->setTabKeyNavigation(false);
        unbannedTableView->setAlternatingRowColors(true);
        unbannedTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        unbannedTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        unbannedTableView->setSortingEnabled(true);

        verticalLayout_3->addWidget(unbannedTableView);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(BannedUsersDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        filterLabel->setBuddy(filterEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(BannedUsersDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BannedUsersDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BannedUsersDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BannedUsersDlg);
    } // setupUi

    void retranslateUi(QDialog *BannedUsersDlg)
    {
        BannedUsersDlg->setWindowTitle(QCoreApplication::translate("BannedUsersDlg", "Banned Users", nullptr));
        filterGroupBox->setTitle(QCoreApplication::translate("BannedUsersDlg", "Filter Banned Users", nullptr));
        filterLabel->setText(QCoreApplication::translate("BannedUsersDlg", "Search an Username or IP-Address", nullptr));
        filterButton->setText(QCoreApplication::translate("BannedUsersDlg", "Search", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BannedUsersDlg", "Banned Users", nullptr));
#if QT_CONFIG(accessibility)
        bannedTableView->setAccessibleName(QCoreApplication::translate("BannedUsersDlg", "Banned users", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        bantypeBox->setAccessibleName(QCoreApplication::translate("BannedUsersDlg", "Ban type", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        banEdit->setAccessibleName(QCoreApplication::translate("BannedUsersDlg", "Enter an IP or an username to ban", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        newbanBtn->setToolTip(QCoreApplication::translate("BannedUsersDlg", "Add to list of banned users", nullptr));
#endif // QT_CONFIG(tooltip)
        newbanBtn->setText(QCoreApplication::translate("BannedUsersDlg", "Add", nullptr));
#if QT_CONFIG(tooltip)
        rightButton->setToolTip(QCoreApplication::translate("BannedUsersDlg", "Remove banned user", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        leftButton->setToolTip(QCoreApplication::translate("BannedUsersDlg", "Put back to banned users", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("BannedUsersDlg", "Unbanned Users", nullptr));
#if QT_CONFIG(accessibility)
        unbannedTableView->setAccessibleName(QCoreApplication::translate("BannedUsersDlg", "Unbanned users", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class BannedUsersDlg: public Ui_BannedUsersDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNEDUSERS_H
