/********************************************************************************
** Form generated from reading UI file 'generatettfile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATETTFILE_H
#define UI_GENERATETTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GenTTFileDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_10;
    QLineEdit *usernameEdit;
    QLabel *label_11;
    QLineEdit *passwordEdit;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *overrideChkBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nicknameEdit;
    QLabel *statusmsgLabel;
    QLineEdit *statusmsgEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_12;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QRadioButton *neutralRadioButton;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_3;
    QCheckBox *pttChkBox;
    QPushButton *setupkeysButton;
    QLabel *label_9;
    QLineEdit *keycompEdit;
    QCheckBox *voiceactChkBox;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *vidgroupBox;
    QFormLayout *formLayout_4;
    QLabel *label_15;
    QComboBox *captureformatsBox;
    QLabel *label_33;
    QComboBox *vidcodecBox;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *vidbitrateSpinBox;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBtn;
    QPushButton *closeBtn;

    void setupUi(QDialog *GenTTFileDlg)
    {
        if (GenTTFileDlg->objectName().isEmpty())
            GenTTFileDlg->setObjectName("GenTTFileDlg");
        GenTTFileDlg->resize(481, 494);
        verticalLayout_4 = new QVBoxLayout(GenTTFileDlg);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox_3 = new QGroupBox(GenTTFileDlg);
        groupBox_3->setObjectName("groupBox_3");
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_10);

        usernameEdit = new QLineEdit(groupBox_3);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameEdit);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_11);

        passwordEdit = new QLineEdit(groupBox_3);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordEdit);


        horizontalLayout_5->addWidget(groupBox_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        groupBox = new QGroupBox(GenTTFileDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        overrideChkBox = new QCheckBox(groupBox);
        overrideChkBox->setObjectName("overrideChkBox");

        verticalLayout_2->addWidget(overrideChkBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nicknameEdit = new QLineEdit(groupBox_2);
        nicknameEdit->setObjectName("nicknameEdit");
        nicknameEdit->setEnabled(false);

        horizontalLayout->addWidget(nicknameEdit);

        statusmsgLabel = new QLabel(groupBox_2);
        statusmsgLabel->setObjectName("statusmsgLabel");

        horizontalLayout->addWidget(statusmsgLabel);

        statusmsgEdit = new QLineEdit(groupBox_2);
        statusmsgEdit->setObjectName("statusmsgEdit");
        statusmsgEdit->setEnabled(false);

        horizontalLayout->addWidget(statusmsgEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        maleRadioButton = new QRadioButton(groupBox_2);
        maleRadioButton->setObjectName("maleRadioButton");
        maleRadioButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maleRadioButton->sizePolicy().hasHeightForWidth());
        maleRadioButton->setSizePolicy(sizePolicy);
        maleRadioButton->setLayoutDirection(Qt::LeftToRight);
        maleRadioButton->setChecked(true);

        horizontalLayout_7->addWidget(maleRadioButton);

        femaleRadioButton = new QRadioButton(groupBox_2);
        femaleRadioButton->setObjectName("femaleRadioButton");
        femaleRadioButton->setEnabled(false);

        horizontalLayout_7->addWidget(femaleRadioButton);

        neutralRadioButton = new QRadioButton(groupBox_2);
        neutralRadioButton->setObjectName("neutralRadioButton");
        neutralRadioButton->setEnabled(false);

        horizontalLayout_7->addWidget(neutralRadioButton);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        formLayout_3 = new QFormLayout(groupBox_5);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pttChkBox = new QCheckBox(groupBox_5);
        pttChkBox->setObjectName("pttChkBox");
        pttChkBox->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, pttChkBox);

        setupkeysButton = new QPushButton(groupBox_5);
        setupkeysButton->setObjectName("setupkeysButton");
        setupkeysButton->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, setupkeysButton);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_9);

        keycompEdit = new QLineEdit(groupBox_5);
        keycompEdit->setObjectName("keycompEdit");
        keycompEdit->setEnabled(false);
        keycompEdit->setReadOnly(true);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, keycompEdit);

        voiceactChkBox = new QCheckBox(groupBox_5);
        voiceactChkBox->setObjectName("voiceactChkBox");
        voiceactChkBox->setEnabled(false);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, voiceactChkBox);


        horizontalLayout_3->addWidget(groupBox_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        vidgroupBox = new QGroupBox(groupBox);
        vidgroupBox->setObjectName("vidgroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vidgroupBox->sizePolicy().hasHeightForWidth());
        vidgroupBox->setSizePolicy(sizePolicy1);
        formLayout_4 = new QFormLayout(vidgroupBox);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_15 = new QLabel(vidgroupBox);
        label_15->setObjectName("label_15");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_15);

        captureformatsBox = new QComboBox(vidgroupBox);
        captureformatsBox->setObjectName("captureformatsBox");
        captureformatsBox->setEnabled(false);

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, captureformatsBox);

        label_33 = new QLabel(vidgroupBox);
        label_33->setObjectName("label_33");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_33);

        vidcodecBox = new QComboBox(vidgroupBox);
        vidcodecBox->setObjectName("vidcodecBox");
        vidcodecBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vidcodecBox->sizePolicy().hasHeightForWidth());
        vidcodecBox->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, vidcodecBox);

        label_35 = new QLabel(vidgroupBox);
        label_35->setObjectName("label_35");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_35);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        vidbitrateSpinBox = new QSpinBox(vidgroupBox);
        vidbitrateSpinBox->setObjectName("vidbitrateSpinBox");
        vidbitrateSpinBox->setEnabled(false);
        sizePolicy2.setHeightForWidth(vidbitrateSpinBox->sizePolicy().hasHeightForWidth());
        vidbitrateSpinBox->setSizePolicy(sizePolicy2);
        vidbitrateSpinBox->setMinimum(0);
        vidbitrateSpinBox->setMaximum(1000);
        vidbitrateSpinBox->setValue(0);

        horizontalLayout_9->addWidget(vidbitrateSpinBox);

        label_36 = new QLabel(vidgroupBox);
        label_36->setObjectName("label_36");
        label_36->setText(QString::fromUtf8("kbps"));

        horizontalLayout_9->addWidget(label_36);


        formLayout_4->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_9);


        horizontalLayout_4->addWidget(vidgroupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveBtn = new QPushButton(GenTTFileDlg);
        saveBtn->setObjectName("saveBtn");

        horizontalLayout_2->addWidget(saveBtn);

        closeBtn = new QPushButton(GenTTFileDlg);
        closeBtn->setObjectName("closeBtn");

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_4->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        label_10->setBuddy(usernameEdit);
        label_11->setBuddy(passwordEdit);
        label->setBuddy(nicknameEdit);
        statusmsgLabel->setBuddy(statusmsgEdit);
        label_7->setBuddy(maleRadioButton);
        label_9->setBuddy(keycompEdit);
        label_15->setBuddy(captureformatsBox);
        label_33->setBuddy(vidcodecBox);
        label_35->setBuddy(vidbitrateSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(GenTTFileDlg);

        QMetaObject::connectSlotsByName(GenTTFileDlg);
    } // setupUi

    void retranslateUi(QDialog *GenTTFileDlg)
    {
        GenTTFileDlg->setWindowTitle(QCoreApplication::translate("GenTTFileDlg", "Generate .tt File", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_3->setAccessibleName(QCoreApplication::translate("GenTTFileDlg", "Authentication (optional)", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_3->setTitle(QCoreApplication::translate("GenTTFileDlg", "Authentication (optional)", nullptr));
        label_10->setText(QCoreApplication::translate("GenTTFileDlg", "Username", nullptr));
        label_11->setText(QCoreApplication::translate("GenTTFileDlg", "Password", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GenTTFileDlg", "Client settings", nullptr));
        overrideChkBox->setText(QCoreApplication::translate("GenTTFileDlg", "Override client's predefined settings", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GenTTFileDlg", "User Settings", nullptr));
        label->setText(QCoreApplication::translate("GenTTFileDlg", "Nickname", nullptr));
        statusmsgLabel->setText(QCoreApplication::translate("GenTTFileDlg", "Status Message", nullptr));
        label_7->setText(QCoreApplication::translate("GenTTFileDlg", "Gender", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("GenTTFileDlg", "Male", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("GenTTFileDlg", "Female", nullptr));
        neutralRadioButton->setText(QCoreApplication::translate("GenTTFileDlg", "Neutral", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("GenTTFileDlg", "Voice Transmission Mode", nullptr));
        pttChkBox->setText(QCoreApplication::translate("GenTTFileDlg", "Push To Talk", nullptr));
        setupkeysButton->setText(QCoreApplication::translate("GenTTFileDlg", "&Setup Keys", nullptr));
        label_9->setText(QCoreApplication::translate("GenTTFileDlg", "Key Combination", nullptr));
        voiceactChkBox->setText(QCoreApplication::translate("GenTTFileDlg", "Voice activated", nullptr));
#if QT_CONFIG(accessibility)
        vidgroupBox->setAccessibleName(QCoreApplication::translate("GenTTFileDlg", "Video Codec Settings", nullptr));
#endif // QT_CONFIG(accessibility)
        vidgroupBox->setTitle(QCoreApplication::translate("GenTTFileDlg", "Video Capture Settings", nullptr));
        label_15->setText(QCoreApplication::translate("GenTTFileDlg", "Video Resolution", nullptr));
        label_33->setText(QCoreApplication::translate("GenTTFileDlg", "Codec", nullptr));
        label_35->setText(QCoreApplication::translate("GenTTFileDlg", "Bitrate", nullptr));
        saveBtn->setText(QCoreApplication::translate("GenTTFileDlg", "&Save .tt File", nullptr));
        closeBtn->setText(QCoreApplication::translate("GenTTFileDlg", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenTTFileDlg: public Ui_GenTTFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATETTFILE_H
