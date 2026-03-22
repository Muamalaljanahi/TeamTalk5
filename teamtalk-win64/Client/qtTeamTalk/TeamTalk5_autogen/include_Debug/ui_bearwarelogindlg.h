/********************************************************************************
** Form generated from reading UI file 'bearwarelogindlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEARWARELOGINDLG_H
#define UI_BEARWARELOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BearWareLoginDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BearWareLoginDlg)
    {
        if (BearWareLoginDlg->objectName().isEmpty())
            BearWareLoginDlg->setObjectName("BearWareLoginDlg");
        BearWareLoginDlg->resize(351, 337);
        verticalLayout = new QVBoxLayout(BearWareLoginDlg);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(BearWareLoginDlg);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        registerButton = new QPushButton(groupBox_2);
        registerButton->setObjectName("registerButton");

        horizontalLayout->addWidget(registerButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(BearWareLoginDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        usernameEdit = new QLineEdit(groupBox);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(BearWareLoginDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(usernameEdit);
        label_2->setBuddy(passwordEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(BearWareLoginDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BearWareLoginDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BearWareLoginDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BearWareLoginDlg);
    } // setupUi

    void retranslateUi(QDialog *BearWareLoginDlg)
    {
        BearWareLoginDlg->setWindowTitle(QCoreApplication::translate("BearWareLoginDlg", "Activate BearWare.dk Web Login", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("BearWareLoginDlg", "BearWare.dk Web Login", nullptr));
        label_3->setText(QCoreApplication::translate("BearWareLoginDlg", "A BearWare.dk Web Login is used to identify a TeamTalk user. A login ID can be created on the BearWare.dk web site.", nullptr));
        registerButton->setText(QCoreApplication::translate("BearWareLoginDlg", "C&reate", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BearWareLoginDlg", "Authentication", nullptr));
        label->setText(QCoreApplication::translate("BearWareLoginDlg", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("BearWareLoginDlg", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BearWareLoginDlg: public Ui_BearWareLoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEARWARELOGINDLG_H
