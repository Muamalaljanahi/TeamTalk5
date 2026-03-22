/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserInfoDlg
{
public:
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLabel *nicknameLabel;
    QLabel *usernameLabel;
    QLabel *clientLabel;
    QLabel *statusLabel;
    QLabel *statusmsgLabel;
    QLabel *usertypeLabel;
    QLabel *ipLabel;
    QLabel *vplLabel;
    QLabel *vflLabel;
    QLabel *afplLabel;
    QLabel *vfflLabel;
    QPushButton *copyButton;

    void setupUi(QDialog *UserInfoDlg)
    {
        if (UserInfoDlg->objectName().isEmpty())
            UserInfoDlg->setObjectName("UserInfoDlg");
        UserInfoDlg->resize(359, 404);
        formLayout = new QFormLayout(UserInfoDlg);
        formLayout->setObjectName("formLayout");
        idLabel = new QLabel(UserInfoDlg);
        idLabel->setObjectName("idLabel");
        idLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, idLabel);

        nicknameLabel = new QLabel(UserInfoDlg);
        nicknameLabel->setObjectName("nicknameLabel");
        nicknameLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, nicknameLabel);

        usernameLabel = new QLabel(UserInfoDlg);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, usernameLabel);

        clientLabel = new QLabel(UserInfoDlg);
        clientLabel->setObjectName("clientLabel");
        clientLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, clientLabel);

        statusLabel = new QLabel(UserInfoDlg);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, statusLabel);

        statusmsgLabel = new QLabel(UserInfoDlg);
        statusmsgLabel->setObjectName("statusmsgLabel");
        statusmsgLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, statusmsgLabel);

        usertypeLabel = new QLabel(UserInfoDlg);
        usertypeLabel->setObjectName("usertypeLabel");
        usertypeLabel->setFrameShape(QFrame::NoFrame);
        usertypeLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, usertypeLabel);

        ipLabel = new QLabel(UserInfoDlg);
        ipLabel->setObjectName("ipLabel");
        ipLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, ipLabel);

        vplLabel = new QLabel(UserInfoDlg);
        vplLabel->setObjectName("vplLabel");
        vplLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, vplLabel);

        vflLabel = new QLabel(UserInfoDlg);
        vflLabel->setObjectName("vflLabel");
        vflLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, vflLabel);

        afplLabel = new QLabel(UserInfoDlg);
        afplLabel->setObjectName("afplLabel");
        afplLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(10, QFormLayout::ItemRole::LabelRole, afplLabel);

        vfflLabel = new QLabel(UserInfoDlg);
        vfflLabel->setObjectName("vfflLabel");
        vfflLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout->setWidget(11, QFormLayout::ItemRole::LabelRole, vfflLabel);

        copyButton = new QPushButton(UserInfoDlg);
        copyButton->setObjectName("copyButton");

        formLayout->setWidget(12, QFormLayout::ItemRole::LabelRole, copyButton);


        retranslateUi(UserInfoDlg);

        QMetaObject::connectSlotsByName(UserInfoDlg);
    } // setupUi

    void retranslateUi(QDialog *UserInfoDlg)
    {
        UserInfoDlg->setWindowTitle(QCoreApplication::translate("UserInfoDlg", "User Information", nullptr));
        idLabel->setText(QString());
        nicknameLabel->setText(QString());
        usernameLabel->setText(QString());
        clientLabel->setText(QString());
        statusLabel->setText(QString());
        statusmsgLabel->setText(QString());
        usertypeLabel->setText(QString());
        ipLabel->setText(QString());
        vplLabel->setText(QString());
        vflLabel->setText(QString());
        afplLabel->setText(QString());
        vfflLabel->setText(QString());
        copyButton->setText(QCoreApplication::translate("UserInfoDlg", "Copy User Information to Clipboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoDlg: public Ui_UserInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
