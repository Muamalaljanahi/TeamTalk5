/********************************************************************************
** Form generated from reading UI file 'onlineusers.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEUSERS_H
#define UI_ONLINEUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_OnlineUsersDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    MyTableView *tableView;
    QCheckBox *keepDisconnectedUsersCheckBox;

    void setupUi(QDialog *OnlineUsersDlg)
    {
        if (OnlineUsersDlg->objectName().isEmpty())
            OnlineUsersDlg->setObjectName("OnlineUsersDlg");
        OnlineUsersDlg->resize(588, 617);
        verticalLayout = new QVBoxLayout(OnlineUsersDlg);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(OnlineUsersDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableView = new MyTableView(groupBox);
        tableView->setObjectName("tableView");
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);

        verticalLayout_2->addWidget(tableView);

        keepDisconnectedUsersCheckBox = new QCheckBox(groupBox);
        keepDisconnectedUsersCheckBox->setObjectName("keepDisconnectedUsersCheckBox");

        verticalLayout_2->addWidget(keepDisconnectedUsersCheckBox);


        verticalLayout->addWidget(groupBox);


        retranslateUi(OnlineUsersDlg);

        QMetaObject::connectSlotsByName(OnlineUsersDlg);
    } // setupUi

    void retranslateUi(QDialog *OnlineUsersDlg)
    {
        OnlineUsersDlg->setWindowTitle(QCoreApplication::translate("OnlineUsersDlg", "Online Users", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OnlineUsersDlg", "Users Currently on Server", nullptr));
#if QT_CONFIG(accessibility)
        tableView->setAccessibleName(QCoreApplication::translate("OnlineUsersDlg", "Online users", nullptr));
#endif // QT_CONFIG(accessibility)
        keepDisconnectedUsersCheckBox->setText(QCoreApplication::translate("OnlineUsersDlg", "Keep disconnected users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OnlineUsersDlg: public Ui_OnlineUsersDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEUSERS_H
