/********************************************************************************
** Form generated from reading UI file 'channel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNEL_H
#define UI_CHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChannelDlg
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *chaninfoGroupBox;
    QFormLayout *formLayout;
    QLabel *chanpathLabelFixed;
    QLabel *chanpathLabel;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *topicLabel;
    QPlainTextEdit *topicTextEdit;
    QLabel *passwordLabel;
    QLineEdit *chanpasswdEdit;
    QLabel *oppasswordLabel;
    QLineEdit *oppasswdEdit;
    QLabel *maxusersLabel;
    QSpinBox *maxusersSpinBox;
    QLabel *diskquotaLabel;
    QSpinBox *diskquotaSpinBox;
    QGroupBox *chantypeGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *staticchanBox;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *singletxchanBox;
    QToolButton *singletxButton;
    QCheckBox *classroomchanBox;
    QCheckBox *oprecvonlychanBox;
    QCheckBox *novoiceactBox;
    QCheckBox *norecordBox;
    QCheckBox *hiddenchannelBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *audiocodecGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *audiocodecBox;
    QStackedWidget *stackedWidget;
    QWidget *nocodecPage;
    QWidget *spxPage;
    QFormLayout *formLayout_3;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_22;
    QComboBox *spx_srateBox;
    QLabel *label_37;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_8;
    QSlider *spx_qualitySlider;
    QLabel *spxQualityLabel;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spx_txdelaySpinBox;
    QSpacerItem *horizontalSpacer_8;
    QWidget *spxvbrPage;
    QFormLayout *formLayout_4;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_23;
    QComboBox *spxvbr_srateBox;
    QLabel *label_39;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QSlider *spxvbr_qualitySlider;
    QLabel *spxvbr_QualityLabel;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spxvbr_maxbpsSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *spxvbr_dtxBox;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_24;
    QSpinBox *spxvbr_txdelaySpinBox;
    QSpacerItem *horizontalSpacer_3;
    QWidget *opusPage;
    QFormLayout *formLayout_5;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_27;
    QComboBox *opus_appBox;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_43;
    QHBoxLayout *horizontalLayout_26;
    QComboBox *opus_srateBox;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_46;
    QHBoxLayout *horizontalLayout_25;
    QComboBox *opus_channelsBox;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_29;
    QSpinBox *opus_bpsSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QCheckBox *opus_vbrCheckBox;
    QCheckBox *opus_dtxBox;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_28;
    QSpinBox *opus_txdelaySpinBox;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    QComboBox *opus_framesizeComboBox;
    QLabel *label_10;
    QGroupBox *audiocfgGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *agcBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSlider *gainlevelSlider;
    QLabel *gainlevelLabel;
    QGroupBox *streamGroupBox;
    QFormLayout *formLayout_2;
    QLabel *voiceTotLabel;
    QLabel *mfTotLabel;
    QDoubleSpinBox *voiceTotDoubleSpinBox;
    QDoubleSpinBox *mfTotDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QCheckBox *joinchanBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChannelDlg)
    {
        if (ChannelDlg->objectName().isEmpty())
            ChannelDlg->setObjectName("ChannelDlg");
        ChannelDlg->resize(993, 680);
        ChannelDlg->setModal(true);
        verticalLayout_6 = new QVBoxLayout(ChannelDlg);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        chaninfoGroupBox = new QGroupBox(ChannelDlg);
        chaninfoGroupBox->setObjectName("chaninfoGroupBox");
        formLayout = new QFormLayout(chaninfoGroupBox);
        formLayout->setObjectName("formLayout");
        chanpathLabelFixed = new QLabel(chaninfoGroupBox);
        chanpathLabelFixed->setObjectName("chanpathLabelFixed");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, chanpathLabelFixed);

        chanpathLabel = new QLabel(chaninfoGroupBox);
        chanpathLabel->setObjectName("chanpathLabel");
        chanpathLabel->setText(QString::fromUtf8("TextLabel"));
        chanpathLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, chanpathLabel);

        nameLabel = new QLabel(chaninfoGroupBox);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, nameLabel);

        nameEdit = new QLineEdit(chaninfoGroupBox);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, nameEdit);

        topicLabel = new QLabel(chaninfoGroupBox);
        topicLabel->setObjectName("topicLabel");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, topicLabel);

        topicTextEdit = new QPlainTextEdit(chaninfoGroupBox);
        topicTextEdit->setObjectName("topicTextEdit");
        topicTextEdit->setTabChangesFocus(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, topicTextEdit);

        passwordLabel = new QLabel(chaninfoGroupBox);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, passwordLabel);

        chanpasswdEdit = new QLineEdit(chaninfoGroupBox);
        chanpasswdEdit->setObjectName("chanpasswdEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chanpasswdEdit->sizePolicy().hasHeightForWidth());
        chanpasswdEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, chanpasswdEdit);

        oppasswordLabel = new QLabel(chaninfoGroupBox);
        oppasswordLabel->setObjectName("oppasswordLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, oppasswordLabel);

        oppasswdEdit = new QLineEdit(chaninfoGroupBox);
        oppasswdEdit->setObjectName("oppasswdEdit");
        sizePolicy.setHeightForWidth(oppasswdEdit->sizePolicy().hasHeightForWidth());
        oppasswdEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, oppasswdEdit);

        maxusersLabel = new QLabel(chaninfoGroupBox);
        maxusersLabel->setObjectName("maxusersLabel");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, maxusersLabel);

        maxusersSpinBox = new QSpinBox(chaninfoGroupBox);
        maxusersSpinBox->setObjectName("maxusersSpinBox");
        sizePolicy.setHeightForWidth(maxusersSpinBox->sizePolicy().hasHeightForWidth());
        maxusersSpinBox->setSizePolicy(sizePolicy);
        maxusersSpinBox->setMaximum(1000);
        maxusersSpinBox->setValue(256);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, maxusersSpinBox);

        diskquotaLabel = new QLabel(chaninfoGroupBox);
        diskquotaLabel->setObjectName("diskquotaLabel");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, diskquotaLabel);

        diskquotaSpinBox = new QSpinBox(chaninfoGroupBox);
        diskquotaSpinBox->setObjectName("diskquotaSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(diskquotaSpinBox->sizePolicy().hasHeightForWidth());
        diskquotaSpinBox->setSizePolicy(sizePolicy1);
        diskquotaSpinBox->setMaximum(999999999);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, diskquotaSpinBox);


        verticalLayout_5->addWidget(chaninfoGroupBox);

        chantypeGroupBox = new QGroupBox(ChannelDlg);
        chantypeGroupBox->setObjectName("chantypeGroupBox");
        verticalLayout_3 = new QVBoxLayout(chantypeGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        staticchanBox = new QCheckBox(chantypeGroupBox);
        staticchanBox->setObjectName("staticchanBox");

        verticalLayout_3->addWidget(staticchanBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        singletxchanBox = new QCheckBox(chantypeGroupBox);
        singletxchanBox->setObjectName("singletxchanBox");

        horizontalLayout_6->addWidget(singletxchanBox);

        singletxButton = new QToolButton(chantypeGroupBox);
        singletxButton->setObjectName("singletxButton");

        horizontalLayout_6->addWidget(singletxButton);


        verticalLayout_3->addLayout(horizontalLayout_6);

        classroomchanBox = new QCheckBox(chantypeGroupBox);
        classroomchanBox->setObjectName("classroomchanBox");

        verticalLayout_3->addWidget(classroomchanBox);

        oprecvonlychanBox = new QCheckBox(chantypeGroupBox);
        oprecvonlychanBox->setObjectName("oprecvonlychanBox");

        verticalLayout_3->addWidget(oprecvonlychanBox);

        novoiceactBox = new QCheckBox(chantypeGroupBox);
        novoiceactBox->setObjectName("novoiceactBox");

        verticalLayout_3->addWidget(novoiceactBox);

        norecordBox = new QCheckBox(chantypeGroupBox);
        norecordBox->setObjectName("norecordBox");

        verticalLayout_3->addWidget(norecordBox);

        hiddenchannelBox = new QCheckBox(chantypeGroupBox);
        hiddenchannelBox->setObjectName("hiddenchannelBox");

        verticalLayout_3->addWidget(hiddenchannelBox);


        verticalLayout_5->addWidget(chantypeGroupBox);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        audiocodecGroupBox = new QGroupBox(ChannelDlg);
        audiocodecGroupBox->setObjectName("audiocodecGroupBox");
        verticalLayout_4 = new QVBoxLayout(audiocodecGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(audiocodecGroupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        audiocodecBox = new QComboBox(audiocodecGroupBox);
        audiocodecBox->setObjectName("audiocodecBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(audiocodecBox->sizePolicy().hasHeightForWidth());
        audiocodecBox->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(audiocodecBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(audiocodecGroupBox);
        stackedWidget->setObjectName("stackedWidget");
        nocodecPage = new QWidget();
        nocodecPage->setObjectName("nocodecPage");
        stackedWidget->addWidget(nocodecPage);
        spxPage = new QWidget();
        spxPage->setObjectName("spxPage");
        formLayout_3 = new QFormLayout(spxPage);
        formLayout_3->setObjectName("formLayout_3");
        label_36 = new QLabel(spxPage);
        label_36->setObjectName("label_36");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_36);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        spx_srateBox = new QComboBox(spxPage);
        spx_srateBox->setObjectName("spx_srateBox");

        horizontalLayout_22->addWidget(spx_srateBox);

        label_37 = new QLabel(spxPage);
        label_37->setObjectName("label_37");

        horizontalLayout_22->addWidget(label_37);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_6);


        formLayout_3->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_22);

        label_8 = new QLabel(spxPage);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        spx_qualitySlider = new QSlider(spxPage);
        spx_qualitySlider->setObjectName("spx_qualitySlider");
        spx_qualitySlider->setMinimum(0);
        spx_qualitySlider->setMaximum(10);
        spx_qualitySlider->setValue(4);
        spx_qualitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(spx_qualitySlider);

        spxQualityLabel = new QLabel(spxPage);
        spxQualityLabel->setObjectName("spxQualityLabel");
        spxQualityLabel->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout_8->addWidget(spxQualityLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        formLayout_3->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_8);

        label_14 = new QLabel(spxPage);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        spx_txdelaySpinBox = new QSpinBox(spxPage);
        spx_txdelaySpinBox->setObjectName("spx_txdelaySpinBox");
        spx_txdelaySpinBox->setMinimum(20);
        spx_txdelaySpinBox->setMaximum(100);
        spx_txdelaySpinBox->setSingleStep(20);
        spx_txdelaySpinBox->setValue(40);

        horizontalLayout_3->addWidget(spx_txdelaySpinBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        formLayout_3->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        stackedWidget->addWidget(spxPage);
        spxvbrPage = new QWidget();
        spxvbrPage->setObjectName("spxvbrPage");
        formLayout_4 = new QFormLayout(spxvbrPage);
        formLayout_4->setObjectName("formLayout_4");
        label_38 = new QLabel(spxvbrPage);
        label_38->setObjectName("label_38");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_38);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        spxvbr_srateBox = new QComboBox(spxvbrPage);
        spxvbr_srateBox->setObjectName("spxvbr_srateBox");

        horizontalLayout_23->addWidget(spxvbr_srateBox);

        label_39 = new QLabel(spxvbrPage);
        label_39->setObjectName("label_39");

        horizontalLayout_23->addWidget(label_39);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_9);


        formLayout_4->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_23);

        label_11 = new QLabel(spxvbrPage);
        label_11->setObjectName("label_11");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        spxvbr_qualitySlider = new QSlider(spxvbrPage);
        spxvbr_qualitySlider->setObjectName("spxvbr_qualitySlider");
        spxvbr_qualitySlider->setMinimum(0);
        spxvbr_qualitySlider->setMaximum(10);
        spxvbr_qualitySlider->setValue(4);
        spxvbr_qualitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(spxvbr_qualitySlider);

        spxvbr_QualityLabel = new QLabel(spxvbrPage);
        spxvbr_QualityLabel->setObjectName("spxvbr_QualityLabel");
        spxvbr_QualityLabel->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout_7->addWidget(spxvbr_QualityLabel);


        formLayout_4->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_7);

        label_15 = new QLabel(spxvbrPage);
        label_15->setObjectName("label_15");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        spxvbr_maxbpsSpinBox = new QSpinBox(spxvbrPage);
        spxvbr_maxbpsSpinBox->setObjectName("spxvbr_maxbpsSpinBox");
        spxvbr_maxbpsSpinBox->setMinimum(0);
        spxvbr_maxbpsSpinBox->setMaximum(44000);
        spxvbr_maxbpsSpinBox->setSingleStep(1000);
        spxvbr_maxbpsSpinBox->setValue(0);

        horizontalLayout_9->addWidget(spxvbr_maxbpsSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        formLayout_4->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_9);

        spxvbr_dtxBox = new QCheckBox(spxvbrPage);
        spxvbr_dtxBox->setObjectName("spxvbr_dtxBox");
        spxvbr_dtxBox->setChecked(true);

        formLayout_4->setWidget(3, QFormLayout::ItemRole::LabelRole, spxvbr_dtxBox);

        label_23 = new QLabel(spxvbrPage);
        label_23->setObjectName("label_23");

        formLayout_4->setWidget(4, QFormLayout::ItemRole::LabelRole, label_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        spxvbr_txdelaySpinBox = new QSpinBox(spxvbrPage);
        spxvbr_txdelaySpinBox->setObjectName("spxvbr_txdelaySpinBox");
        spxvbr_txdelaySpinBox->setMinimum(20);
        spxvbr_txdelaySpinBox->setMaximum(100);
        spxvbr_txdelaySpinBox->setSingleStep(20);
        spxvbr_txdelaySpinBox->setValue(40);

        horizontalLayout_24->addWidget(spxvbr_txdelaySpinBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_3);


        formLayout_4->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout_24);

        stackedWidget->addWidget(spxvbrPage);
        opusPage = new QWidget();
        opusPage->setObjectName("opusPage");
        formLayout_5 = new QFormLayout(opusPage);
        formLayout_5->setObjectName("formLayout_5");
        label_47 = new QLabel(opusPage);
        label_47->setObjectName("label_47");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::LabelRole, label_47);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        opus_appBox = new QComboBox(opusPage);
        opus_appBox->setObjectName("opus_appBox");

        horizontalLayout_27->addWidget(opus_appBox);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_12);


        formLayout_5->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_27);

        label_43 = new QLabel(opusPage);
        label_43->setObjectName("label_43");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::LabelRole, label_43);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        opus_srateBox = new QComboBox(opusPage);
        opus_srateBox->setObjectName("opus_srateBox");

        horizontalLayout_26->addWidget(opus_srateBox);

        label_40 = new QLabel(opusPage);
        label_40->setObjectName("label_40");

        horizontalLayout_26->addWidget(label_40);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_11);


        formLayout_5->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_26);

        label_46 = new QLabel(opusPage);
        label_46->setObjectName("label_46");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::LabelRole, label_46);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        opus_channelsBox = new QComboBox(opusPage);
        opus_channelsBox->setObjectName("opus_channelsBox");

        horizontalLayout_25->addWidget(opus_channelsBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_10);


        formLayout_5->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_25);

        label_45 = new QLabel(opusPage);
        label_45->setObjectName("label_45");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::LabelRole, label_45);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        opus_bpsSpinBox = new QSpinBox(opusPage);
        opus_bpsSpinBox->setObjectName("opus_bpsSpinBox");

        horizontalLayout_29->addWidget(opus_bpsSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_14);

        opus_vbrCheckBox = new QCheckBox(opusPage);
        opus_vbrCheckBox->setObjectName("opus_vbrCheckBox");

        horizontalLayout_29->addWidget(opus_vbrCheckBox);


        formLayout_5->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_29);

        opus_dtxBox = new QCheckBox(opusPage);
        opus_dtxBox->setObjectName("opus_dtxBox");
        opus_dtxBox->setChecked(true);

        formLayout_5->setWidget(4, QFormLayout::ItemRole::SpanningRole, opus_dtxBox);

        label_44 = new QLabel(opusPage);
        label_44->setObjectName("label_44");

        formLayout_5->setWidget(5, QFormLayout::ItemRole::LabelRole, label_44);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        opus_txdelaySpinBox = new QSpinBox(opusPage);
        opus_txdelaySpinBox->setObjectName("opus_txdelaySpinBox");

        horizontalLayout_28->addWidget(opus_txdelaySpinBox);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_13);

        label_6 = new QLabel(opusPage);
        label_6->setObjectName("label_6");

        horizontalLayout_28->addWidget(label_6);

        opus_framesizeComboBox = new QComboBox(opusPage);
        opus_framesizeComboBox->setObjectName("opus_framesizeComboBox");

        horizontalLayout_28->addWidget(opus_framesizeComboBox);

        label_10 = new QLabel(opusPage);
        label_10->setObjectName("label_10");

        horizontalLayout_28->addWidget(label_10);


        formLayout_5->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_28);

        stackedWidget->addWidget(opusPage);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout_2->addWidget(audiocodecGroupBox);

        audiocfgGroupBox = new QGroupBox(ChannelDlg);
        audiocfgGroupBox->setObjectName("audiocfgGroupBox");
        verticalLayout = new QVBoxLayout(audiocfgGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        agcBox = new QCheckBox(audiocfgGroupBox);
        agcBox->setObjectName("agcBox");

        verticalLayout->addWidget(agcBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_9 = new QLabel(audiocfgGroupBox);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);

        gainlevelSlider = new QSlider(audiocfgGroupBox);
        gainlevelSlider->setObjectName("gainlevelSlider");
        gainlevelSlider->setMinimum(1);
        gainlevelSlider->setMaximum(32);
        gainlevelSlider->setValue(8);
        gainlevelSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(gainlevelSlider);

        gainlevelLabel = new QLabel(audiocfgGroupBox);
        gainlevelLabel->setObjectName("gainlevelLabel");
        gainlevelLabel->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout->addWidget(gainlevelLabel);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(audiocfgGroupBox);

        streamGroupBox = new QGroupBox(ChannelDlg);
        streamGroupBox->setObjectName("streamGroupBox");
        formLayout_2 = new QFormLayout(streamGroupBox);
        formLayout_2->setObjectName("formLayout_2");
        voiceTotLabel = new QLabel(streamGroupBox);
        voiceTotLabel->setObjectName("voiceTotLabel");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, voiceTotLabel);

        mfTotLabel = new QLabel(streamGroupBox);
        mfTotLabel->setObjectName("mfTotLabel");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, mfTotLabel);

        voiceTotDoubleSpinBox = new QDoubleSpinBox(streamGroupBox);
        voiceTotDoubleSpinBox->setObjectName("voiceTotDoubleSpinBox");
        voiceTotDoubleSpinBox->setDecimals(1);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, voiceTotDoubleSpinBox);

        mfTotDoubleSpinBox = new QDoubleSpinBox(streamGroupBox);
        mfTotDoubleSpinBox->setObjectName("mfTotDoubleSpinBox");
        mfTotDoubleSpinBox->setDecimals(1);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, mfTotDoubleSpinBox);


        verticalLayout_2->addWidget(streamGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        joinchanBox = new QCheckBox(ChannelDlg);
        joinchanBox->setObjectName("joinchanBox");

        horizontalLayout_4->addWidget(joinchanBox);

        buttonBox = new QDialogButtonBox(ChannelDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_6->addLayout(horizontalLayout_4);

#if QT_CONFIG(shortcut)
        nameLabel->setBuddy(nameEdit);
        topicLabel->setBuddy(topicTextEdit);
        passwordLabel->setBuddy(chanpasswdEdit);
        oppasswordLabel->setBuddy(oppasswdEdit);
        maxusersLabel->setBuddy(maxusersSpinBox);
        diskquotaLabel->setBuddy(diskquotaSpinBox);
        label_5->setBuddy(audiocodecBox);
        label_36->setBuddy(spx_srateBox);
        label_8->setBuddy(spx_qualitySlider);
        label_14->setBuddy(spx_txdelaySpinBox);
        label_38->setBuddy(spxvbr_srateBox);
        label_11->setBuddy(spxvbr_qualitySlider);
        label_15->setBuddy(spxvbr_maxbpsSpinBox);
        label_23->setBuddy(spxvbr_txdelaySpinBox);
        label_47->setBuddy(opus_appBox);
        label_43->setBuddy(opus_srateBox);
        label_46->setBuddy(opus_channelsBox);
        label_45->setBuddy(opus_bpsSpinBox);
        label_44->setBuddy(opus_txdelaySpinBox);
        label_6->setBuddy(opus_framesizeComboBox);
        label_9->setBuddy(gainlevelSlider);
        voiceTotLabel->setBuddy(voiceTotDoubleSpinBox);
        mfTotLabel->setBuddy(mfTotDoubleSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChannelDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChannelDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChannelDlg, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChannelDlg);
    } // setupUi

    void retranslateUi(QDialog *ChannelDlg)
    {
        ChannelDlg->setWindowTitle(QCoreApplication::translate("ChannelDlg", "Channel", nullptr));
        chaninfoGroupBox->setTitle(QCoreApplication::translate("ChannelDlg", "Channel Information", nullptr));
        chanpathLabelFixed->setText(QCoreApplication::translate("ChannelDlg", "Channel path", nullptr));
        nameLabel->setText(QCoreApplication::translate("ChannelDlg", "Channel name", nullptr));
        topicLabel->setText(QCoreApplication::translate("ChannelDlg", "Topic", nullptr));
        passwordLabel->setText(QCoreApplication::translate("ChannelDlg", "Password", nullptr));
        oppasswordLabel->setText(QCoreApplication::translate("ChannelDlg", "Operator password", nullptr));
        maxusersLabel->setText(QCoreApplication::translate("ChannelDlg", "Max users", nullptr));
        diskquotaLabel->setText(QCoreApplication::translate("ChannelDlg", "Disk quota", nullptr));
        diskquotaSpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " KBytes", nullptr));
        chantypeGroupBox->setTitle(QCoreApplication::translate("ChannelDlg", "Channel type", nullptr));
        staticchanBox->setText(QCoreApplication::translate("ChannelDlg", "Permanent channel (stored on server)", nullptr));
        singletxchanBox->setText(QCoreApplication::translate("ChannelDlg", "No interruptions (no simultaneous voice transmission)", nullptr));
#if QT_CONFIG(accessibility)
        singletxButton->setAccessibleName(QCoreApplication::translate("ChannelDlg", "Setup", nullptr));
#endif // QT_CONFIG(accessibility)
        singletxButton->setText(QCoreApplication::translate("ChannelDlg", "...", nullptr));
        classroomchanBox->setText(QCoreApplication::translate("ChannelDlg", "Classroom (operator-controlled transmissions)", nullptr));
        oprecvonlychanBox->setText(QCoreApplication::translate("ChannelDlg", "Operator receive only (only operator see and hear users)", nullptr));
        novoiceactBox->setText(QCoreApplication::translate("ChannelDlg", "No voice activation (only Push-to-Talk allowed)", nullptr));
        norecordBox->setText(QCoreApplication::translate("ChannelDlg", "No audio recording allowed (save to disk not allowed)", nullptr));
        hiddenchannelBox->setText(QCoreApplication::translate("ChannelDlg", "Hidden channel (invisible and only known by name)", nullptr));
        audiocodecGroupBox->setTitle(QCoreApplication::translate("ChannelDlg", "Audio Codec", nullptr));
        label_5->setText(QCoreApplication::translate("ChannelDlg", "Codec type", nullptr));
        label_36->setText(QCoreApplication::translate("ChannelDlg", "Sample rate", nullptr));
        label_37->setText(QCoreApplication::translate("ChannelDlg", "Hz", nullptr));
        label_8->setText(QCoreApplication::translate("ChannelDlg", "Quality", nullptr));
        label_14->setText(QCoreApplication::translate("ChannelDlg", "Transmit interval", nullptr));
        spx_txdelaySpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " msec", nullptr));
        label_38->setText(QCoreApplication::translate("ChannelDlg", "Sample rate", nullptr));
        label_39->setText(QCoreApplication::translate("ChannelDlg", "Hz", nullptr));
        label_11->setText(QCoreApplication::translate("ChannelDlg", "Quality", nullptr));
        label_15->setText(QCoreApplication::translate("ChannelDlg", "Max bitrate", nullptr));
        spxvbr_maxbpsSpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " bps", nullptr));
        spxvbr_dtxBox->setText(QCoreApplication::translate("ChannelDlg", "Ignore silence (DTX)", nullptr));
        label_23->setText(QCoreApplication::translate("ChannelDlg", "Transmit interval", nullptr));
        spxvbr_txdelaySpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " msec", nullptr));
        label_47->setText(QCoreApplication::translate("ChannelDlg", "Application", nullptr));
        label_43->setText(QCoreApplication::translate("ChannelDlg", "Sample rate", nullptr));
        label_40->setText(QCoreApplication::translate("ChannelDlg", "Hz", nullptr));
        label_46->setText(QCoreApplication::translate("ChannelDlg", "Audio channels", nullptr));
        label_45->setText(QCoreApplication::translate("ChannelDlg", "Bitrate", nullptr));
        opus_bpsSpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " Kbps", nullptr));
        opus_vbrCheckBox->setText(QCoreApplication::translate("ChannelDlg", "Variable bitrate", nullptr));
        opus_dtxBox->setText(QCoreApplication::translate("ChannelDlg", "Ignore silence (DTX)", nullptr));
        label_44->setText(QCoreApplication::translate("ChannelDlg", "Transmit interval", nullptr));
        opus_txdelaySpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " msec", nullptr));
        label_6->setText(QCoreApplication::translate("ChannelDlg", "Frame size", nullptr));
        label_10->setText(QCoreApplication::translate("ChannelDlg", "msec", nullptr));
        audiocfgGroupBox->setTitle(QCoreApplication::translate("ChannelDlg", "Audio Configuration", nullptr));
#if QT_CONFIG(tooltip)
        agcBox->setToolTip(QCoreApplication::translate("ChannelDlg", "Ensure all users in the channel have the same audio volume", nullptr));
#endif // QT_CONFIG(tooltip)
        agcBox->setText(QCoreApplication::translate("ChannelDlg", "Enable fixed audio volume for all users", nullptr));
        label_9->setText(QCoreApplication::translate("ChannelDlg", "Volume level", nullptr));
        streamGroupBox->setTitle(QCoreApplication::translate("ChannelDlg", "Stream Timeout Timer", nullptr));
        voiceTotLabel->setText(QCoreApplication::translate("ChannelDlg", "Voice stream max duration", nullptr));
        mfTotLabel->setText(QCoreApplication::translate("ChannelDlg", "Media file stream max duration", nullptr));
        voiceTotDoubleSpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " seconds", nullptr));
        mfTotDoubleSpinBox->setSuffix(QCoreApplication::translate("ChannelDlg", " seconds", nullptr));
        joinchanBox->setText(QCoreApplication::translate("ChannelDlg", "&Join channel on exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChannelDlg: public Ui_ChannelDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_H
