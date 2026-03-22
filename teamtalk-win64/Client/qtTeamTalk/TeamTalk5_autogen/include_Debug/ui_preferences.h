/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytableview.h"
#include "mytabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDlg
{
public:
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_8;
    MyTabWidget *tabWidget;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nicknameEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_gender;
    QComboBox *genderBox;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *awaySpinBox;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_27;
    QCheckBox *disableVoiceActCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_statusmsg;
    QLineEdit *statusmsgEdit;
    QSpacerItem *horizontalSpacer_30;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_away_statusmsg;
    QLineEdit *awayMsgEdit;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_35;
    QLineEdit *bearwareidEdit;
    QPushButton *setupBearWareLoginButton;
    QSpacerItem *horizontalSpacer_24;
    QCheckBox *syncWebUserCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_32;
    QCheckBox *pttChkBox;
    QPushButton *setupkeysButton;
    QLabel *keycompLabel;
    QSpacerItem *horizontalSpacer_20;
    QCheckBox *pttlockChkBox;
    QCheckBox *voiceactChkBox;
    QSpacerItem *verticalSpacer;
    QWidget *displayTab;
    QHBoxLayout *horizontalLayout_31;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QComboBox *languageBox;
    QCheckBox *startminimizedChkBox;
    QCheckBox *trayChkBox;
    QCheckBox *confirmExitChkBox;
    QCheckBox *alwaysontopChkBox;
    QCheckBox *vumeterChkBox;
    QCheckBox *voiceActLevelChkBox;
    QCheckBox *chatlistviewChkBox;
    QCheckBox *ServnameChkBox;
    QHBoxLayout *horizontalLayout_34;
    QCheckBox *chatTemplateChkBox;
    QToolButton *chatTemplateToolButton;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_30;
    QLabel *timestampformatLabel;
    QLineEdit *timestampformatEdit;
    QPushButton *TSFVarButton;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *logstatusbarChkBox;
    QToolButton *statusbarToolButton;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *vidtextChkBox;
    QToolButton *vidtextsrcToolBtn;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *groupBox_16;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *msgpopupChkBox;
    QCheckBox *videodlgChkBox;
    QCheckBox *desktopdlgChkBox;
    QCheckBox *dlgExcludeChkBox;
    QCheckBox *closeFileDlgChkBox;
    QCheckBox *dlgMOTDChkBox;
    QCheckBox *startServerListChkBox;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout;
    QCheckBox *usercountChkBox;
    QCheckBox *showusernameChkBox;
    QCheckBox *lasttalkChkBox;
    QCheckBox *animChkBox;
    QCheckBox *chanTopicChkBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_39;
    QSpinBox *maxtextSpinBox;
    QSpacerItem *horizontalSpacer_18;
    QCheckBox *chanexpChkBox;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_infoStyle;
    QComboBox *infoStyleBox;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_45;
    QComboBox *channelsortComboBox;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_dbclickchan;
    QComboBox *chanDbClickBox;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *updatesChkBox;
    QCheckBox *betaUpdatesChkBox;
    QCheckBox *updatesDlgChkBox;
    QSpacerItem *verticalSpacer_8;
    QWidget *connectionTab;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *autoconnectChkBox;
    QCheckBox *reconnectChkBox;
    QCheckBox *autojoinChkBox;
    QCheckBox *maxpayloadChkBox;
    QCheckBox *winfwChkBox;
    QGroupBox *groupBox_13;
    QHBoxLayout *horizontalLayout_13;
    QGridLayout *gridLayout;
    QCheckBox *subusermsgChkBox;
    QCheckBox *subchanmsgChkBox;
    QCheckBox *subbcastmsgChkBox;
    QCheckBox *subvoiceChkBox;
    QCheckBox *subvidcapChkBox;
    QCheckBox *subdesktopChkBox;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_41;
    QToolButton *subdeskinputBtn;
    QCheckBox *submediafileChkBox;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *tcpportSpinBox;
    QSpinBox *udpportSpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *soundTab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_sndsys;
    QComboBox *sndSysBox;
    QSpacerItem *horizontalSpacer_17;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QComboBox *inputdevBox;
    QToolButton *refreshinputButton;
    QLabel *inputinfoLabel;
    QLabel *label_14;
    QComboBox *outputdevBox;
    QToolButton *refreshoutputButton;
    QLabel *outputinfoLabel;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *sndtestButton;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *echocancelBox;
    QCheckBox *agcBox;
    QCheckBox *denoisingBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_34;
    QSlider *mediavsvoiceSlider;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *snddefaultButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *eventsTab;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_spack;
    QComboBox *spackBox;
    QSpacerItem *horizontalSpacer_26;
    QLabel *sndVolLabel;
    QSpinBox *sndVolSpinBox;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_47;
    QComboBox *sndeventPlaybackComboBox;
    QCheckBox *ttDeviceChkBox;
    QGroupBox *soundEvents_groupbox;
    QVBoxLayout *soundEvents_vlayout1;
    MyTableView *soundEventsTableView;
    QGroupBox *soundeventsfile_groupbox;
    QHBoxLayout *horizontalLayout_25;
    QLabel *soundEventFileLabel;
    QLineEdit *soundEventFileEdit;
    QPushButton *soundEventsBrowseButton;
    QPushButton *soundEventsDefFileButton;
    QHBoxLayout *soundEvents_hbox2;
    QPushButton *soundEventsEnableallButton;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *soundEventsClearallButton;
    QSpacerItem *soundevents_hspacer1;
    QPushButton *soundEventsRevertButton;
    QSpacerItem *verticalSpacer_7;
    QWidget *ttsTab;
    QHBoxLayout *horizontalLayout_22;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_20;
    MyTableView *ttsTableView;
    QGroupBox *ttsmsg_groupbox;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_29;
    QLabel *TTSMsgLabel;
    QLineEdit *TTSMsgEdit;
    QPushButton *TTSVarButton;
    QPushButton *TTSDefValButton;
    QPushButton *TTSDefValAllButton;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *ttsEnableallButton;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *ttsClearallButton;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *ttsRevertButton;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_19;
    QFormLayout *formLayout_3;
    QLabel *label_ttsengine;
    QComboBox *ttsengineComboBox;
    QLabel *label_ttslocale;
    QComboBox *ttsLocaleComboBox;
    QLabel *label_ttsvoice;
    QComboBox *ttsVoiceComboBox;
    QLabel *label_ttsvoicerate;
    QDoubleSpinBox *ttsVoiceRateSpinBox;
    QLabel *label_ttsvoicevolume;
    QDoubleSpinBox *ttsVoiceVolumeSpinBox;
    QLabel *label_ttsnotifTimestamp;
    QSpinBox *ttsNotifTimestampSpinBox;
    QLabel *label_ttsoutputmode;
    QComboBox *ttsOutputModeComboBox;
    QCheckBox *ttsForceSapiChkBox;
    QCheckBox *ttsTrySapiChkBox;
    QCheckBox *ttsAssertiveChkBox;
    QCheckBox *ttsToastChkBox;
    QCheckBox *ttsSpeakListsChkBox;
    QSpacerItem *verticalSpacer_10;
    QWidget *shortcutsTab;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_11;
    MyTableView *shortcutsTableView;
    QSpacerItem *verticalSpacer_4;
    QWidget *videoTab;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout;
    QLabel *label_13;
    QComboBox *vidcapdevicesBox;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *captureformatsBox;
    QToolButton *vidfmtToolButton;
    QLabel *label_31;
    QComboBox *vidImgFmtBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *vidtestButton;
    QSpacerItem *horizontalSpacer_11;
    QGroupBox *vidgroupBox;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_33;
    QComboBox *vidcodecBox;
    QSpacerItem *horizontalSpacer_21;
    QStackedWidget *vidcodecStackedWidget;
    QWidget *vp8_page;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_42;
    QSpinBox *vp8bitrateSpinBox;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *viddefaultButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *PreferencesDlg)
    {
        if (PreferencesDlg->objectName().isEmpty())
            PreferencesDlg->setObjectName("PreferencesDlg");
        PreferencesDlg->resize(1125, 737);
        PreferencesDlg->setSizeGripEnabled(true);
        PreferencesDlg->setModal(true);
        gridLayout_6 = new QGridLayout(PreferencesDlg);
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        buttonBox = new QDialogButtonBox(PreferencesDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        horizontalLayout_5->addWidget(buttonBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        gridLayout_6->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        tabWidget = new MyTabWidget(PreferencesDlg);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setUsesScrollButtons(true);
        generalTab = new QWidget();
        generalTab->setObjectName("generalTab");
        verticalLayout_2 = new QVBoxLayout(generalTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(generalTab);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nicknameEdit = new QLineEdit(groupBox);
        nicknameEdit->setObjectName("nicknameEdit");

        horizontalLayout->addWidget(nicknameEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        label_gender = new QLabel(groupBox);
        label_gender->setObjectName("label_gender");

        horizontalLayout_7->addWidget(label_gender);

        genderBox = new QComboBox(groupBox);
        genderBox->setObjectName("genderBox");

        horizontalLayout_7->addWidget(genderBox);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        awaySpinBox = new QSpinBox(groupBox);
        awaySpinBox->setObjectName("awaySpinBox");
        awaySpinBox->setMaximum(3600);

        horizontalLayout_2->addWidget(awaySpinBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_27);

        disableVoiceActCheckBox = new QCheckBox(groupBox);
        disableVoiceActCheckBox->setObjectName("disableVoiceActCheckBox");

        horizontalLayout_2->addWidget(disableVoiceActCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_statusmsg = new QLabel(groupBox);
        label_statusmsg->setObjectName("label_statusmsg");

        horizontalLayout_11->addWidget(label_statusmsg);

        statusmsgEdit = new QLineEdit(groupBox);
        statusmsgEdit->setObjectName("statusmsgEdit");

        horizontalLayout_11->addWidget(statusmsgEdit);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_30);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_away_statusmsg = new QLabel(groupBox);
        label_away_statusmsg->setObjectName("label_away_statusmsg");

        horizontalLayout_28->addWidget(label_away_statusmsg);

        awayMsgEdit = new QLineEdit(groupBox);
        awayMsgEdit->setObjectName("awayMsgEdit");

        horizontalLayout_28->addWidget(awayMsgEdit);


        verticalLayout_3->addLayout(horizontalLayout_28);


        verticalLayout_2->addWidget(groupBox);

        groupBox_10 = new QGroupBox(generalTab);
        groupBox_10->setObjectName("groupBox_10");
        verticalLayout_12 = new QVBoxLayout(groupBox_10);
        verticalLayout_12->setObjectName("verticalLayout_12");
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        label_35 = new QLabel(groupBox_10);
        label_35->setObjectName("label_35");

        horizontalLayout_24->addWidget(label_35);

        bearwareidEdit = new QLineEdit(groupBox_10);
        bearwareidEdit->setObjectName("bearwareidEdit");
        bearwareidEdit->setReadOnly(true);

        horizontalLayout_24->addWidget(bearwareidEdit);

        setupBearWareLoginButton = new QPushButton(groupBox_10);
        setupBearWareLoginButton->setObjectName("setupBearWareLoginButton");

        horizontalLayout_24->addWidget(setupBearWareLoginButton);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_24);


        verticalLayout_12->addLayout(horizontalLayout_24);

        syncWebUserCheckBox = new QCheckBox(groupBox_10);
        syncWebUserCheckBox->setObjectName("syncWebUserCheckBox");

        verticalLayout_12->addWidget(syncWebUserCheckBox);


        verticalLayout_2->addWidget(groupBox_10);

        groupBox_2 = new QGroupBox(generalTab);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_24 = new QVBoxLayout(groupBox_2);
        verticalLayout_24->setObjectName("verticalLayout_24");
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        pttChkBox = new QCheckBox(groupBox_2);
        pttChkBox->setObjectName("pttChkBox");

        horizontalLayout_32->addWidget(pttChkBox);

        setupkeysButton = new QPushButton(groupBox_2);
        setupkeysButton->setObjectName("setupkeysButton");

        horizontalLayout_32->addWidget(setupkeysButton);

        keycompLabel = new QLabel(groupBox_2);
        keycompLabel->setObjectName("keycompLabel");
        keycompLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_32->addWidget(keycompLabel);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_20);


        verticalLayout_24->addLayout(horizontalLayout_32);

        pttlockChkBox = new QCheckBox(groupBox_2);
        pttlockChkBox->setObjectName("pttlockChkBox");

        verticalLayout_24->addWidget(pttlockChkBox);

        voiceactChkBox = new QCheckBox(groupBox_2);
        voiceactChkBox->setObjectName("voiceactChkBox");

        verticalLayout_24->addWidget(voiceactChkBox);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(generalTab, QString());
        displayTab = new QWidget();
        displayTab->setObjectName("displayTab");
        horizontalLayout_31 = new QHBoxLayout(displayTab);
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        groupBox_3 = new QGroupBox(displayTab);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_18 = new QVBoxLayout(groupBox_3);
        verticalLayout_18->setObjectName("verticalLayout_18");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        horizontalLayout_17->addWidget(label_5);

        languageBox = new QComboBox(groupBox_3);
        languageBox->setObjectName("languageBox");

        horizontalLayout_17->addWidget(languageBox);


        verticalLayout_18->addLayout(horizontalLayout_17);

        startminimizedChkBox = new QCheckBox(groupBox_3);
        startminimizedChkBox->setObjectName("startminimizedChkBox");

        verticalLayout_18->addWidget(startminimizedChkBox);

        trayChkBox = new QCheckBox(groupBox_3);
        trayChkBox->setObjectName("trayChkBox");

        verticalLayout_18->addWidget(trayChkBox);

        confirmExitChkBox = new QCheckBox(groupBox_3);
        confirmExitChkBox->setObjectName("confirmExitChkBox");

        verticalLayout_18->addWidget(confirmExitChkBox);

        alwaysontopChkBox = new QCheckBox(groupBox_3);
        alwaysontopChkBox->setObjectName("alwaysontopChkBox");

        verticalLayout_18->addWidget(alwaysontopChkBox);

        vumeterChkBox = new QCheckBox(groupBox_3);
        vumeterChkBox->setObjectName("vumeterChkBox");

        verticalLayout_18->addWidget(vumeterChkBox);

        voiceActLevelChkBox = new QCheckBox(groupBox_3);
        voiceActLevelChkBox->setObjectName("voiceActLevelChkBox");

        verticalLayout_18->addWidget(voiceActLevelChkBox);

        chatlistviewChkBox = new QCheckBox(groupBox_3);
        chatlistviewChkBox->setObjectName("chatlistviewChkBox");

        verticalLayout_18->addWidget(chatlistviewChkBox);

        ServnameChkBox = new QCheckBox(groupBox_3);
        ServnameChkBox->setObjectName("ServnameChkBox");

        verticalLayout_18->addWidget(ServnameChkBox);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        chatTemplateChkBox = new QCheckBox(groupBox_3);
        chatTemplateChkBox->setObjectName("chatTemplateChkBox");

        horizontalLayout_34->addWidget(chatTemplateChkBox);

        chatTemplateToolButton = new QToolButton(groupBox_3);
        chatTemplateToolButton->setObjectName("chatTemplateToolButton");
        chatTemplateToolButton->setText(QString::fromUtf8("..."));

        horizontalLayout_34->addWidget(chatTemplateToolButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_12);


        verticalLayout_18->addLayout(horizontalLayout_34);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        timestampformatLabel = new QLabel(groupBox_3);
        timestampformatLabel->setObjectName("timestampformatLabel");

        horizontalLayout_30->addWidget(timestampformatLabel);

        timestampformatEdit = new QLineEdit(groupBox_3);
        timestampformatEdit->setObjectName("timestampformatEdit");

        horizontalLayout_30->addWidget(timestampformatEdit);

        TSFVarButton = new QPushButton(groupBox_3);
        TSFVarButton->setObjectName("TSFVarButton");

        horizontalLayout_30->addWidget(TSFVarButton);


        verticalLayout_18->addLayout(horizontalLayout_30);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        logstatusbarChkBox = new QCheckBox(groupBox_3);
        logstatusbarChkBox->setObjectName("logstatusbarChkBox");

        horizontalLayout_18->addWidget(logstatusbarChkBox);

        statusbarToolButton = new QToolButton(groupBox_3);
        statusbarToolButton->setObjectName("statusbarToolButton");
        statusbarToolButton->setText(QString::fromUtf8("..."));

        horizontalLayout_18->addWidget(statusbarToolButton);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_32);


        verticalLayout_18->addLayout(horizontalLayout_18);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        vidtextChkBox = new QCheckBox(groupBox_3);
        vidtextChkBox->setObjectName("vidtextChkBox");

        horizontalLayout_15->addWidget(vidtextChkBox);

        vidtextsrcToolBtn = new QToolButton(groupBox_3);
        vidtextsrcToolBtn->setObjectName("vidtextsrcToolBtn");
        vidtextsrcToolBtn->setText(QString::fromUtf8("..."));

        horizontalLayout_15->addWidget(vidtextsrcToolBtn);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_19);


        verticalLayout_18->addLayout(horizontalLayout_15);


        verticalLayout_21->addWidget(groupBox_3);

        groupBox_16 = new QGroupBox(displayTab);
        groupBox_16->setObjectName("groupBox_16");
        verticalLayout_4 = new QVBoxLayout(groupBox_16);
        verticalLayout_4->setObjectName("verticalLayout_4");
        msgpopupChkBox = new QCheckBox(groupBox_16);
        msgpopupChkBox->setObjectName("msgpopupChkBox");

        verticalLayout_4->addWidget(msgpopupChkBox);

        videodlgChkBox = new QCheckBox(groupBox_16);
        videodlgChkBox->setObjectName("videodlgChkBox");

        verticalLayout_4->addWidget(videodlgChkBox);

        desktopdlgChkBox = new QCheckBox(groupBox_16);
        desktopdlgChkBox->setObjectName("desktopdlgChkBox");

        verticalLayout_4->addWidget(desktopdlgChkBox);

        dlgExcludeChkBox = new QCheckBox(groupBox_16);
        dlgExcludeChkBox->setObjectName("dlgExcludeChkBox");

        verticalLayout_4->addWidget(dlgExcludeChkBox);

        closeFileDlgChkBox = new QCheckBox(groupBox_16);
        closeFileDlgChkBox->setObjectName("closeFileDlgChkBox");

        verticalLayout_4->addWidget(closeFileDlgChkBox);

        dlgMOTDChkBox = new QCheckBox(groupBox_16);
        dlgMOTDChkBox->setObjectName("dlgMOTDChkBox");

        verticalLayout_4->addWidget(dlgMOTDChkBox);

        startServerListChkBox = new QCheckBox(groupBox_16);
        startServerListChkBox->setObjectName("startServerListChkBox");

        verticalLayout_4->addWidget(startServerListChkBox);


        verticalLayout_21->addWidget(groupBox_16);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_6);


        horizontalLayout_31->addLayout(verticalLayout_21);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        groupBox_14 = new QGroupBox(displayTab);
        groupBox_14->setObjectName("groupBox_14");
        verticalLayout = new QVBoxLayout(groupBox_14);
        verticalLayout->setObjectName("verticalLayout");
        usercountChkBox = new QCheckBox(groupBox_14);
        usercountChkBox->setObjectName("usercountChkBox");

        verticalLayout->addWidget(usercountChkBox);

        showusernameChkBox = new QCheckBox(groupBox_14);
        showusernameChkBox->setObjectName("showusernameChkBox");

        verticalLayout->addWidget(showusernameChkBox);

        lasttalkChkBox = new QCheckBox(groupBox_14);
        lasttalkChkBox->setObjectName("lasttalkChkBox");

        verticalLayout->addWidget(lasttalkChkBox);

        animChkBox = new QCheckBox(groupBox_14);
        animChkBox->setObjectName("animChkBox");

        verticalLayout->addWidget(animChkBox);

        chanTopicChkBox = new QCheckBox(groupBox_14);
        chanTopicChkBox->setObjectName("chanTopicChkBox");

        verticalLayout->addWidget(chanTopicChkBox);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_39 = new QLabel(groupBox_14);
        label_39->setObjectName("label_39");

        horizontalLayout_16->addWidget(label_39);

        maxtextSpinBox = new QSpinBox(groupBox_14);
        maxtextSpinBox->setObjectName("maxtextSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxtextSpinBox->sizePolicy().hasHeightForWidth());
        maxtextSpinBox->setSizePolicy(sizePolicy);
        maxtextSpinBox->setMinimum(5);
        maxtextSpinBox->setMaximum(512);

        horizontalLayout_16->addWidget(maxtextSpinBox);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_18);


        verticalLayout->addLayout(horizontalLayout_16);

        chanexpChkBox = new QCheckBox(groupBox_14);
        chanexpChkBox->setObjectName("chanexpChkBox");

        verticalLayout->addWidget(chanexpChkBox);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        label_infoStyle = new QLabel(groupBox_14);
        label_infoStyle->setObjectName("label_infoStyle");

        horizontalLayout_33->addWidget(label_infoStyle);

        infoStyleBox = new QComboBox(groupBox_14);
        infoStyleBox->setObjectName("infoStyleBox");

        horizontalLayout_33->addWidget(infoStyleBox);


        verticalLayout->addLayout(horizontalLayout_33);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_45 = new QLabel(groupBox_14);
        label_45->setObjectName("label_45");

        horizontalLayout_27->addWidget(label_45);

        channelsortComboBox = new QComboBox(groupBox_14);
        channelsortComboBox->setObjectName("channelsortComboBox");

        horizontalLayout_27->addWidget(channelsortComboBox);


        verticalLayout->addLayout(horizontalLayout_27);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_dbclickchan = new QLabel(groupBox_14);
        label_dbclickchan->setObjectName("label_dbclickchan");

        horizontalLayout_26->addWidget(label_dbclickchan);

        chanDbClickBox = new QComboBox(groupBox_14);
        chanDbClickBox->setObjectName("chanDbClickBox");

        horizontalLayout_26->addWidget(chanDbClickBox);


        verticalLayout->addLayout(horizontalLayout_26);


        verticalLayout_23->addWidget(groupBox_14);

        groupBox_15 = new QGroupBox(displayTab);
        groupBox_15->setObjectName("groupBox_15");
        verticalLayout_9 = new QVBoxLayout(groupBox_15);
        verticalLayout_9->setObjectName("verticalLayout_9");
        updatesChkBox = new QCheckBox(groupBox_15);
        updatesChkBox->setObjectName("updatesChkBox");

        verticalLayout_9->addWidget(updatesChkBox);

        betaUpdatesChkBox = new QCheckBox(groupBox_15);
        betaUpdatesChkBox->setObjectName("betaUpdatesChkBox");

        verticalLayout_9->addWidget(betaUpdatesChkBox);

        updatesDlgChkBox = new QCheckBox(groupBox_15);
        updatesDlgChkBox->setObjectName("updatesDlgChkBox");

        verticalLayout_9->addWidget(updatesDlgChkBox);


        verticalLayout_23->addWidget(groupBox_15);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_8);


        horizontalLayout_31->addLayout(verticalLayout_23);

        tabWidget->addTab(displayTab, QString());
        connectionTab = new QWidget();
        connectionTab->setObjectName("connectionTab");
        verticalLayout_13 = new QVBoxLayout(connectionTab);
        verticalLayout_13->setObjectName("verticalLayout_13");
        groupBox_9 = new QGroupBox(connectionTab);
        groupBox_9->setObjectName("groupBox_9");
        verticalLayout_5 = new QVBoxLayout(groupBox_9);
        verticalLayout_5->setObjectName("verticalLayout_5");
        autoconnectChkBox = new QCheckBox(groupBox_9);
        autoconnectChkBox->setObjectName("autoconnectChkBox");

        verticalLayout_5->addWidget(autoconnectChkBox);

        reconnectChkBox = new QCheckBox(groupBox_9);
        reconnectChkBox->setObjectName("reconnectChkBox");

        verticalLayout_5->addWidget(reconnectChkBox);

        autojoinChkBox = new QCheckBox(groupBox_9);
        autojoinChkBox->setObjectName("autojoinChkBox");

        verticalLayout_5->addWidget(autojoinChkBox);

        maxpayloadChkBox = new QCheckBox(groupBox_9);
        maxpayloadChkBox->setObjectName("maxpayloadChkBox");

        verticalLayout_5->addWidget(maxpayloadChkBox);

        winfwChkBox = new QCheckBox(groupBox_9);
        winfwChkBox->setObjectName("winfwChkBox");

        verticalLayout_5->addWidget(winfwChkBox);

        groupBox_13 = new QGroupBox(groupBox_9);
        groupBox_13->setObjectName("groupBox_13");
        horizontalLayout_13 = new QHBoxLayout(groupBox_13);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        subusermsgChkBox = new QCheckBox(groupBox_13);
        subusermsgChkBox->setObjectName("subusermsgChkBox");

        gridLayout->addWidget(subusermsgChkBox, 0, 0, 1, 1);

        subchanmsgChkBox = new QCheckBox(groupBox_13);
        subchanmsgChkBox->setObjectName("subchanmsgChkBox");

        gridLayout->addWidget(subchanmsgChkBox, 0, 1, 1, 1);

        subbcastmsgChkBox = new QCheckBox(groupBox_13);
        subbcastmsgChkBox->setObjectName("subbcastmsgChkBox");

        gridLayout->addWidget(subbcastmsgChkBox, 0, 2, 1, 1);

        subvoiceChkBox = new QCheckBox(groupBox_13);
        subvoiceChkBox->setObjectName("subvoiceChkBox");

        gridLayout->addWidget(subvoiceChkBox, 1, 0, 1, 1);

        subvidcapChkBox = new QCheckBox(groupBox_13);
        subvidcapChkBox->setObjectName("subvidcapChkBox");

        gridLayout->addWidget(subvidcapChkBox, 1, 1, 1, 1);

        subdesktopChkBox = new QCheckBox(groupBox_13);
        subdesktopChkBox->setObjectName("subdesktopChkBox");

        gridLayout->addWidget(subdesktopChkBox, 1, 2, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_41 = new QLabel(groupBox_13);
        label_41->setObjectName("label_41");

        horizontalLayout_20->addWidget(label_41);

        subdeskinputBtn = new QToolButton(groupBox_13);
        subdeskinputBtn->setObjectName("subdeskinputBtn");
        subdeskinputBtn->setText(QString::fromUtf8("..."));

        horizontalLayout_20->addWidget(subdeskinputBtn);


        gridLayout->addLayout(horizontalLayout_20, 1, 3, 1, 1);

        submediafileChkBox = new QCheckBox(groupBox_13);
        submediafileChkBox->setObjectName("submediafileChkBox");

        gridLayout->addWidget(submediafileChkBox, 0, 3, 1, 1);


        horizontalLayout_13->addLayout(gridLayout);

        horizontalSpacer_15 = new QSpacerItem(265, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);


        verticalLayout_5->addWidget(groupBox_13);

        groupBox_4 = new QGroupBox(groupBox_9);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        tcpportSpinBox = new QSpinBox(groupBox_4);
        tcpportSpinBox->setObjectName("tcpportSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tcpportSpinBox->sizePolicy().hasHeightForWidth());
        tcpportSpinBox->setSizePolicy(sizePolicy1);
        tcpportSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(tcpportSpinBox, 0, 1, 1, 1);

        udpportSpinBox = new QSpinBox(groupBox_4);
        udpportSpinBox->setObjectName("udpportSpinBox");
        udpportSpinBox->setMaximum(65535);

        gridLayout_2->addWidget(udpportSpinBox, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);


        verticalLayout_13->addWidget(groupBox_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_2);

        tabWidget->addTab(connectionTab, QString());
        soundTab = new QWidget();
        soundTab->setObjectName("soundTab");
        verticalLayout_6 = new QVBoxLayout(soundTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_5 = new QGroupBox(soundTab);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        label_sndsys = new QLabel(groupBox_5);
        label_sndsys->setObjectName("label_sndsys");

        horizontalLayout_3->addWidget(label_sndsys);

        sndSysBox = new QComboBox(groupBox_5);
        sndSysBox->setObjectName("sndSysBox");

        horizontalLayout_3->addWidget(sndSysBox);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_17);


        verticalLayout_7->addLayout(horizontalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        inputdevBox = new QComboBox(groupBox_5);
        inputdevBox->setObjectName("inputdevBox");

        gridLayout_3->addWidget(inputdevBox, 0, 1, 1, 1);

        refreshinputButton = new QToolButton(groupBox_5);
        refreshinputButton->setObjectName("refreshinputButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/refresh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refreshinputButton->setIcon(icon);
        refreshinputButton->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(refreshinputButton, 0, 2, 1, 1);

        inputinfoLabel = new QLabel(groupBox_5);
        inputinfoLabel->setObjectName("inputinfoLabel");
        inputinfoLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        inputinfoLabel->setText(QString::fromUtf8("TextLabel"));
        inputinfoLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        inputinfoLabel->setWordWrap(true);

        gridLayout_3->addWidget(inputinfoLabel, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        outputdevBox = new QComboBox(groupBox_5);
        outputdevBox->setObjectName("outputdevBox");

        gridLayout_3->addWidget(outputdevBox, 2, 1, 1, 1);

        refreshoutputButton = new QToolButton(groupBox_5);
        refreshoutputButton->setObjectName("refreshoutputButton");
        refreshoutputButton->setIcon(icon);
        refreshoutputButton->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(refreshoutputButton, 2, 2, 1, 1);

        outputinfoLabel = new QLabel(groupBox_5);
        outputinfoLabel->setObjectName("outputinfoLabel");
        outputinfoLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        outputinfoLabel->setText(QString::fromUtf8("TextLabel"));
        outputinfoLabel->setWordWrap(true);

        gridLayout_3->addWidget(outputinfoLabel, 3, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout_7->addLayout(gridLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        sndtestButton = new QPushButton(groupBox_5);
        sndtestButton->setObjectName("sndtestButton");
        sndtestButton->setCheckable(true);

        horizontalLayout_4->addWidget(sndtestButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_4);

        echocancelBox = new QCheckBox(groupBox_5);
        echocancelBox->setObjectName("echocancelBox");

        verticalLayout_7->addWidget(echocancelBox);

        agcBox = new QCheckBox(groupBox_5);
        agcBox->setObjectName("agcBox");

        verticalLayout_7->addWidget(agcBox);

        denoisingBox = new QCheckBox(groupBox_5);
        denoisingBox->setObjectName("denoisingBox");

        verticalLayout_7->addWidget(denoisingBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_34 = new QLabel(groupBox_5);
        label_34->setObjectName("label_34");

        horizontalLayout_10->addWidget(label_34);

        mediavsvoiceSlider = new QSlider(groupBox_5);
        mediavsvoiceSlider->setObjectName("mediavsvoiceSlider");
        mediavsvoiceSlider->setMaximum(200);
        mediavsvoiceSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_10->addWidget(mediavsvoiceSlider);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        snddefaultButton = new QPushButton(groupBox_5);
        snddefaultButton->setObjectName("snddefaultButton");

        horizontalLayout_6->addWidget(snddefaultButton);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_6->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        tabWidget->addTab(soundTab, QString());
        eventsTab = new QWidget();
        eventsTab->setObjectName("eventsTab");
        verticalLayout_8 = new QVBoxLayout(eventsTab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_6 = new QGroupBox(eventsTab);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_17 = new QVBoxLayout(groupBox_6);
        verticalLayout_17->setObjectName("verticalLayout_17");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_spack = new QLabel(groupBox_6);
        label_spack->setObjectName("label_spack");

        horizontalLayout_14->addWidget(label_spack);

        spackBox = new QComboBox(groupBox_6);
        spackBox->setObjectName("spackBox");

        horizontalLayout_14->addWidget(spackBox);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_26);

        sndVolLabel = new QLabel(groupBox_6);
        sndVolLabel->setObjectName("sndVolLabel");

        horizontalLayout_14->addWidget(sndVolLabel);

        sndVolSpinBox = new QSpinBox(groupBox_6);
        sndVolSpinBox->setObjectName("sndVolSpinBox");
        sndVolSpinBox->setMinimum(0);
        sndVolSpinBox->setMaximum(100);

        horizontalLayout_14->addWidget(sndVolSpinBox);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);

        label_47 = new QLabel(groupBox_6);
        label_47->setObjectName("label_47");

        horizontalLayout_14->addWidget(label_47);

        sndeventPlaybackComboBox = new QComboBox(groupBox_6);
        sndeventPlaybackComboBox->setObjectName("sndeventPlaybackComboBox");

        horizontalLayout_14->addWidget(sndeventPlaybackComboBox);

        ttDeviceChkBox = new QCheckBox(groupBox_6);
        ttDeviceChkBox->setObjectName("ttDeviceChkBox");

        horizontalLayout_14->addWidget(ttDeviceChkBox);


        verticalLayout_17->addLayout(horizontalLayout_14);

        soundEvents_groupbox = new QGroupBox(groupBox_6);
        soundEvents_groupbox->setObjectName("soundEvents_groupbox");
        soundEvents_vlayout1 = new QVBoxLayout(soundEvents_groupbox);
        soundEvents_vlayout1->setObjectName("soundEvents_vlayout1");
        soundEventsTableView = new MyTableView(soundEvents_groupbox);
        soundEventsTableView->setObjectName("soundEventsTableView");
        soundEventsTableView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        soundEventsTableView->setTabKeyNavigation(false);
        soundEventsTableView->setProperty("showDropIndicator", QVariant(false));
        soundEventsTableView->setAlternatingRowColors(true);

        soundEvents_vlayout1->addWidget(soundEventsTableView);

        soundeventsfile_groupbox = new QGroupBox(soundEvents_groupbox);
        soundeventsfile_groupbox->setObjectName("soundeventsfile_groupbox");
        horizontalLayout_25 = new QHBoxLayout(soundeventsfile_groupbox);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        soundEventFileLabel = new QLabel(soundeventsfile_groupbox);
        soundEventFileLabel->setObjectName("soundEventFileLabel");

        horizontalLayout_25->addWidget(soundEventFileLabel);

        soundEventFileEdit = new QLineEdit(soundeventsfile_groupbox);
        soundEventFileEdit->setObjectName("soundEventFileEdit");

        horizontalLayout_25->addWidget(soundEventFileEdit);

        soundEventsBrowseButton = new QPushButton(soundeventsfile_groupbox);
        soundEventsBrowseButton->setObjectName("soundEventsBrowseButton");
        soundEventsBrowseButton->setText(QString::fromUtf8("..."));

        horizontalLayout_25->addWidget(soundEventsBrowseButton);

        soundEventsDefFileButton = new QPushButton(soundeventsfile_groupbox);
        soundEventsDefFileButton->setObjectName("soundEventsDefFileButton");

        horizontalLayout_25->addWidget(soundEventsDefFileButton);


        soundEvents_vlayout1->addWidget(soundeventsfile_groupbox);

        soundEvents_hbox2 = new QHBoxLayout();
        soundEvents_hbox2->setObjectName("soundEvents_hbox2");
        soundEventsEnableallButton = new QPushButton(soundEvents_groupbox);
        soundEventsEnableallButton->setObjectName("soundEventsEnableallButton");

        soundEvents_hbox2->addWidget(soundEventsEnableallButton);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        soundEvents_hbox2->addItem(horizontalSpacer_23);

        soundEventsClearallButton = new QPushButton(soundEvents_groupbox);
        soundEventsClearallButton->setObjectName("soundEventsClearallButton");

        soundEvents_hbox2->addWidget(soundEventsClearallButton);

        soundevents_hspacer1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        soundEvents_hbox2->addItem(soundevents_hspacer1);

        soundEventsRevertButton = new QPushButton(soundEvents_groupbox);
        soundEventsRevertButton->setObjectName("soundEventsRevertButton");

        soundEvents_hbox2->addWidget(soundEventsRevertButton);


        soundEvents_vlayout1->addLayout(soundEvents_hbox2);


        verticalLayout_17->addWidget(soundEvents_groupbox);


        verticalLayout_8->addWidget(groupBox_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        tabWidget->addTab(eventsTab, QString());
        ttsTab = new QWidget();
        ttsTab->setObjectName("ttsTab");
        horizontalLayout_22 = new QHBoxLayout(ttsTab);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        groupBox_12 = new QGroupBox(ttsTab);
        groupBox_12->setObjectName("groupBox_12");
        verticalLayout_20 = new QVBoxLayout(groupBox_12);
        verticalLayout_20->setObjectName("verticalLayout_20");
        ttsTableView = new MyTableView(groupBox_12);
        ttsTableView->setObjectName("ttsTableView");
        ttsTableView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        ttsTableView->setTabKeyNavigation(false);
        ttsTableView->setProperty("showDropIndicator", QVariant(false));
        ttsTableView->setAlternatingRowColors(true);

        verticalLayout_20->addWidget(ttsTableView);

        ttsmsg_groupbox = new QGroupBox(groupBox_12);
        ttsmsg_groupbox->setObjectName("ttsmsg_groupbox");
        verticalLayout_16 = new QVBoxLayout(ttsmsg_groupbox);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        TTSMsgLabel = new QLabel(ttsmsg_groupbox);
        TTSMsgLabel->setObjectName("TTSMsgLabel");

        horizontalLayout_29->addWidget(TTSMsgLabel);

        TTSMsgEdit = new QLineEdit(ttsmsg_groupbox);
        TTSMsgEdit->setObjectName("TTSMsgEdit");

        horizontalLayout_29->addWidget(TTSMsgEdit);


        verticalLayout_16->addLayout(horizontalLayout_29);

        TTSVarButton = new QPushButton(ttsmsg_groupbox);
        TTSVarButton->setObjectName("TTSVarButton");

        verticalLayout_16->addWidget(TTSVarButton);

        TTSDefValButton = new QPushButton(ttsmsg_groupbox);
        TTSDefValButton->setObjectName("TTSDefValButton");

        verticalLayout_16->addWidget(TTSDefValButton);

        TTSDefValAllButton = new QPushButton(ttsmsg_groupbox);
        TTSDefValAllButton->setObjectName("TTSDefValAllButton");

        verticalLayout_16->addWidget(TTSDefValAllButton);


        verticalLayout_20->addWidget(ttsmsg_groupbox);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        ttsEnableallButton = new QPushButton(groupBox_12);
        ttsEnableallButton->setObjectName("ttsEnableallButton");

        horizontalLayout_23->addWidget(ttsEnableallButton);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_29);

        ttsClearallButton = new QPushButton(groupBox_12);
        ttsClearallButton->setObjectName("ttsClearallButton");

        horizontalLayout_23->addWidget(ttsClearallButton);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_25);

        ttsRevertButton = new QPushButton(groupBox_12);
        ttsRevertButton->setObjectName("ttsRevertButton");

        horizontalLayout_23->addWidget(ttsRevertButton);


        verticalLayout_20->addLayout(horizontalLayout_23);


        horizontalLayout_22->addWidget(groupBox_12);

        groupBox_11 = new QGroupBox(ttsTab);
        groupBox_11->setObjectName("groupBox_11");
        verticalLayout_19 = new QVBoxLayout(groupBox_11);
        verticalLayout_19->setObjectName("verticalLayout_19");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_ttsengine = new QLabel(groupBox_11);
        label_ttsengine->setObjectName("label_ttsengine");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label_ttsengine);

        ttsengineComboBox = new QComboBox(groupBox_11);
        ttsengineComboBox->setObjectName("ttsengineComboBox");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, ttsengineComboBox);

        label_ttslocale = new QLabel(groupBox_11);
        label_ttslocale->setObjectName("label_ttslocale");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_ttslocale);

        ttsLocaleComboBox = new QComboBox(groupBox_11);
        ttsLocaleComboBox->setObjectName("ttsLocaleComboBox");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, ttsLocaleComboBox);

        label_ttsvoice = new QLabel(groupBox_11);
        label_ttsvoice->setObjectName("label_ttsvoice");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_ttsvoice);

        ttsVoiceComboBox = new QComboBox(groupBox_11);
        ttsVoiceComboBox->setObjectName("ttsVoiceComboBox");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, ttsVoiceComboBox);

        label_ttsvoicerate = new QLabel(groupBox_11);
        label_ttsvoicerate->setObjectName("label_ttsvoicerate");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_ttsvoicerate);

        ttsVoiceRateSpinBox = new QDoubleSpinBox(groupBox_11);
        ttsVoiceRateSpinBox->setObjectName("ttsVoiceRateSpinBox");
        ttsVoiceRateSpinBox->setMinimum(-1.000000000000000);
        ttsVoiceRateSpinBox->setMaximum(1.000000000000000);
        ttsVoiceRateSpinBox->setSingleStep(0.100000000000000);
        ttsVoiceRateSpinBox->setValue(0.000000000000000);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, ttsVoiceRateSpinBox);

        label_ttsvoicevolume = new QLabel(groupBox_11);
        label_ttsvoicevolume->setObjectName("label_ttsvoicevolume");

        formLayout_3->setWidget(4, QFormLayout::ItemRole::LabelRole, label_ttsvoicevolume);

        ttsVoiceVolumeSpinBox = new QDoubleSpinBox(groupBox_11);
        ttsVoiceVolumeSpinBox->setObjectName("ttsVoiceVolumeSpinBox");
        ttsVoiceVolumeSpinBox->setMinimum(0.000000000000000);
        ttsVoiceVolumeSpinBox->setMaximum(1.000000000000000);
        ttsVoiceVolumeSpinBox->setSingleStep(0.100000000000000);
        ttsVoiceVolumeSpinBox->setValue(0.500000000000000);

        formLayout_3->setWidget(4, QFormLayout::ItemRole::FieldRole, ttsVoiceVolumeSpinBox);

        label_ttsnotifTimestamp = new QLabel(groupBox_11);
        label_ttsnotifTimestamp->setObjectName("label_ttsnotifTimestamp");

        formLayout_3->setWidget(5, QFormLayout::ItemRole::LabelRole, label_ttsnotifTimestamp);

        ttsNotifTimestampSpinBox = new QSpinBox(groupBox_11);
        ttsNotifTimestampSpinBox->setObjectName("ttsNotifTimestampSpinBox");
        ttsNotifTimestampSpinBox->setMinimum(1);
        ttsNotifTimestampSpinBox->setMaximum(10000);
        ttsNotifTimestampSpinBox->setValue(1000);

        formLayout_3->setWidget(5, QFormLayout::ItemRole::FieldRole, ttsNotifTimestampSpinBox);

        label_ttsoutputmode = new QLabel(groupBox_11);
        label_ttsoutputmode->setObjectName("label_ttsoutputmode");

        formLayout_3->setWidget(6, QFormLayout::ItemRole::LabelRole, label_ttsoutputmode);

        ttsOutputModeComboBox = new QComboBox(groupBox_11);
        ttsOutputModeComboBox->setObjectName("ttsOutputModeComboBox");

        formLayout_3->setWidget(6, QFormLayout::ItemRole::FieldRole, ttsOutputModeComboBox);

        ttsForceSapiChkBox = new QCheckBox(groupBox_11);
        ttsForceSapiChkBox->setObjectName("ttsForceSapiChkBox");

        formLayout_3->setWidget(7, QFormLayout::ItemRole::SpanningRole, ttsForceSapiChkBox);

        ttsTrySapiChkBox = new QCheckBox(groupBox_11);
        ttsTrySapiChkBox->setObjectName("ttsTrySapiChkBox");

        formLayout_3->setWidget(8, QFormLayout::ItemRole::SpanningRole, ttsTrySapiChkBox);

        ttsAssertiveChkBox = new QCheckBox(groupBox_11);
        ttsAssertiveChkBox->setObjectName("ttsAssertiveChkBox");

        formLayout_3->setWidget(9, QFormLayout::ItemRole::SpanningRole, ttsAssertiveChkBox);

        ttsToastChkBox = new QCheckBox(groupBox_11);
        ttsToastChkBox->setObjectName("ttsToastChkBox");

        formLayout_3->setWidget(10, QFormLayout::ItemRole::SpanningRole, ttsToastChkBox);

        ttsSpeakListsChkBox = new QCheckBox(groupBox_11);
        ttsSpeakListsChkBox->setObjectName("ttsSpeakListsChkBox");

        formLayout_3->setWidget(11, QFormLayout::ItemRole::LabelRole, ttsSpeakListsChkBox);


        verticalLayout_19->addLayout(formLayout_3);

        verticalSpacer_10 = new QSpacerItem(20, 216, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_10);


        horizontalLayout_22->addWidget(groupBox_11);

        tabWidget->addTab(ttsTab, QString());
        shortcutsTab = new QWidget();
        shortcutsTab->setObjectName("shortcutsTab");
        verticalLayout_10 = new QVBoxLayout(shortcutsTab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        groupBox_7 = new QGroupBox(shortcutsTab);
        groupBox_7->setObjectName("groupBox_7");
        verticalLayout_11 = new QVBoxLayout(groupBox_7);
        verticalLayout_11->setObjectName("verticalLayout_11");
        shortcutsTableView = new MyTableView(groupBox_7);
        shortcutsTableView->setObjectName("shortcutsTableView");
        shortcutsTableView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        shortcutsTableView->setTabKeyNavigation(false);
        shortcutsTableView->setProperty("showDropIndicator", QVariant(false));
        shortcutsTableView->setAlternatingRowColors(true);

        verticalLayout_11->addWidget(shortcutsTableView);


        verticalLayout_10->addWidget(groupBox_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        tabWidget->addTab(shortcutsTab, QString());
        videoTab = new QWidget();
        videoTab->setObjectName("videoTab");
        verticalLayout_22 = new QVBoxLayout(videoTab);
        verticalLayout_22->setObjectName("verticalLayout_22");
        groupBox_8 = new QGroupBox(videoTab);
        groupBox_8->setObjectName("groupBox_8");
        formLayout = new QFormLayout(groupBox_8);
        formLayout->setObjectName("formLayout");
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName("label_13");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_13);

        vidcapdevicesBox = new QComboBox(groupBox_8);
        vidcapdevicesBox->setObjectName("vidcapdevicesBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vidcapdevicesBox->sizePolicy().hasHeightForWidth());
        vidcapdevicesBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, vidcapdevicesBox);

        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName("label_15");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        captureformatsBox = new QComboBox(groupBox_8);
        captureformatsBox->setObjectName("captureformatsBox");

        horizontalLayout_9->addWidget(captureformatsBox);

        vidfmtToolButton = new QToolButton(groupBox_8);
        vidfmtToolButton->setObjectName("vidfmtToolButton");
        vidfmtToolButton->setText(QString::fromUtf8("..."));

        horizontalLayout_9->addWidget(vidfmtToolButton);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_9);

        label_31 = new QLabel(groupBox_8);
        label_31->setObjectName("label_31");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_31);

        vidImgFmtBox = new QComboBox(groupBox_8);
        vidImgFmtBox->setObjectName("vidImgFmtBox");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, vidImgFmtBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        vidtestButton = new QPushButton(groupBox_8);
        vidtestButton->setObjectName("vidtestButton");

        horizontalLayout_8->addWidget(vidtestButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_8);

        vidgroupBox = new QGroupBox(groupBox_8);
        vidgroupBox->setObjectName("vidgroupBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(vidgroupBox->sizePolicy().hasHeightForWidth());
        vidgroupBox->setSizePolicy(sizePolicy3);
        verticalLayout_14 = new QVBoxLayout(vidgroupBox);
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_33 = new QLabel(vidgroupBox);
        label_33->setObjectName("label_33");

        horizontalLayout_19->addWidget(label_33);

        vidcodecBox = new QComboBox(vidgroupBox);
        vidcodecBox->setObjectName("vidcodecBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(vidcodecBox->sizePolicy().hasHeightForWidth());
        vidcodecBox->setSizePolicy(sizePolicy4);

        horizontalLayout_19->addWidget(vidcodecBox);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_21);


        verticalLayout_14->addLayout(horizontalLayout_19);

        vidcodecStackedWidget = new QStackedWidget(vidgroupBox);
        vidcodecStackedWidget->setObjectName("vidcodecStackedWidget");
        vp8_page = new QWidget();
        vp8_page->setObjectName("vp8_page");
        verticalLayout_15 = new QVBoxLayout(vp8_page);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_42 = new QLabel(vp8_page);
        label_42->setObjectName("label_42");

        horizontalLayout_21->addWidget(label_42);

        vp8bitrateSpinBox = new QSpinBox(vp8_page);
        vp8bitrateSpinBox->setObjectName("vp8bitrateSpinBox");
        sizePolicy4.setHeightForWidth(vp8bitrateSpinBox->sizePolicy().hasHeightForWidth());
        vp8bitrateSpinBox->setSizePolicy(sizePolicy4);
        vp8bitrateSpinBox->setMinimum(0);
        vp8bitrateSpinBox->setMaximum(1000);
        vp8bitrateSpinBox->setValue(0);

        horizontalLayout_21->addWidget(vp8bitrateSpinBox);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_22);


        verticalLayout_15->addLayout(horizontalLayout_21);

        verticalSpacer_9 = new QSpacerItem(20, 73, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_9);

        vidcodecStackedWidget->addWidget(vp8_page);

        verticalLayout_14->addWidget(vidcodecStackedWidget);


        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, vidgroupBox);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);

        viddefaultButton = new QPushButton(groupBox_8);
        viddefaultButton->setObjectName("viddefaultButton");

        horizontalLayout_12->addWidget(viddefaultButton);


        formLayout->setLayout(5, QFormLayout::ItemRole::FieldRole, horizontalLayout_12);


        verticalLayout_22->addWidget(groupBox_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_5);

        tabWidget->addTab(videoTab, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(nicknameEdit);
        label_gender->setBuddy(genderBox);
        label_2->setBuddy(awaySpinBox);
        label_statusmsg->setBuddy(statusmsgEdit);
        label_away_statusmsg->setBuddy(awayMsgEdit);
        label_35->setBuddy(bearwareidEdit);
        label_5->setBuddy(languageBox);
        timestampformatLabel->setBuddy(timestampformatEdit);
        label_39->setBuddy(maxtextSpinBox);
        label_infoStyle->setBuddy(infoStyleBox);
        label_45->setBuddy(channelsortComboBox);
        label_dbclickchan->setBuddy(chanDbClickBox);
        label_41->setBuddy(subdeskinputBtn);
        label_8->setBuddy(tcpportSpinBox);
        label_9->setBuddy(udpportSpinBox);
        label_sndsys->setBuddy(sndSysBox);
        label_12->setBuddy(inputdevBox);
        label_14->setBuddy(outputdevBox);
        label_34->setBuddy(mediavsvoiceSlider);
        label_spack->setBuddy(spackBox);
        sndVolLabel->setBuddy(sndVolSpinBox);
        label_47->setBuddy(sndeventPlaybackComboBox);
        soundEventFileLabel->setBuddy(soundEventFileEdit);
        TTSMsgLabel->setBuddy(TTSMsgEdit);
        label_ttsengine->setBuddy(ttsengineComboBox);
        label_ttslocale->setBuddy(ttsLocaleComboBox);
        label_ttsvoice->setBuddy(ttsVoiceComboBox);
        label_ttsvoicerate->setBuddy(ttsVoiceRateSpinBox);
        label_ttsvoicevolume->setBuddy(ttsVoiceVolumeSpinBox);
        label_ttsnotifTimestamp->setBuddy(ttsNotifTimestampSpinBox);
        label_ttsoutputmode->setBuddy(ttsOutputModeComboBox);
        label_13->setBuddy(vidcapdevicesBox);
        label_15->setBuddy(captureformatsBox);
        label_31->setBuddy(vidImgFmtBox);
        label_33->setBuddy(vidcodecBox);
        label_42->setBuddy(vp8bitrateSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PreferencesDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PreferencesDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PreferencesDlg, qOverload<>(&QDialog::reject));
        QObject::connect(sndtestButton, &QPushButton::toggled, refreshinputButton, &QToolButton::setDisabled);
        QObject::connect(sndtestButton, &QPushButton::toggled, refreshoutputButton, &QToolButton::setDisabled);

        tabWidget->setCurrentIndex(0);
        vidcodecStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDlg);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDlg)
    {
        PreferencesDlg->setWindowTitle(QCoreApplication::translate("PreferencesDlg", "Preferences", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PreferencesDlg", "User Settings", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDlg", "Nickname", nullptr));
        label_gender->setText(QCoreApplication::translate("PreferencesDlg", "Gender", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDlg", "Set away status after", nullptr));
        label_3->setText(QCoreApplication::translate("PreferencesDlg", "seconds of inactivity (0 means disabled)", nullptr));
        disableVoiceActCheckBox->setText(QCoreApplication::translate("PreferencesDlg", "Disable voice activation during inactivity", nullptr));
        label_statusmsg->setText(QCoreApplication::translate("PreferencesDlg", "Status message", nullptr));
        label_away_statusmsg->setText(QCoreApplication::translate("PreferencesDlg", "Status message during inactivity", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("PreferencesDlg", "BearWare.dk Web Login", nullptr));
        label_35->setText(QCoreApplication::translate("PreferencesDlg", "BearWare.dk Web Login ID", nullptr));
        setupBearWareLoginButton->setText(QCoreApplication::translate("PreferencesDlg", "&Activate", nullptr));
        syncWebUserCheckBox->setText(QCoreApplication::translate("PreferencesDlg", "Restore volume settings and subscriptions on login for Web Login users", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PreferencesDlg", "Voice Transmission Mode", nullptr));
        pttChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Push To Talk", nullptr));
        setupkeysButton->setText(QCoreApplication::translate("PreferencesDlg", "&Setup Keys", nullptr));
        keycompLabel->setText(QCoreApplication::translate("PreferencesDlg", "Key Combination:", nullptr));
#if QT_CONFIG(tooltip)
        pttlockChkBox->setToolTip(QCoreApplication::translate("PreferencesDlg", "Press to transmit.  Press to stop transmit", nullptr));
#endif // QT_CONFIG(tooltip)
        pttlockChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Push To Talk Lock", nullptr));
        voiceactChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Voice activated", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("PreferencesDlg", "General", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PreferencesDlg", "User Interface Settings", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDlg", "User interface language", nullptr));
        startminimizedChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Start minimized", nullptr));
        trayChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Minimize to tray icon", nullptr));
        confirmExitChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Ask confirmation before exiting", nullptr));
        alwaysontopChkBox->setText(QCoreApplication::translate("PreferencesDlg", "&Always on top", nullptr));
        vumeterChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Enable VU-meter updates", nullptr));
        voiceActLevelChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show voice activation level slider", nullptr));
        chatlistviewChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show chat history as list view instead of text edit", nullptr));
        ServnameChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show both server and channel name in window title", nullptr));
        chatTemplateChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Setup text message templates", nullptr));
#if QT_CONFIG(accessibility)
        chatTemplateToolButton->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Edit Chat Message Templates", nullptr));
#endif // QT_CONFIG(accessibility)
        timestampformatLabel->setText(QCoreApplication::translate("PreferencesDlg", "Timestamp format", nullptr));
        TSFVarButton->setText(QCoreApplication::translate("PreferencesDlg", "&Variables...", nullptr));
        logstatusbarChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show statusbar events in chat-window", nullptr));
#if QT_CONFIG(accessibility)
        statusbarToolButton->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Configure events", nullptr));
#endif // QT_CONFIG(accessibility)
        vidtextChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show source in corner of video window", nullptr));
#if QT_CONFIG(accessibility)
        vidtextsrcToolBtn->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Video window settings", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_16->setTitle(QCoreApplication::translate("PreferencesDlg", "Dialogs", nullptr));
        msgpopupChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Popup dialog when receiving text message", nullptr));
        videodlgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Start video in popup dialog", nullptr));
        desktopdlgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Start desktops in popup dialog", nullptr));
        dlgExcludeChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show dialog box when excluded from channel or server", nullptr));
        closeFileDlgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Close dialog box when a file transfer is finished", nullptr));
        dlgMOTDChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show dialog box with server's message of the day", nullptr));
        startServerListChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show dialog box with server list on startup", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("PreferencesDlg", "Channels Tree", nullptr));
        usercountChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show number of users in channel", nullptr));
        showusernameChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show username instead of nickname", nullptr));
        lasttalkChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show last to talk in yellow", nullptr));
        animChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show user and channel icons", nullptr));
        chanTopicChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show channel topic in channel list", nullptr));
        label_39->setText(QCoreApplication::translate("PreferencesDlg", "Maximum text length in channel list", nullptr));
        chanexpChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Auto expand channels", nullptr));
        label_infoStyle->setText(QCoreApplication::translate("PreferencesDlg", "Style of user and channel info", nullptr));
        label_45->setText(QCoreApplication::translate("PreferencesDlg", "Sort channels by", nullptr));
        label_dbclickchan->setText(QCoreApplication::translate("PreferencesDlg", "Double click on a channel", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("PreferencesDlg", "Software Update", nullptr));
        updatesChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Check for software updates on startup", nullptr));
        betaUpdatesChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Check for beta software updates on startup", nullptr));
        updatesDlgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Show new version available in dialog box", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayTab), QCoreApplication::translate("PreferencesDlg", "Display", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("PreferencesDlg", "Client Connection", nullptr));
        autoconnectChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Connect to latest host on startup", nullptr));
        reconnectChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Reconnect on connection dropped", nullptr));
        autojoinChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Join root channel upon connection", nullptr));
        maxpayloadChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Query server's maximum payload upon connection", nullptr));
        winfwChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Add application to Windows Firewall exceptions list", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_13->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Default Subscriptions upon Connection", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_13->setTitle(QCoreApplication::translate("PreferencesDlg", "Default Subscriptions upon Connection", nullptr));
        subusermsgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "User Messages", nullptr));
        subchanmsgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Channel Messages", nullptr));
        subbcastmsgChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Broadcast Messages", nullptr));
        subvoiceChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Voice", nullptr));
        subvidcapChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Video Capture", nullptr));
        subdesktopChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Desktop", nullptr));
        label_41->setText(QCoreApplication::translate("PreferencesDlg", "Desktop Access", nullptr));
#if QT_CONFIG(accessibility)
        subdeskinputBtn->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Configure trusted list", nullptr));
#endif // QT_CONFIG(accessibility)
        submediafileChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Media Files", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_4->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Local Socket Settings", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_4->setTitle(QCoreApplication::translate("PreferencesDlg", "Local Socket Settings", nullptr));
        label_8->setText(QCoreApplication::translate("PreferencesDlg", "TCP port", nullptr));
        label_10->setText(QCoreApplication::translate("PreferencesDlg", "Default: 0", nullptr));
        label_9->setText(QCoreApplication::translate("PreferencesDlg", "UDP port", nullptr));
        label_11->setText(QCoreApplication::translate("PreferencesDlg", "Default: 0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(connectionTab), QCoreApplication::translate("PreferencesDlg", "Connection", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PreferencesDlg", "Sound System Settings", nullptr));
        label_sndsys->setText(QCoreApplication::translate("PreferencesDlg", "Sound System", nullptr));
        label_12->setText(QCoreApplication::translate("PreferencesDlg", "Input device", nullptr));
        refreshinputButton->setText(QCoreApplication::translate("PreferencesDlg", "Refresh devices", nullptr));
        label_14->setText(QCoreApplication::translate("PreferencesDlg", "Output device", nullptr));
        refreshoutputButton->setText(QCoreApplication::translate("PreferencesDlg", "Refresh devices", nullptr));
        sndtestButton->setText(QCoreApplication::translate("PreferencesDlg", "&Test Selected", nullptr));
        echocancelBox->setText(QCoreApplication::translate("PreferencesDlg", "Enable echo cancellation (remove echo from speakers)", nullptr));
        agcBox->setText(QCoreApplication::translate("PreferencesDlg", "Enable automatic gain control (microphone level adjusted automatically)", nullptr));
        denoisingBox->setText(QCoreApplication::translate("PreferencesDlg", "Enable denoising (suppress noise from microphone)", nullptr));
        label_34->setText(QCoreApplication::translate("PreferencesDlg", "Media file vs. voice volume", nullptr));
        snddefaultButton->setText(QCoreApplication::translate("PreferencesDlg", "&Default", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(soundTab), QCoreApplication::translate("PreferencesDlg", "Sound System", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PreferencesDlg", "Sound Events", nullptr));
        label_spack->setText(QCoreApplication::translate("PreferencesDlg", "Sound pack", nullptr));
        sndVolLabel->setText(QCoreApplication::translate("PreferencesDlg", "Sound event volume level", nullptr));
        label_47->setText(QCoreApplication::translate("PreferencesDlg", "Playback mode", nullptr));
#if QT_CONFIG(tooltip)
        ttDeviceChkBox->setToolTip(QCoreApplication::translate("PreferencesDlg", "Use the sound output device selected in TeamTalk for playing sound events", nullptr));
#endif // QT_CONFIG(tooltip)
        ttDeviceChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Use selected sound output device for playback", nullptr));
        soundEvents_groupbox->setTitle(QCoreApplication::translate("PreferencesDlg", "Enable/disable Sound Events", nullptr));
#if QT_CONFIG(tooltip)
        soundEventsTableView->setToolTip(QCoreApplication::translate("PreferencesDlg", "Double click to check/uncheck", nullptr));
#endif // QT_CONFIG(tooltip)
        soundeventsfile_groupbox->setTitle(QCoreApplication::translate("PreferencesDlg", "Sound Event File", nullptr));
        soundEventFileLabel->setText(QCoreApplication::translate("PreferencesDlg", "File", nullptr));
#if QT_CONFIG(accessibility)
        soundEventsBrowseButton->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Browse", nullptr));
#endif // QT_CONFIG(accessibility)
        soundEventsDefFileButton->setText(QCoreApplication::translate("PreferencesDlg", "Reset to Default File", nullptr));
        soundEventsEnableallButton->setText(QCoreApplication::translate("PreferencesDlg", "Enable &all", nullptr));
        soundEventsClearallButton->setText(QCoreApplication::translate("PreferencesDlg", "C&lear all", nullptr));
        soundEventsRevertButton->setText(QCoreApplication::translate("PreferencesDlg", "&Revert", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(eventsTab), QCoreApplication::translate("PreferencesDlg", "Sound Events", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("PreferencesDlg", "Enable/disable Text to Speech Events", nullptr));
#if QT_CONFIG(tooltip)
        ttsTableView->setToolTip(QCoreApplication::translate("PreferencesDlg", "Double click to check/uncheck", nullptr));
#endif // QT_CONFIG(tooltip)
        ttsmsg_groupbox->setTitle(QCoreApplication::translate("PreferencesDlg", "Text to Speech Message", nullptr));
        TTSMsgLabel->setText(QCoreApplication::translate("PreferencesDlg", "Message", nullptr));
        TTSVarButton->setText(QCoreApplication::translate("PreferencesDlg", "&Variables...", nullptr));
        TTSDefValButton->setText(QCoreApplication::translate("PreferencesDlg", "Reset to Default Value", nullptr));
        TTSDefValAllButton->setText(QCoreApplication::translate("PreferencesDlg", "Reset All to Default Values", nullptr));
        ttsEnableallButton->setText(QCoreApplication::translate("PreferencesDlg", "Enable &all", nullptr));
        ttsClearallButton->setText(QCoreApplication::translate("PreferencesDlg", "C&lear all", nullptr));
        ttsRevertButton->setText(QCoreApplication::translate("PreferencesDlg", "&Revert", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("PreferencesDlg", "Text to Speech Preferences", nullptr));
        label_ttsengine->setText(QCoreApplication::translate("PreferencesDlg", "Text to Speech Engine", nullptr));
        label_ttslocale->setText(QCoreApplication::translate("PreferencesDlg", "Language", nullptr));
        label_ttsvoice->setText(QCoreApplication::translate("PreferencesDlg", "Voice", nullptr));
        label_ttsvoicerate->setText(QCoreApplication::translate("PreferencesDlg", "Voice rate", nullptr));
        label_ttsvoicevolume->setText(QCoreApplication::translate("PreferencesDlg", "Voice volume", nullptr));
        label_ttsnotifTimestamp->setText(QCoreApplication::translate("PreferencesDlg", "Display duration of notifications", nullptr));
        label_ttsoutputmode->setText(QCoreApplication::translate("PreferencesDlg", "Text to Speech output mode", nullptr));
        ttsForceSapiChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Use SAPI instead of current screenreader", nullptr));
        ttsTrySapiChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Switch to SAPI if current screenreader is not available", nullptr));
        ttsAssertiveChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Interrupt current screenreader speech on new event", nullptr));
        ttsToastChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Use toast notification", nullptr));
        ttsSpeakListsChkBox->setText(QCoreApplication::translate("PreferencesDlg", "Speak selected item in lists", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ttsTab), QCoreApplication::translate("PreferencesDlg", "Text To Speech", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PreferencesDlg", "Keyboard Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        shortcutsTableView->setToolTip(QCoreApplication::translate("PreferencesDlg", "Double click to configure keys", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(shortcutsTab), QCoreApplication::translate("PreferencesDlg", "Shortcuts", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("PreferencesDlg", "Video Capture Settings", nullptr));
        label_13->setText(QCoreApplication::translate("PreferencesDlg", "Video Capture Device", nullptr));
        label_15->setText(QCoreApplication::translate("PreferencesDlg", "Video Resolution", nullptr));
#if QT_CONFIG(accessibility)
        vidfmtToolButton->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Customize video format", nullptr));
#endif // QT_CONFIG(accessibility)
        label_31->setText(QCoreApplication::translate("PreferencesDlg", "Image Format", nullptr));
        vidtestButton->setText(QCoreApplication::translate("PreferencesDlg", "Test Selected", nullptr));
#if QT_CONFIG(accessibility)
        vidgroupBox->setAccessibleName(QCoreApplication::translate("PreferencesDlg", "Video Codec Settings", nullptr));
#endif // QT_CONFIG(accessibility)
        vidgroupBox->setTitle(QCoreApplication::translate("PreferencesDlg", "Video Codec Settings", nullptr));
        label_33->setText(QCoreApplication::translate("PreferencesDlg", "Codec", nullptr));
        label_42->setText(QCoreApplication::translate("PreferencesDlg", "Bitrate", nullptr));
        vp8bitrateSpinBox->setSuffix(QCoreApplication::translate("PreferencesDlg", " kbps", nullptr));
        viddefaultButton->setText(QCoreApplication::translate("PreferencesDlg", "&Default", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(videoTab), QCoreApplication::translate("PreferencesDlg", "Video Capture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDlg: public Ui_PreferencesDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
