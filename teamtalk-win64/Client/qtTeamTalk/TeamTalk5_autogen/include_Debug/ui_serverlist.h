/********************************************************************************
** Form generated from reading UI file 'serverlist.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERLIST_H
#define UI_SERVERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_ServerListDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutFilters;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *filternameEdit;
    QLabel *label_9;
    QSpinBox *filterusersSpinBox;
    QCheckBox *officialserverChkBox;
    QCheckBox *unofficialserverChkBox;
    QGroupBox *groupBoxServerList;
    QVBoxLayout *verticalLayoutServerList;
    MyTableView *serverTableView;
    QGridLayout *gridLayout;
    QPushButton *newsrvButton;
    QPushButton *expttButton;
    QPushButton *impttButton;
    QPushButton *joincodeButton;
    QLabel *label_7;
    QListWidget *hostListWidget;

    void setupUi(QDialog *ServerListDlg)
    {
        if (ServerListDlg->objectName().isEmpty())
            ServerListDlg->setObjectName("ServerListDlg");
        ServerListDlg->resize(476, 517);
        verticalLayout = new QVBoxLayout(ServerListDlg);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayoutFilters = new QHBoxLayout();
        horizontalLayoutFilters->setObjectName("horizontalLayoutFilters");
        groupBox_6 = new QGroupBox(ServerListDlg);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        filternameEdit = new QLineEdit(groupBox_6);
        filternameEdit->setObjectName("filternameEdit");

        horizontalLayout_3->addWidget(filternameEdit);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        filterusersSpinBox = new QSpinBox(groupBox_6);
        filterusersSpinBox->setObjectName("filterusersSpinBox");
        filterusersSpinBox->setMaximum(4096);

        horizontalLayout_3->addWidget(filterusersSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        officialserverChkBox = new QCheckBox(groupBox_6);
        officialserverChkBox->setObjectName("officialserverChkBox");

        verticalLayout_4->addWidget(officialserverChkBox);

        unofficialserverChkBox = new QCheckBox(groupBox_6);
        unofficialserverChkBox->setObjectName("unofficialserverChkBox");

        verticalLayout_4->addWidget(unofficialserverChkBox);


        horizontalLayoutFilters->addWidget(groupBox_6);


        verticalLayout->addLayout(horizontalLayoutFilters);

        groupBoxServerList = new QGroupBox(ServerListDlg);
        groupBoxServerList->setObjectName("groupBoxServerList");
        verticalLayoutServerList = new QVBoxLayout(groupBoxServerList);
        verticalLayoutServerList->setObjectName("verticalLayoutServerList");
        serverTableView = new MyTableView(groupBoxServerList);
        serverTableView->setObjectName("serverTableView");
        serverTableView->setTabKeyNavigation(false);
        serverTableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        serverTableView->setSortingEnabled(true);

        verticalLayoutServerList->addWidget(serverTableView);


        verticalLayout->addWidget(groupBoxServerList);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        newsrvButton = new QPushButton(ServerListDlg);
        newsrvButton->setObjectName("newsrvButton");

        gridLayout->addWidget(newsrvButton, 0, 0, 1, 1);

        expttButton = new QPushButton(ServerListDlg);
        expttButton->setObjectName("expttButton");

        gridLayout->addWidget(expttButton, 0, 2, 1, 1);

        impttButton = new QPushButton(ServerListDlg);
        impttButton->setObjectName("impttButton");

        gridLayout->addWidget(impttButton, 0, 1, 1, 1);

        joincodeButton = new QPushButton(ServerListDlg);
        joincodeButton->setObjectName("joincodeButton");

        gridLayout->addWidget(joincodeButton, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_7 = new QLabel(ServerListDlg);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        hostListWidget = new QListWidget(ServerListDlg);
        hostListWidget->setObjectName("hostListWidget");
        hostListWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);

        verticalLayout->addWidget(hostListWidget);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(filternameEdit);
        label_9->setBuddy(filterusersSpinBox);
        label_7->setBuddy(hostListWidget);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ServerListDlg);

        QMetaObject::connectSlotsByName(ServerListDlg);
    } // setupUi

    void retranslateUi(QDialog *ServerListDlg)
    {
        ServerListDlg->setWindowTitle(QCoreApplication::translate("ServerListDlg", "Connect to a Server", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_6->setAccessibleName(QCoreApplication::translate("ServerListDlg", "Filter Servers", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_6->setTitle(QCoreApplication::translate("ServerListDlg", "Filter Servers", nullptr));
        label_3->setText(QCoreApplication::translate("ServerListDlg", "Name", nullptr));
        label_9->setText(QCoreApplication::translate("ServerListDlg", "Users", nullptr));
        officialserverChkBox->setText(QCoreApplication::translate("ServerListDlg", "Include official servers (blue ones)", nullptr));
        unofficialserverChkBox->setText(QCoreApplication::translate("ServerListDlg", "Include unofficial servers (orange ones)", nullptr));
        groupBoxServerList->setTitle(QCoreApplication::translate("ServerListDlg", "Server List", nullptr));
#if QT_CONFIG(accessibility)
        serverTableView->setAccessibleName(QCoreApplication::translate("ServerListDlg", "Saved Hosts", nullptr));
#endif // QT_CONFIG(accessibility)
        newsrvButton->setText(QCoreApplication::translate("ServerListDlg", "&Add new server", nullptr));
        expttButton->setText(QCoreApplication::translate("ServerListDlg", "&Export Server list to .tt File", nullptr));
        impttButton->setText(QCoreApplication::translate("ServerListDlg", "&Import .tt File", nullptr));
        joincodeButton->setText(QCoreApplication::translate("ServerListDlg", "Enter Join Code", nullptr));
        label_7->setText(QCoreApplication::translate("ServerListDlg", "Latest hosts", nullptr));
#if QT_CONFIG(accessibility)
        hostListWidget->setAccessibleName(QCoreApplication::translate("ServerListDlg", "Latest Hosts", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class ServerListDlg: public Ui_ServerListDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERLIST_H
