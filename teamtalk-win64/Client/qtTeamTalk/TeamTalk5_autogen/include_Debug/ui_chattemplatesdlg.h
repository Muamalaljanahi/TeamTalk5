/********************************************************************************
** Form generated from reading UI file 'chattemplatesdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTEMPLATESDLG_H
#define UI_CHATTEMPLATESDLG_H

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
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_ChatTemplatesDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *templates_groupBox;
    QVBoxLayout *verticalLayout_1;
    MyTableView *chatTemplatesTableView;
    QGroupBox *ctmsg_groupbox;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_29;
    QLabel *CTMsgLabel;
    QLineEdit *CTMsgEdit;
    QPushButton *CTVarButton;
    QPushButton *CTDefValButton;
    QPushButton *CTDefAllValButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChatTemplatesDlg)
    {
        if (ChatTemplatesDlg->objectName().isEmpty())
            ChatTemplatesDlg->setObjectName("ChatTemplatesDlg");
        ChatTemplatesDlg->resize(675, 530);
        verticalLayout = new QVBoxLayout(ChatTemplatesDlg);
        verticalLayout->setObjectName("verticalLayout");
        templates_groupBox = new QGroupBox(ChatTemplatesDlg);
        templates_groupBox->setObjectName("templates_groupBox");
        verticalLayout_1 = new QVBoxLayout(templates_groupBox);
        verticalLayout_1->setObjectName("verticalLayout_1");
        chatTemplatesTableView = new MyTableView(templates_groupBox);
        chatTemplatesTableView->setObjectName("chatTemplatesTableView");
        chatTemplatesTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        chatTemplatesTableView->setProperty("showDropIndicator", QVariant(false));
        chatTemplatesTableView->setAlternatingRowColors(true);
        chatTemplatesTableView->setTabKeyNavigation(false);

        verticalLayout_1->addWidget(chatTemplatesTableView);

        ctmsg_groupbox = new QGroupBox(templates_groupBox);
        ctmsg_groupbox->setObjectName("ctmsg_groupbox");
        verticalLayout_16 = new QVBoxLayout(ctmsg_groupbox);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        CTMsgLabel = new QLabel(ctmsg_groupbox);
        CTMsgLabel->setObjectName("CTMsgLabel");

        horizontalLayout_29->addWidget(CTMsgLabel);

        CTMsgEdit = new QLineEdit(ctmsg_groupbox);
        CTMsgEdit->setObjectName("CTMsgEdit");

        horizontalLayout_29->addWidget(CTMsgEdit);


        verticalLayout_16->addLayout(horizontalLayout_29);

        CTVarButton = new QPushButton(ctmsg_groupbox);
        CTVarButton->setObjectName("CTVarButton");

        verticalLayout_16->addWidget(CTVarButton);

        CTDefValButton = new QPushButton(ctmsg_groupbox);
        CTDefValButton->setObjectName("CTDefValButton");

        verticalLayout_16->addWidget(CTDefValButton);

        CTDefAllValButton = new QPushButton(ctmsg_groupbox);
        CTDefAllValButton->setObjectName("CTDefAllValButton");

        verticalLayout_16->addWidget(CTDefAllValButton);


        verticalLayout_1->addWidget(ctmsg_groupbox);


        verticalLayout->addWidget(templates_groupBox);

        buttonBox = new QDialogButtonBox(ChatTemplatesDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        CTMsgLabel->setBuddy(CTMsgEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChatTemplatesDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChatTemplatesDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChatTemplatesDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChatTemplatesDlg);
    } // setupUi

    void retranslateUi(QDialog *ChatTemplatesDlg)
    {
        ChatTemplatesDlg->setWindowTitle(QCoreApplication::translate("ChatTemplatesDlg", "Edit chat templates", nullptr));
        templates_groupBox->setTitle(QCoreApplication::translate("ChatTemplatesDlg", "Chat Templates", nullptr));
        ctmsg_groupbox->setTitle(QCoreApplication::translate("ChatTemplatesDlg", "Chat Template", nullptr));
        CTMsgLabel->setText(QCoreApplication::translate("ChatTemplatesDlg", "Template", nullptr));
        CTVarButton->setText(QCoreApplication::translate("ChatTemplatesDlg", "&Variables...", nullptr));
        CTDefValButton->setText(QCoreApplication::translate("ChatTemplatesDlg", "Reset to Default Value", nullptr));
        CTDefAllValButton->setText(QCoreApplication::translate("ChatTemplatesDlg", "Reset All to Default Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatTemplatesDlg: public Ui_ChatTemplatesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTEMPLATESDLG_H
