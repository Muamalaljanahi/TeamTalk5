/********************************************************************************
** Form generated from reading UI file 'statusbardlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSBARDLG_H
#define UI_STATUSBARDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_StatusBarDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *events_groupBox;
    QVBoxLayout *verticalLayout_1;
    MyTableView *statusBarTableView;
    QGroupBox *sbmsg_groupbox;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_29;
    QLabel *SBMsgLabel;
    QLineEdit *SBMsgEdit;
    QPushButton *SBVarButton;
    QPushButton *SBDefValButton;
    QPushButton *SBDefAllValButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *statusBarEnableallButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *statusBarClearallButton;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *statusBarRevertButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatusBarDlg)
    {
        if (StatusBarDlg->objectName().isEmpty())
            StatusBarDlg->setObjectName("StatusBarDlg");
        StatusBarDlg->resize(675, 530);
        verticalLayout = new QVBoxLayout(StatusBarDlg);
        verticalLayout->setObjectName("verticalLayout");
        events_groupBox = new QGroupBox(StatusBarDlg);
        events_groupBox->setObjectName("events_groupBox");
        verticalLayout_1 = new QVBoxLayout(events_groupBox);
        verticalLayout_1->setObjectName("verticalLayout_1");
        statusBarTableView = new MyTableView(events_groupBox);
        statusBarTableView->setObjectName("statusBarTableView");
        statusBarTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        statusBarTableView->setProperty("showDropIndicator", QVariant(false));
        statusBarTableView->setAlternatingRowColors(true);
        statusBarTableView->setTabKeyNavigation(false);

        verticalLayout_1->addWidget(statusBarTableView);

        sbmsg_groupbox = new QGroupBox(events_groupBox);
        sbmsg_groupbox->setObjectName("sbmsg_groupbox");
        verticalLayout_16 = new QVBoxLayout(sbmsg_groupbox);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        SBMsgLabel = new QLabel(sbmsg_groupbox);
        SBMsgLabel->setObjectName("SBMsgLabel");

        horizontalLayout_29->addWidget(SBMsgLabel);

        SBMsgEdit = new QLineEdit(sbmsg_groupbox);
        SBMsgEdit->setObjectName("SBMsgEdit");

        horizontalLayout_29->addWidget(SBMsgEdit);


        verticalLayout_16->addLayout(horizontalLayout_29);

        SBVarButton = new QPushButton(sbmsg_groupbox);
        SBVarButton->setObjectName("SBVarButton");

        verticalLayout_16->addWidget(SBVarButton);

        SBDefValButton = new QPushButton(sbmsg_groupbox);
        SBDefValButton->setObjectName("SBDefValButton");

        verticalLayout_16->addWidget(SBDefValButton);

        SBDefAllValButton = new QPushButton(sbmsg_groupbox);
        SBDefAllValButton->setObjectName("SBDefAllValButton");

        verticalLayout_16->addWidget(SBDefAllValButton);


        verticalLayout_1->addWidget(sbmsg_groupbox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        statusBarEnableallButton = new QPushButton(events_groupBox);
        statusBarEnableallButton->setObjectName("statusBarEnableallButton");

        horizontalLayout->addWidget(statusBarEnableallButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        statusBarClearallButton = new QPushButton(events_groupBox);
        statusBarClearallButton->setObjectName("statusBarClearallButton");

        horizontalLayout->addWidget(statusBarClearallButton);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_25);

        statusBarRevertButton = new QPushButton(events_groupBox);
        statusBarRevertButton->setObjectName("statusBarRevertButton");

        horizontalLayout->addWidget(statusBarRevertButton);


        verticalLayout_1->addLayout(horizontalLayout);


        verticalLayout->addWidget(events_groupBox);

        buttonBox = new QDialogButtonBox(StatusBarDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        SBMsgLabel->setBuddy(SBMsgEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(StatusBarDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StatusBarDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StatusBarDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StatusBarDlg);
    } // setupUi

    void retranslateUi(QDialog *StatusBarDlg)
    {
        StatusBarDlg->setWindowTitle(QCoreApplication::translate("StatusBarDlg", "Configure status bar", nullptr));
        events_groupBox->setTitle(QCoreApplication::translate("StatusBarDlg", "Enable/disable status bar events", nullptr));
#if QT_CONFIG(tooltip)
        statusBarTableView->setToolTip(QCoreApplication::translate("StatusBarDlg", "Double click to check/uncheck", nullptr));
#endif // QT_CONFIG(tooltip)
        sbmsg_groupbox->setTitle(QCoreApplication::translate("StatusBarDlg", "Status Bar Message", nullptr));
        SBMsgLabel->setText(QCoreApplication::translate("StatusBarDlg", "Message", nullptr));
        SBVarButton->setText(QCoreApplication::translate("StatusBarDlg", "&Variables...", nullptr));
        SBDefValButton->setText(QCoreApplication::translate("StatusBarDlg", "Reset to Default Value", nullptr));
        SBDefAllValButton->setText(QCoreApplication::translate("StatusBarDlg", "Reset All to Default Value", nullptr));
        statusBarEnableallButton->setText(QCoreApplication::translate("StatusBarDlg", "Enable &all", nullptr));
        statusBarClearallButton->setText(QCoreApplication::translate("StatusBarDlg", "C&lear all", nullptr));
        statusBarRevertButton->setText(QCoreApplication::translate("StatusBarDlg", "&Revert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusBarDlg: public Ui_StatusBarDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSBARDLG_H
