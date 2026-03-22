/********************************************************************************
** Form generated from reading UI file 'serverdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERDLG_H
#define UI_SERVERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ServerDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *hostaddrEdit;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpinBox *tcpportSpinbox;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *udpportSpinbox;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *cryptChkBox;
    QPushButton *encsetupBtn;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QCheckBox *bdkLogChkBox;
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwdLabel;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *passwordEdit;
    QCheckBox *passwordChkBox;
    QLineEdit *nicknameEdit;
    QLabel *label_nick;
    QLineEdit *statusmsgEdit;
    QLabel *label_status;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QCheckBox *lastChanChkBox;
    QLabel *channel_label;
    QLineEdit *channelEdit;
    QLabel *chanpsw_label;
    QHBoxLayout *horizontalLayout_1;
    QLineEdit *chanpasswdEdit;
    QCheckBox *chanpasswordChkBox;
    QGroupBox *joincodeGroupBox;
    QFormLayout *formLayout_4;
    QLabel *label_3;
    QLineEdit *joinCodeEdit;
    QCheckBox *connectSrvBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ServerDlg)
    {
        if (ServerDlg->objectName().isEmpty())
            ServerDlg->setObjectName("ServerDlg");
        ServerDlg->resize(506, 702);
        ServerDlg->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(ServerDlg);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(ServerDlg);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName("formLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        nameEdit = new QLineEdit(groupBox_2);
        nameEdit->setObjectName("nameEdit");

        horizontalLayout_4->addWidget(nameEdit);


        formLayout_3->setLayout(0, QFormLayout::ItemRole::SpanningRole, horizontalLayout_4);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        hostaddrEdit = new QLineEdit(groupBox_2);
        hostaddrEdit->setObjectName("hostaddrEdit");

        horizontalLayout_6->addWidget(hostaddrEdit);


        formLayout_3->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_6);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tcpportSpinbox = new QSpinBox(groupBox_2);
        tcpportSpinbox->setObjectName("tcpportSpinbox");
        tcpportSpinbox->setMaximum(65535);

        horizontalLayout->addWidget(tcpportSpinbox);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);


        formLayout_3->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        udpportSpinbox = new QSpinBox(groupBox_2);
        udpportSpinbox->setObjectName("udpportSpinbox");
        udpportSpinbox->setMaximum(65535);

        horizontalLayout_2->addWidget(udpportSpinbox);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);


        formLayout_3->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        cryptChkBox = new QCheckBox(groupBox_2);
        cryptChkBox->setObjectName("cryptChkBox");

        horizontalLayout_8->addWidget(cryptChkBox);

        encsetupBtn = new QPushButton(groupBox_2);
        encsetupBtn->setObjectName("encsetupBtn");
        encsetupBtn->setEnabled(false);

        horizontalLayout_8->addWidget(encsetupBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        formLayout_3->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout_8);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        bdkLogChkBox = new QCheckBox(groupBox_3);
        bdkLogChkBox->setObjectName("bdkLogChkBox");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, bdkLogChkBox);

        usernameLabel = new QLabel(groupBox_3);
        usernameLabel->setObjectName("usernameLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, usernameLabel);

        usernameEdit = new QLineEdit(groupBox_3);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, usernameEdit);

        passwdLabel = new QLabel(groupBox_3);
        passwdLabel->setObjectName("passwdLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, passwdLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        passwordEdit = new QLineEdit(groupBox_3);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_7->addWidget(passwordEdit);

        passwordChkBox = new QCheckBox(groupBox_3);
        passwordChkBox->setObjectName("passwordChkBox");

        horizontalLayout_7->addWidget(passwordChkBox);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_7);

        nicknameEdit = new QLineEdit(groupBox_3);
        nicknameEdit->setObjectName("nicknameEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, nicknameEdit);

        label_nick = new QLabel(groupBox_3);
        label_nick->setObjectName("label_nick");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_nick);

        statusmsgEdit = new QLineEdit(groupBox_3);
        statusmsgEdit->setObjectName("statusmsgEdit");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, statusmsgEdit);

        label_status = new QLabel(groupBox_3);
        label_status->setObjectName("label_status");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_status);


        formLayout_3->setWidget(5, QFormLayout::ItemRole::SpanningRole, groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName("formLayout_2");
        lastChanChkBox = new QCheckBox(groupBox_4);
        lastChanChkBox->setObjectName("lastChanChkBox");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, lastChanChkBox);

        channel_label = new QLabel(groupBox_4);
        channel_label->setObjectName("channel_label");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, channel_label);

        channelEdit = new QLineEdit(groupBox_4);
        channelEdit->setObjectName("channelEdit");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, channelEdit);

        chanpsw_label = new QLabel(groupBox_4);
        chanpsw_label->setObjectName("chanpsw_label");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, chanpsw_label);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        chanpasswdEdit = new QLineEdit(groupBox_4);
        chanpasswdEdit->setObjectName("chanpasswdEdit");
        chanpasswdEdit->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_1->addWidget(chanpasswdEdit);

        chanpasswordChkBox = new QCheckBox(groupBox_4);
        chanpasswordChkBox->setObjectName("chanpasswordChkBox");

        horizontalLayout_1->addWidget(chanpasswordChkBox);


        formLayout_2->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_1);


        formLayout_3->setWidget(6, QFormLayout::ItemRole::SpanningRole, groupBox_4);

        joincodeGroupBox = new QGroupBox(groupBox_2);
        joincodeGroupBox->setObjectName("joincodeGroupBox");
        formLayout_4 = new QFormLayout(joincodeGroupBox);
        formLayout_4->setObjectName("formLayout_4");
        label_3 = new QLabel(joincodeGroupBox);
        label_3->setObjectName("label_3");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        joinCodeEdit = new QLineEdit(joincodeGroupBox);
        joinCodeEdit->setObjectName("joinCodeEdit");
        joinCodeEdit->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, joinCodeEdit);


        formLayout_3->setWidget(7, QFormLayout::ItemRole::SpanningRole, joincodeGroupBox);


        verticalLayout->addWidget(groupBox_2);

        connectSrvBox = new QCheckBox(ServerDlg);
        connectSrvBox->setObjectName("connectSrvBox");

        verticalLayout->addWidget(connectSrvBox, 0, Qt::AlignmentFlag::AlignRight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ServerDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(nameEdit);
        label_2->setBuddy(hostaddrEdit);
        label_6->setBuddy(tcpportSpinbox);
        label_8->setBuddy(udpportSpinbox);
        usernameLabel->setBuddy(usernameEdit);
        passwdLabel->setBuddy(passwordEdit);
        label_nick->setBuddy(nicknameEdit);
        label_status->setBuddy(statusmsgEdit);
        channel_label->setBuddy(channelEdit);
        chanpsw_label->setBuddy(chanpasswdEdit);
        label_3->setBuddy(joinCodeEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ServerDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ServerDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ServerDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ServerDlg);
    } // setupUi

    void retranslateUi(QDialog *ServerDlg)
    {
        groupBox_2->setTitle(QCoreApplication::translate("ServerDlg", "Server Information", nullptr));
        label->setText(QCoreApplication::translate("ServerDlg", "Entry name", nullptr));
        label_2->setText(QCoreApplication::translate("ServerDlg", "Host IP-address", nullptr));
        label_6->setText(QCoreApplication::translate("ServerDlg", "TCP port", nullptr));
#if QT_CONFIG(accessibility)
        tcpportSpinbox->setAccessibleName(QCoreApplication::translate("ServerDlg", "TCP Port (Default: 10333)", nullptr));
#endif // QT_CONFIG(accessibility)
        label_5->setText(QCoreApplication::translate("ServerDlg", "Default: 10333", nullptr));
        label_8->setText(QCoreApplication::translate("ServerDlg", "UDP port", nullptr));
#if QT_CONFIG(accessibility)
        udpportSpinbox->setAccessibleName(QCoreApplication::translate("ServerDlg", "UDP Port (Default: 10333)", nullptr));
#endif // QT_CONFIG(accessibility)
        label_7->setText(QCoreApplication::translate("ServerDlg", "Default: 10333", nullptr));
        cryptChkBox->setText(QCoreApplication::translate("ServerDlg", "Encrypted server", nullptr));
        encsetupBtn->setText(QCoreApplication::translate("ServerDlg", "Setup", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_3->setAccessibleName(QCoreApplication::translate("ServerDlg", "Authentication (optional)", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_3->setTitle(QCoreApplication::translate("ServerDlg", "Authentication (optional)", nullptr));
        bdkLogChkBox->setText(QCoreApplication::translate("ServerDlg", "Use BearWare.dk Web Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("ServerDlg", "Username", nullptr));
        passwdLabel->setText(QCoreApplication::translate("ServerDlg", "Password", nullptr));
        passwordChkBox->setText(QCoreApplication::translate("ServerDlg", "Show password", nullptr));
        label_nick->setText(QCoreApplication::translate("ServerDlg", "Nickname (optional)", nullptr));
        label_status->setText(QCoreApplication::translate("ServerDlg", "Status message (optional)", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_4->setAccessibleName(QCoreApplication::translate("ServerDlg", "Join specific channel after authentication (optional)", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_4->setTitle(QCoreApplication::translate("ServerDlg", "Join specific channel after authentication (optional)", nullptr));
        lastChanChkBox->setText(QCoreApplication::translate("ServerDlg", "Last Joined Channel", nullptr));
        channel_label->setText(QCoreApplication::translate("ServerDlg", "Channel", nullptr));
        chanpsw_label->setText(QCoreApplication::translate("ServerDlg", "Password", nullptr));
        chanpasswordChkBox->setText(QCoreApplication::translate("ServerDlg", "Show password", nullptr));
        joincodeGroupBox->setTitle(QCoreApplication::translate("ServerDlg", "Join Code for Easy Login", nullptr));
        label_3->setText(QCoreApplication::translate("ServerDlg", "Join Code", nullptr));
        connectSrvBox->setText(QCoreApplication::translate("ServerDlg", "&Connect to Server on exit", nullptr));
        (void)ServerDlg;
    } // retranslateUi

};

namespace Ui {
    class ServerDlg: public Ui_ServerDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERDLG_H
