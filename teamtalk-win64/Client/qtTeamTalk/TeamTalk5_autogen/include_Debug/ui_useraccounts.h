/********************************************************************************
** Form generated from reading UI file 'useraccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNTS_H
#define UI_USERACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_UserAccountsDlg
{
public:
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    MyTableView *usersTableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *UserAccountsDlg)
    {
        if (UserAccountsDlg->objectName().isEmpty())
            UserAccountsDlg->setObjectName("UserAccountsDlg");
        UserAccountsDlg->resize(815, 600);
        UserAccountsDlg->setSizeGripEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(UserAccountsDlg);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        splitter = new QSplitter(UserAccountsDlg);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        usersTableView = new MyTableView(groupBox);
        usersTableView->setObjectName("usersTableView");
        usersTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        usersTableView->setTabKeyNavigation(false);
        usersTableView->setAlternatingRowColors(true);
        usersTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        usersTableView->setSortingEnabled(true);

        verticalLayout->addWidget(usersTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(groupBox);

        horizontalLayout_4->addWidget(splitter);


        retranslateUi(UserAccountsDlg);

        QMetaObject::connectSlotsByName(UserAccountsDlg);
    } // setupUi

    void retranslateUi(QDialog *UserAccountsDlg)
    {
        UserAccountsDlg->setWindowTitle(QCoreApplication::translate("UserAccountsDlg", "User Accounts", nullptr));
        groupBox->setTitle(QCoreApplication::translate("UserAccountsDlg", "Active User Accounts", nullptr));
#if QT_CONFIG(accessibility)
        usersTableView->setAccessibleName(QCoreApplication::translate("UserAccountsDlg", "User accounts", nullptr));
#endif // QT_CONFIG(accessibility)
        addButton->setText(QCoreApplication::translate("UserAccountsDlg", "&New User Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAccountsDlg: public Ui_UserAccountsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNTS_H
