/********************************************************************************
** Form generated from reading UI file 'serverproperties.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERPROPERTIES_H
#define UI_SERVERPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "mytableview.h"

QT_BEGIN_NAMESPACE

class Ui_ServerPropertiesDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *servernameEdit;
    QLabel *label_7;
    QSpinBox *maxusersSpinBox;
    QLabel *label_2;
    QPlainTextEdit *motdTextEdit;
    QCheckBox *motdChkBox;
    QPushButton *MOTDVarButton;
    QLabel *label_5;
    QSpinBox *tcpportSpinBox;
    QLabel *label_6;
    QSpinBox *udpportSpinBox;
    QLabel *label_9;
    QSpinBox *usertimeoutSpinBox;
    QCheckBox *autosaveBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_14;
    QSpinBox *audtxSpinBox;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *videotxSpinBox;
    QLabel *label_17;
    QLabel *label_24;
    QSpinBox *mediafiletxSpinBox;
    QLabel *label_25;
    QLabel *label_18;
    QSpinBox *desktoptxSpinBox;
    QLabel *label_19;
    QLabel *label_12;
    QSpinBox *totaltxSpinBox;
    QLabel *label_13;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *label_22;
    QSpinBox *maxloginattemptsSpinBox;
    QLabel *label_23;
    QLabel *label_20;
    QSpinBox *maxiploginsSpinBox;
    QLabel *label_21;
    QLabel *label_3;
    QSpinBox *logindelaySpinBox;
    QLabel *label_10;
    QGroupBox *serverlogGroupBox;
    QHBoxLayout *horizontalLayout_2;
    MyTableView *serverlogTableView;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *serverversionLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ServerPropertiesDlg)
    {
        if (ServerPropertiesDlg->objectName().isEmpty())
            ServerPropertiesDlg->setObjectName("ServerPropertiesDlg");
        ServerPropertiesDlg->resize(751, 674);
        horizontalLayout = new QHBoxLayout(ServerPropertiesDlg);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(ServerPropertiesDlg);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        servernameEdit = new QLineEdit(groupBox);
        servernameEdit->setObjectName("servernameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, servernameEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        maxusersSpinBox = new QSpinBox(groupBox);
        maxusersSpinBox->setObjectName("maxusersSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxusersSpinBox->sizePolicy().hasHeightForWidth());
        maxusersSpinBox->setSizePolicy(sizePolicy);
        maxusersSpinBox->setMaximum(1000);
        maxusersSpinBox->setValue(1000);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, maxusersSpinBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        motdTextEdit = new QPlainTextEdit(groupBox);
        motdTextEdit->setObjectName("motdTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(motdTextEdit->sizePolicy().hasHeightForWidth());
        motdTextEdit->setSizePolicy(sizePolicy1);
        motdTextEdit->setTabChangesFocus(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, motdTextEdit);

        motdChkBox = new QCheckBox(groupBox);
        motdChkBox->setObjectName("motdChkBox");
        motdChkBox->setChecked(true);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, motdChkBox);

        MOTDVarButton = new QPushButton(groupBox);
        MOTDVarButton->setObjectName("MOTDVarButton");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, MOTDVarButton);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        tcpportSpinBox = new QSpinBox(groupBox);
        tcpportSpinBox->setObjectName("tcpportSpinBox");
        sizePolicy.setHeightForWidth(tcpportSpinBox->sizePolicy().hasHeightForWidth());
        tcpportSpinBox->setSizePolicy(sizePolicy);
        tcpportSpinBox->setMinimum(1);
        tcpportSpinBox->setMaximum(65535);
        tcpportSpinBox->setValue(10333);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, tcpportSpinBox);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        udpportSpinBox = new QSpinBox(groupBox);
        udpportSpinBox->setObjectName("udpportSpinBox");
        sizePolicy.setHeightForWidth(udpportSpinBox->sizePolicy().hasHeightForWidth());
        udpportSpinBox->setSizePolicy(sizePolicy);
        udpportSpinBox->setMinimum(1);
        udpportSpinBox->setMaximum(65535);
        udpportSpinBox->setValue(10333);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, udpportSpinBox);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_9);

        usertimeoutSpinBox = new QSpinBox(groupBox);
        usertimeoutSpinBox->setObjectName("usertimeoutSpinBox");
        sizePolicy.setHeightForWidth(usertimeoutSpinBox->sizePolicy().hasHeightForWidth());
        usertimeoutSpinBox->setSizePolicy(sizePolicy);
        usertimeoutSpinBox->setMinimum(1);
        usertimeoutSpinBox->setMaximum(99999);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, usertimeoutSpinBox);

        autosaveBox = new QCheckBox(groupBox);
        autosaveBox->setObjectName("autosaveBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(autosaveBox->sizePolicy().hasHeightForWidth());
        autosaveBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(8, QFormLayout::ItemRole::SpanningRole, autosaveBox);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_5 = new QGroupBox(ServerPropertiesDlg);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName("gridLayout");
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        audtxSpinBox = new QSpinBox(groupBox_5);
        audtxSpinBox->setObjectName("audtxSpinBox");
        audtxSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        audtxSpinBox->setMaximum(1000000);

        gridLayout->addWidget(audtxSpinBox, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 0, 2, 1, 1);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        videotxSpinBox = new QSpinBox(groupBox_5);
        videotxSpinBox->setObjectName("videotxSpinBox");
        videotxSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        videotxSpinBox->setMaximum(1000000);

        gridLayout->addWidget(videotxSpinBox, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 1, 2, 1, 1);

        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName("label_24");

        gridLayout->addWidget(label_24, 2, 0, 1, 1);

        mediafiletxSpinBox = new QSpinBox(groupBox_5);
        mediafiletxSpinBox->setObjectName("mediafiletxSpinBox");
        mediafiletxSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mediafiletxSpinBox->setMaximum(1000000);

        gridLayout->addWidget(mediafiletxSpinBox, 2, 1, 1, 1);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName("label_25");

        gridLayout->addWidget(label_25, 2, 2, 1, 1);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 3, 0, 1, 1);

        desktoptxSpinBox = new QSpinBox(groupBox_5);
        desktoptxSpinBox->setObjectName("desktoptxSpinBox");
        desktoptxSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        desktoptxSpinBox->setMaximum(1000000);

        gridLayout->addWidget(desktoptxSpinBox, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 3, 2, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        totaltxSpinBox = new QSpinBox(groupBox_5);
        totaltxSpinBox->setObjectName("totaltxSpinBox");
        totaltxSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totaltxSpinBox->setMaximum(1000000);

        gridLayout->addWidget(totaltxSpinBox, 4, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 4, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(ServerPropertiesDlg);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName("label_22");

        gridLayout_2->addWidget(label_22, 0, 0, 1, 1);

        maxloginattemptsSpinBox = new QSpinBox(groupBox_6);
        maxloginattemptsSpinBox->setObjectName("maxloginattemptsSpinBox");
        sizePolicy.setHeightForWidth(maxloginattemptsSpinBox->sizePolicy().hasHeightForWidth());
        maxloginattemptsSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(maxloginattemptsSpinBox, 0, 1, 1, 1);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName("label_23");

        gridLayout_2->addWidget(label_23, 0, 2, 1, 1);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName("label_20");

        gridLayout_2->addWidget(label_20, 1, 0, 1, 1);

        maxiploginsSpinBox = new QSpinBox(groupBox_6);
        maxiploginsSpinBox->setObjectName("maxiploginsSpinBox");
        sizePolicy.setHeightForWidth(maxiploginsSpinBox->sizePolicy().hasHeightForWidth());
        maxiploginsSpinBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(maxiploginsSpinBox, 1, 1, 1, 1);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName("label_21");

        gridLayout_2->addWidget(label_21, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        logindelaySpinBox = new QSpinBox(groupBox_6);
        logindelaySpinBox->setObjectName("logindelaySpinBox");
        logindelaySpinBox->setMaximum(100000);

        gridLayout_2->addWidget(logindelaySpinBox, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_6);

        serverlogGroupBox = new QGroupBox(ServerPropertiesDlg);
        serverlogGroupBox->setObjectName("serverlogGroupBox");
        horizontalLayout_2 = new QHBoxLayout(serverlogGroupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        serverlogTableView = new MyTableView(serverlogGroupBox);
        serverlogTableView->setObjectName("serverlogTableView");
        serverlogTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        serverlogTableView->setTabKeyNavigation(false);
        serverlogTableView->setProperty("showDropIndicator", QVariant(false));
        serverlogTableView->setAlternatingRowColors(true);

        horizontalLayout_2->addWidget(serverlogTableView);


        verticalLayout_2->addWidget(serverlogGroupBox);

        groupBox_3 = new QGroupBox(ServerPropertiesDlg);
        groupBox_3->setObjectName("groupBox_3");
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        serverversionLabel = new QLabel(groupBox_3);
        serverversionLabel->setObjectName("serverversionLabel");
        serverversionLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, serverversionLabel);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ServerPropertiesDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(servernameEdit);
        label_7->setBuddy(maxusersSpinBox);
        label_2->setBuddy(motdTextEdit);
        label_5->setBuddy(tcpportSpinBox);
        label_6->setBuddy(udpportSpinBox);
        label_9->setBuddy(usertimeoutSpinBox);
        label_14->setBuddy(audtxSpinBox);
        label_16->setBuddy(videotxSpinBox);
        label_24->setBuddy(mediafiletxSpinBox);
        label_18->setBuddy(desktoptxSpinBox);
        label_12->setBuddy(totaltxSpinBox);
        label_22->setBuddy(maxloginattemptsSpinBox);
        label_20->setBuddy(maxiploginsSpinBox);
        label_3->setBuddy(logindelaySpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ServerPropertiesDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ServerPropertiesDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ServerPropertiesDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ServerPropertiesDlg);
    } // setupUi

    void retranslateUi(QDialog *ServerPropertiesDlg)
    {
        ServerPropertiesDlg->setWindowTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Properties", nullptr));
        label->setText(QCoreApplication::translate("ServerPropertiesDlg", "Server name", nullptr));
        label_7->setText(QCoreApplication::translate("ServerPropertiesDlg", "Max users", nullptr));
        label_2->setText(QCoreApplication::translate("ServerPropertiesDlg", "Message of the day", nullptr));
        motdChkBox->setText(QCoreApplication::translate("ServerPropertiesDlg", "Show variables", nullptr));
        MOTDVarButton->setText(QCoreApplication::translate("ServerPropertiesDlg", "&Variables...", nullptr));
        label_5->setText(QCoreApplication::translate("ServerPropertiesDlg", "TCP port", nullptr));
        label_6->setText(QCoreApplication::translate("ServerPropertiesDlg", "UDP port", nullptr));
        label_9->setText(QCoreApplication::translate("ServerPropertiesDlg", "User timeout", nullptr));
        autosaveBox->setText(QCoreApplication::translate("ServerPropertiesDlg", "Auto save server changes", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Bandwidth Limitations", nullptr));
        label_14->setText(QCoreApplication::translate("ServerPropertiesDlg", "Voice TX max", nullptr));
        label_15->setText(QCoreApplication::translate("ServerPropertiesDlg", "KBytes/sec (0 = disabled)", nullptr));
        label_16->setText(QCoreApplication::translate("ServerPropertiesDlg", "Video TX max", nullptr));
        label_17->setText(QCoreApplication::translate("ServerPropertiesDlg", "KBytes/sec (0 = disabled)", nullptr));
        label_24->setText(QCoreApplication::translate("ServerPropertiesDlg", "Media File TX max", nullptr));
        label_25->setText(QCoreApplication::translate("ServerPropertiesDlg", "KBytes/sec (0 = disabled)", nullptr));
        label_18->setText(QCoreApplication::translate("ServerPropertiesDlg", "Desktop TX max", nullptr));
        label_19->setText(QCoreApplication::translate("ServerPropertiesDlg", "KBytes/sec (0 = disabled)", nullptr));
        label_12->setText(QCoreApplication::translate("ServerPropertiesDlg", "Total TX max", nullptr));
        label_13->setText(QCoreApplication::translate("ServerPropertiesDlg", "KBytes/sec (0 = disabled)", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Abuse", nullptr));
        label_22->setText(QCoreApplication::translate("ServerPropertiesDlg", "Max login attempts before ban", nullptr));
        label_23->setText(QCoreApplication::translate("ServerPropertiesDlg", "(0 = disabled)", nullptr));
        label_20->setText(QCoreApplication::translate("ServerPropertiesDlg", "Max logins per IP-address", nullptr));
        label_21->setText(QCoreApplication::translate("ServerPropertiesDlg", "(0 = disabled)", nullptr));
        label_3->setText(QCoreApplication::translate("ServerPropertiesDlg", "Login delay per IP-address", nullptr));
        label_10->setText(QCoreApplication::translate("ServerPropertiesDlg", "msec (0 = disabled)", nullptr));
        serverlogGroupBox->setTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Logging", nullptr));
#if QT_CONFIG(accessibility)
        serverlogTableView->setAccessibleName(QCoreApplication::translate("ServerPropertiesDlg", "Server events logged", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_3->setTitle(QCoreApplication::translate("ServerPropertiesDlg", "Server Information", nullptr));
        serverversionLabel->setText(QCoreApplication::translate("ServerPropertiesDlg", "Server version: 0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerPropertiesDlg: public Ui_ServerPropertiesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERPROPERTIES_H
