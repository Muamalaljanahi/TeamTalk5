/********************************************************************************
** Form generated from reading UI file 'serverscanner.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERSCANNER_H
#define UI_SERVERSCANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ServerScannerDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *filterLayout;
    QCheckBox *chkSaved;
    QCheckBox *chkPublic;
    QListWidget *serverListWidget;
    QHBoxLayout *actionLayout;
    QPushButton *btnToggleAll;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ServerScannerDlg)
    {
        if (ServerScannerDlg->objectName().isEmpty())
            ServerScannerDlg->setObjectName("ServerScannerDlg");
        ServerScannerDlg->resize(400, 500);
        verticalLayout = new QVBoxLayout(ServerScannerDlg);
        verticalLayout->setObjectName("verticalLayout");
        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName("filterLayout");
        chkSaved = new QCheckBox(ServerScannerDlg);
        chkSaved->setObjectName("chkSaved");
        chkSaved->setChecked(true);

        filterLayout->addWidget(chkSaved);

        chkPublic = new QCheckBox(ServerScannerDlg);
        chkPublic->setObjectName("chkPublic");
        chkPublic->setChecked(true);

        filterLayout->addWidget(chkPublic);


        verticalLayout->addLayout(filterLayout);

        serverListWidget = new QListWidget(ServerScannerDlg);
        serverListWidget->setObjectName("serverListWidget");
        serverListWidget->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(serverListWidget);

        actionLayout = new QHBoxLayout();
        actionLayout->setObjectName("actionLayout");
        btnToggleAll = new QPushButton(ServerScannerDlg);
        btnToggleAll->setObjectName("btnToggleAll");

        actionLayout->addWidget(btnToggleAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        actionLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ServerScannerDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        actionLayout->addWidget(buttonBox);


        verticalLayout->addLayout(actionLayout);


        retranslateUi(ServerScannerDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ServerScannerDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ServerScannerDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ServerScannerDlg);
    } // setupUi

    void retranslateUi(QDialog *ServerScannerDlg)
    {
        ServerScannerDlg->setWindowTitle(QCoreApplication::translate("ServerScannerDlg", "Scan Servers", nullptr));
        chkSaved->setText(QCoreApplication::translate("ServerScannerDlg", "Saved Servers", nullptr));
        chkPublic->setText(QCoreApplication::translate("ServerScannerDlg", "Public Servers", nullptr));
        btnToggleAll->setText(QCoreApplication::translate("ServerScannerDlg", "Toggle All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerScannerDlg: public Ui_ServerScannerDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERSCANNER_H
