/********************************************************************************
** Form generated from reading UI file 'encryptionsetupdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTIONSETUPDLG_H
#define UI_ENCRYPTIONSETUPDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EncryptionSetupDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *caEdit;
    QToolButton *cafileBtn;
    QToolButton *cafileresetBtn;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *clientcertEdit;
    QToolButton *clientcertfileBtn;
    QToolButton *clientcertfileresetBtn;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *clientkeyEdit;
    QToolButton *clientkeyfileBtn;
    QToolButton *clientkeyfileresetBtn;
    QCheckBox *verifypeerChkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EncryptionSetupDlg)
    {
        if (EncryptionSetupDlg->objectName().isEmpty())
            EncryptionSetupDlg->setObjectName("EncryptionSetupDlg");
        EncryptionSetupDlg->resize(587, 429);
        verticalLayout = new QVBoxLayout(EncryptionSetupDlg);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(EncryptionSetupDlg);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        caEdit = new QPlainTextEdit(groupBox);
        caEdit->setObjectName("caEdit");
        caEdit->setReadOnly(true);
        caEdit->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(caEdit);

        cafileBtn = new QToolButton(groupBox);
        cafileBtn->setObjectName("cafileBtn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/file_open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        cafileBtn->setIcon(icon);

        horizontalLayout->addWidget(cafileBtn);

        cafileresetBtn = new QToolButton(groupBox);
        cafileresetBtn->setObjectName("cafileresetBtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        cafileresetBtn->setIcon(icon1);

        horizontalLayout->addWidget(cafileresetBtn);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        clientcertEdit = new QPlainTextEdit(groupBox);
        clientcertEdit->setObjectName("clientcertEdit");
        clientcertEdit->setReadOnly(true);
        clientcertEdit->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(clientcertEdit);

        clientcertfileBtn = new QToolButton(groupBox);
        clientcertfileBtn->setObjectName("clientcertfileBtn");
        clientcertfileBtn->setIcon(icon);

        horizontalLayout_2->addWidget(clientcertfileBtn);

        clientcertfileresetBtn = new QToolButton(groupBox);
        clientcertfileresetBtn->setObjectName("clientcertfileresetBtn");
        clientcertfileresetBtn->setIcon(icon1);

        horizontalLayout_2->addWidget(clientcertfileresetBtn);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        clientkeyEdit = new QPlainTextEdit(groupBox);
        clientkeyEdit->setObjectName("clientkeyEdit");
        clientkeyEdit->setReadOnly(true);
        clientkeyEdit->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(clientkeyEdit);

        clientkeyfileBtn = new QToolButton(groupBox);
        clientkeyfileBtn->setObjectName("clientkeyfileBtn");
        clientkeyfileBtn->setIcon(icon);

        horizontalLayout_3->addWidget(clientkeyfileBtn);

        clientkeyfileresetBtn = new QToolButton(groupBox);
        clientkeyfileresetBtn->setObjectName("clientkeyfileresetBtn");
        clientkeyfileresetBtn->setIcon(icon1);

        horizontalLayout_3->addWidget(clientkeyfileresetBtn);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        verifypeerChkBox = new QCheckBox(groupBox);
        verifypeerChkBox->setObjectName("verifypeerChkBox");

        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, verifypeerChkBox);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(EncryptionSetupDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(caEdit);
        label_2->setBuddy(clientcertEdit);
        label_3->setBuddy(clientkeyEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EncryptionSetupDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EncryptionSetupDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EncryptionSetupDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EncryptionSetupDlg);
    } // setupUi

    void retranslateUi(QDialog *EncryptionSetupDlg)
    {
        EncryptionSetupDlg->setWindowTitle(QCoreApplication::translate("EncryptionSetupDlg", "Setup Encryption", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EncryptionSetupDlg", "Client Encryption Settings", nullptr));
        label->setText(QCoreApplication::translate("EncryptionSetupDlg", "Certificate Authority (CA)", nullptr));
        cafileBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        cafileBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Browse", nullptr));
#endif // QT_CONFIG(accessibility)
        cafileresetBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        cafileresetBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Reset", nullptr));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("EncryptionSetupDlg", "Client certificate", nullptr));
        clientcertfileBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        clientcertfileBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Browse", nullptr));
#endif // QT_CONFIG(accessibility)
        clientcertfileresetBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        clientcertfileresetBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Reset", nullptr));
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("EncryptionSetupDlg", "Client private key", nullptr));
        clientkeyfileBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        clientkeyfileBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Browse", nullptr));
#endif // QT_CONFIG(accessibility)
        clientkeyfileresetBtn->setText(QCoreApplication::translate("EncryptionSetupDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        clientkeyfileresetBtn->setAccessibleName(QCoreApplication::translate("EncryptionSetupDlg", "Reset", nullptr));
#endif // QT_CONFIG(accessibility)
        verifypeerChkBox->setText(QCoreApplication::translate("EncryptionSetupDlg", "Verify server certificate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncryptionSetupDlg: public Ui_EncryptionSetupDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTIONSETUPDLG_H
