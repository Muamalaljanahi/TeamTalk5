/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "channelstree.h"
#include "chatlineedit.h"
#include "chattextedit.h"
#include "desktopgridwidget.h"
#include "filesview.h"
#include "mytabwidget.h"
#include "videogridwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionServerList;
    QAction *actionConnect;
    QAction *actionEnableEchoCancel;
    QAction *actionEnableAGC;
    QAction *actionEnableDenoising;
    QAction *actionPreferences;
    QAction *actionExit;
    QAction *actionSpeakClientStats;
    QAction *actionEnablePushToTalk;
    QAction *actionCheckUpdate;
    QAction *actionAbout;
    QAction *actionManual;
    QAction *actionServerProperties;
    QAction *actionCreateChannel;
    QAction *actionUpdateChannel;
    QAction *actionDeleteChannel;
    QAction *actionJoinChannel;
    QAction *actionLeaveChannel;
    QAction *actionEnableVoiceActivation;
    QAction *actionChangeNickname;
    QAction *actionChangeStatus;
    QAction *actionViewUserInformation;
    QAction *actionSpeakUserInformation;
    QAction *actionMuteAll;
    QAction *actionUploadFile;
    QAction *actionDownloadFile;
    QAction *actionDeleteFile;
    QAction *actionBannedUsers;
    QAction *actionUserAccounts;
    QAction *actionSaveConfiguration;
    QAction *actionViewChannelInfo;
    QAction *actionSpeakChannelInfo;
    QAction *actionSpeakChannelStat;
    QAction *actionMessages;
    QAction *actionKickBan;
    QAction *actionOp;
    QAction *actionVolume;
    QAction *actionVoice;
    QAction *actionUserMessages;
    QAction *actionChannelMessages;
    QAction *actionVideo;
    QAction *actionBroadcastMessages;
    QAction *actionEnableVideoTransmission;
    QAction *actionStreamAudioFileToChannel;
    QAction *actionStreamAudioFileToUser;
    QAction *actionMediaStorage;
    QAction *actionInterceptUserMessages;
    QAction *actionInterceptChannelMessages;
    QAction *actionInterceptVoice;
    QAction *actionInterceptVideo;
    QAction *actionBroadcastMessage;
    QAction *actionIncreaseVoiceVolume;
    QAction *actionLowerVoiceVolume;
    QAction *actionStoreForMove;
    QAction *actionMoveUser;
    QAction *actionMoveUsersDialog;
    QAction *actionVisitBearWare;
    QAction *actionAllowVoiceTransmission;
    QAction *actionAllowVideoTransmission;
    QAction *actionAllowAllVoiceTransmission;
    QAction *actionAllowAllVideoTransmission;
    QAction *actionServerStatistics;
    QAction *actionNewClient;
    QAction *actionOnlineUsers;
    QAction *actionEnableDesktopSharing;
    QAction *actionEnableTTS;
    QAction *actionEnableSounds;
    QAction *actionAllowDesktopTransmission;
    QAction *actionAllowAllDesktopTransmission;
    QAction *actionDesktop;
    QAction *actionInterceptDesktop;
    QAction *actionStreamMediaFileToChannel;
    QAction *actionPauseResumeStream;
    QAction *actionGenerateTTURL;
    QAction *actionDesktopInput;
    QAction *actionDesktopAccessAllow;
    QAction *actionDesktopAccessDeny;
    QAction *actionMediaFile;
    QAction *actionInterceptMediaFile;
    QAction *actionAllowMediaFileTransmission;
    QAction *actionAllowAllMediaFileTransmission;
    QAction *actionMuteVoice;
    QAction *actionMuteMediaFile;
    QAction *actionKickFromChannel;
    QAction *actionKickFromServer;
    QAction *actionIncreaseMediaFileVolume;
    QAction *actionLowerMediaFileVolume;
    QAction *actionResetPreferencesToDefault;
    QAction *actionKickAndBanFromChannel;
    QAction *actionBannedUsersInChannel;
    QAction *actionAllowChannelTextMessages;
    QAction *actionAllowAllChannelTextMessages;
    QAction *actionHearMyself;
    QAction *actionToggleQuestionMode;
    QAction *action;
    QAction *actionRelayVoiceStream;
    QAction *actionRelayMediaFileStream;
    QAction *actionRefreshSoundDevices;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    ChannelsTree *channelsWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *volumeSlider;
    QLabel *vumeterLabel;
    QProgressBar *voiceactBar;
    QLabel *label_2;
    QSlider *micSlider;
    QLabel *voiceactLabel;
    QSlider *voiceactSlider;
    MyTabWidget *tabWidget;
    QWidget *chatTab;
    QVBoxLayout *verticalLayout_3;
    ChatTextEdit *chatEdit;
    QHBoxLayout *horizontalLayout_2;
    ChatLineEdit *msgEdit;
    QToolButton *sendButton;
    QWidget *filesTab;
    QVBoxLayout *verticalLayout_4;
    QLabel *channelLabel;
    FilesView *filesView;
    QHBoxLayout *horizontalLayout;
    QToolButton *downloadButton;
    QToolButton *deleteButton;
    QToolButton *uploadButton;
    QWidget *tab;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QToolButton *playMediaFileButton;
    QToolButton *stopMediaFileButton;
    QToolButton *openMediaFileButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QLabel *mediaFileNameLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mediaDurationLabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mediaAudioFmtLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mediaVideoFmtLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *playbackElapsedStaticLabel;
    QSlider *playbackOffsetSlider;
    QLabel *playbackTimeLabel;
    QHBoxLayout *horizontalLayout_12;
    QLabel *mediaVolumeStaticLabel;
    QSlider *mediaVolumeSlider;
    QLabel *mediaVolumeLabel;
    QSpacerItem *verticalSpacer_11;
    QWidget *videoTab;
    QVBoxLayout *verticalLayout_10;
    QSplitter *videosplitter;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    VideoGridWidget *videogridWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_6;
    QToolButton *detachVideoButton;
    QSpacerItem *verticalSpacer_8;
    QToolButton *addVideoButton;
    QSpacerItem *verticalSpacer_9;
    QToolButton *removeVideoButton;
    QSpacerItem *verticalSpacer_10;
    QToolButton *initVideoButton;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *videostackedWidget;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    ChatTextEdit *videochatEdit;
    QHBoxLayout *horizontalLayout_6;
    ChatLineEdit *videomsgEdit;
    QToolButton *videosendButton;
    QWidget *page_4;
    QWidget *desktopTab;
    QVBoxLayout *verticalLayout_7;
    QSplitter *desktopsplitter;
    QWidget *layoutWidget_1;
    QHBoxLayout *horizontalLayout_4;
    DesktopGridWidget *desktopgridWidget;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QToolButton *detachDesktopButton;
    QSpacerItem *verticalSpacer;
    QToolButton *addDesktopButton;
    QSpacerItem *verticalSpacer_2;
    QToolButton *removeDesktopButton;
    QSpacerItem *verticalSpacer_4;
    QToolButton *desktopaccessButton;
    QSpacerItem *verticalSpacer_5;
    QStackedWidget *desktopstackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_8;
    ChatTextEdit *desktopchatEdit;
    QHBoxLayout *horizontalLayout_5;
    ChatLineEdit *desktopmsgEdit;
    QToolButton *desktopsendButton;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menuClient;
    QMenu *menuSoundConfiguration;
    QMenu *menuInputDev;
    QMenu *menuOutputDev;
    QMenu *menuMe;
    QMenu *menuNotifications;
    QMenu *menuUsers;
    QMenu *menuSubscriptions;
    QMenu *menu_Advanced;
    QMenu *menuMute;
    QMenu *menu_Kick;
    QMenu *menu_Info;
    QMenu *menu_Transmit_Control;
    QMenu *menuChannels;
    QMenu *menu_InfoChannel;
    QMenu *menu_Stream;
    QMenu *menuServer;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(637, 545);
        MainWindow->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        MainWindow->setWindowTitle(QString::fromUtf8(""));
        MainWindow->setAnimated(false);
        actionServerList = new QAction(MainWindow);
        actionServerList->setObjectName("actionServerList");
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName("actionConnect");
        actionConnect->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/connect.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionConnect->setIcon(icon);
        actionEnableEchoCancel = new QAction(MainWindow);
        actionEnableEchoCancel->setObjectName("actionEnableEchoCancel");
        actionEnableEchoCancel->setCheckable(true);
        actionEnableAGC = new QAction(MainWindow);
        actionEnableAGC->setObjectName("actionEnableAGC");
        actionEnableAGC->setCheckable(true);
        actionEnableDenoising = new QAction(MainWindow);
        actionEnableDenoising->setObjectName("actionEnableDenoising");
        actionEnableDenoising->setCheckable(true);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionSpeakClientStats = new QAction(MainWindow);
        actionSpeakClientStats->setObjectName("actionSpeakClientStats");
        actionEnablePushToTalk = new QAction(MainWindow);
        actionEnablePushToTalk->setObjectName("actionEnablePushToTalk");
        actionEnablePushToTalk->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/hotkey.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEnablePushToTalk->setIcon(icon1);
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName("actionCheckUpdate");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName("actionManual");
        actionManual->setEnabled(true);
        actionServerProperties = new QAction(MainWindow);
        actionServerProperties->setObjectName("actionServerProperties");
        actionCreateChannel = new QAction(MainWindow);
        actionCreateChannel->setObjectName("actionCreateChannel");
        actionUpdateChannel = new QAction(MainWindow);
        actionUpdateChannel->setObjectName("actionUpdateChannel");
        actionDeleteChannel = new QAction(MainWindow);
        actionDeleteChannel->setObjectName("actionDeleteChannel");
        actionJoinChannel = new QAction(MainWindow);
        actionJoinChannel->setObjectName("actionJoinChannel");
        actionLeaveChannel = new QAction(MainWindow);
        actionLeaveChannel->setObjectName("actionLeaveChannel");
        actionEnableVoiceActivation = new QAction(MainWindow);
        actionEnableVoiceActivation->setObjectName("actionEnableVoiceActivation");
        actionEnableVoiceActivation->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/voiceact.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEnableVoiceActivation->setIcon(icon2);
        actionChangeNickname = new QAction(MainWindow);
        actionChangeNickname->setObjectName("actionChangeNickname");
        actionChangeStatus = new QAction(MainWindow);
        actionChangeStatus->setObjectName("actionChangeStatus");
        actionViewUserInformation = new QAction(MainWindow);
        actionViewUserInformation->setObjectName("actionViewUserInformation");
        actionSpeakUserInformation = new QAction(MainWindow);
        actionSpeakUserInformation->setObjectName("actionSpeakUserInformation");
        actionMuteAll = new QAction(MainWindow);
        actionMuteAll->setObjectName("actionMuteAll");
        actionMuteAll->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/muteall.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMuteAll->setIcon(icon3);
        actionUploadFile = new QAction(MainWindow);
        actionUploadFile->setObjectName("actionUploadFile");
        actionDownloadFile = new QAction(MainWindow);
        actionDownloadFile->setObjectName("actionDownloadFile");
        actionDeleteFile = new QAction(MainWindow);
        actionDeleteFile->setObjectName("actionDeleteFile");
        actionBannedUsers = new QAction(MainWindow);
        actionBannedUsers->setObjectName("actionBannedUsers");
        actionUserAccounts = new QAction(MainWindow);
        actionUserAccounts->setObjectName("actionUserAccounts");
        actionSaveConfiguration = new QAction(MainWindow);
        actionSaveConfiguration->setObjectName("actionSaveConfiguration");
        actionViewChannelInfo = new QAction(MainWindow);
        actionViewChannelInfo->setObjectName("actionViewChannelInfo");
        actionSpeakChannelInfo = new QAction(MainWindow);
        actionSpeakChannelInfo->setObjectName("actionSpeakChannelInfo");
        actionSpeakChannelStat = new QAction(MainWindow);
        actionSpeakChannelStat->setObjectName("actionSpeakChannelStat");
        actionMessages = new QAction(MainWindow);
        actionMessages->setObjectName("actionMessages");
        actionKickBan = new QAction(MainWindow);
        actionKickBan->setObjectName("actionKickBan");
#if QT_CONFIG(shortcut)
        actionKickBan->setShortcut(QString::fromUtf8("Ctrl+Alt+B"));
#endif // QT_CONFIG(shortcut)
        actionOp = new QAction(MainWindow);
        actionOp->setObjectName("actionOp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/op.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOp->setIcon(icon4);
        actionVolume = new QAction(MainWindow);
        actionVolume->setObjectName("actionVolume");
        actionVoice = new QAction(MainWindow);
        actionVoice->setObjectName("actionVoice");
        actionVoice->setCheckable(true);
        actionVoice->setIcon(icon2);
        actionUserMessages = new QAction(MainWindow);
        actionUserMessages->setObjectName("actionUserMessages");
        actionUserMessages->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/msg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUserMessages->setIcon(icon5);
        actionChannelMessages = new QAction(MainWindow);
        actionChannelMessages->setObjectName("actionChannelMessages");
        actionChannelMessages->setCheckable(true);
        actionVideo = new QAction(MainWindow);
        actionVideo->setObjectName("actionVideo");
        actionVideo->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/webcam.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVideo->setIcon(icon6);
        actionBroadcastMessages = new QAction(MainWindow);
        actionBroadcastMessages->setObjectName("actionBroadcastMessages");
        actionBroadcastMessages->setCheckable(true);
        actionEnableVideoTransmission = new QAction(MainWindow);
        actionEnableVideoTransmission->setObjectName("actionEnableVideoTransmission");
        actionEnableVideoTransmission->setCheckable(true);
        actionEnableVideoTransmission->setIcon(icon6);
        actionStreamAudioFileToChannel = new QAction(MainWindow);
        actionStreamAudioFileToChannel->setObjectName("actionStreamAudioFileToChannel");
        actionStreamAudioFileToChannel->setCheckable(true);
        actionStreamAudioFileToUser = new QAction(MainWindow);
        actionStreamAudioFileToUser->setObjectName("actionStreamAudioFileToUser");
        actionMediaStorage = new QAction(MainWindow);
        actionMediaStorage->setObjectName("actionMediaStorage");
        actionMediaStorage->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/record.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMediaStorage->setIcon(icon7);
        actionInterceptUserMessages = new QAction(MainWindow);
        actionInterceptUserMessages->setObjectName("actionInterceptUserMessages");
        actionInterceptUserMessages->setCheckable(true);
        actionInterceptUserMessages->setIcon(icon5);
        actionInterceptChannelMessages = new QAction(MainWindow);
        actionInterceptChannelMessages->setObjectName("actionInterceptChannelMessages");
        actionInterceptChannelMessages->setCheckable(true);
        actionInterceptVoice = new QAction(MainWindow);
        actionInterceptVoice->setObjectName("actionInterceptVoice");
        actionInterceptVoice->setCheckable(true);
        actionInterceptVoice->setIcon(icon2);
        actionInterceptVideo = new QAction(MainWindow);
        actionInterceptVideo->setObjectName("actionInterceptVideo");
        actionInterceptVideo->setCheckable(true);
        actionInterceptVideo->setIcon(icon6);
        actionBroadcastMessage = new QAction(MainWindow);
        actionBroadcastMessage->setObjectName("actionBroadcastMessage");
#if QT_CONFIG(shortcut)
        actionBroadcastMessage->setShortcut(QString::fromUtf8("Ctrl+Shift+E"));
#endif // QT_CONFIG(shortcut)
        actionIncreaseVoiceVolume = new QAction(MainWindow);
        actionIncreaseVoiceVolume->setObjectName("actionIncreaseVoiceVolume");
#if QT_CONFIG(shortcut)
        actionIncreaseVoiceVolume->setShortcut(QString::fromUtf8("Ctrl+Y"));
#endif // QT_CONFIG(shortcut)
        actionLowerVoiceVolume = new QAction(MainWindow);
        actionLowerVoiceVolume->setObjectName("actionLowerVoiceVolume");
#if QT_CONFIG(shortcut)
        actionLowerVoiceVolume->setShortcut(QString::fromUtf8("Ctrl+H"));
#endif // QT_CONFIG(shortcut)
        actionStoreForMove = new QAction(MainWindow);
        actionStoreForMove->setObjectName("actionStoreForMove");
        actionMoveUser = new QAction(MainWindow);
        actionMoveUser->setObjectName("actionMoveUser");
        actionMoveUsersDialog = new QAction(MainWindow);
        actionMoveUsersDialog->setObjectName("actionMoveUsersDialog");
        actionVisitBearWare = new QAction(MainWindow);
        actionVisitBearWare->setObjectName("actionVisitBearWare");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/teamtalk.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVisitBearWare->setIcon(icon8);
        actionAllowVoiceTransmission = new QAction(MainWindow);
        actionAllowVoiceTransmission->setObjectName("actionAllowVoiceTransmission");
        actionAllowVoiceTransmission->setCheckable(true);
        actionAllowVideoTransmission = new QAction(MainWindow);
        actionAllowVideoTransmission->setObjectName("actionAllowVideoTransmission");
        actionAllowVideoTransmission->setCheckable(true);
        actionAllowAllVoiceTransmission = new QAction(MainWindow);
        actionAllowAllVoiceTransmission->setObjectName("actionAllowAllVoiceTransmission");
        actionAllowAllVoiceTransmission->setCheckable(true);
        actionAllowAllVideoTransmission = new QAction(MainWindow);
        actionAllowAllVideoTransmission->setObjectName("actionAllowAllVideoTransmission");
        actionAllowAllVideoTransmission->setCheckable(true);
        actionServerStatistics = new QAction(MainWindow);
        actionServerStatistics->setObjectName("actionServerStatistics");
        actionNewClient = new QAction(MainWindow);
        actionNewClient->setObjectName("actionNewClient");
        actionOnlineUsers = new QAction(MainWindow);
        actionOnlineUsers->setObjectName("actionOnlineUsers");
        actionOnlineUsers->setCheckable(false);
        actionEnableDesktopSharing = new QAction(MainWindow);
        actionEnableDesktopSharing->setObjectName("actionEnableDesktopSharing");
        actionEnableDesktopSharing->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/desktoptx.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEnableDesktopSharing->setIcon(icon9);
        actionEnableTTS = new QAction(MainWindow);
        actionEnableTTS->setObjectName("actionEnableTTS");
        actionEnableTTS->setCheckable(true);
        actionEnableSounds = new QAction(MainWindow);
        actionEnableSounds->setObjectName("actionEnableSounds");
        actionEnableSounds->setCheckable(true);
        actionAllowDesktopTransmission = new QAction(MainWindow);
        actionAllowDesktopTransmission->setObjectName("actionAllowDesktopTransmission");
        actionAllowDesktopTransmission->setCheckable(true);
        actionAllowAllDesktopTransmission = new QAction(MainWindow);
        actionAllowAllDesktopTransmission->setObjectName("actionAllowAllDesktopTransmission");
        actionAllowAllDesktopTransmission->setCheckable(true);
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName("actionDesktop");
        actionDesktop->setCheckable(true);
        actionDesktop->setIcon(icon9);
        actionInterceptDesktop = new QAction(MainWindow);
        actionInterceptDesktop->setObjectName("actionInterceptDesktop");
        actionInterceptDesktop->setCheckable(true);
        actionInterceptDesktop->setIcon(icon9);
        actionStreamMediaFileToChannel = new QAction(MainWindow);
        actionStreamMediaFileToChannel->setObjectName("actionStreamMediaFileToChannel");
        actionStreamMediaFileToChannel->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/streammedia.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStreamMediaFileToChannel->setIcon(icon10);
        actionPauseResumeStream = new QAction(MainWindow);
        actionPauseResumeStream->setObjectName("actionPauseResumeStream");
        actionPauseResumeStream->setEnabled(false);
        actionPauseResumeStream->setIcon(icon10);
        actionGenerateTTURL = new QAction(MainWindow);
        actionGenerateTTURL->setObjectName("actionGenerateTTURL");
        actionGenerateTTURL->setCheckable(false);
        actionDesktopInput = new QAction(MainWindow);
        actionDesktopInput->setObjectName("actionDesktopInput");
        actionDesktopInput->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/chalkstick.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDesktopInput->setIcon(icon11);
        actionDesktopAccessAllow = new QAction(MainWindow);
        actionDesktopAccessAllow->setObjectName("actionDesktopAccessAllow");
        actionDesktopAccessAllow->setCheckable(true);
        actionDesktopAccessAllow->setIcon(icon11);
        actionDesktopAccessDeny = new QAction(MainWindow);
        actionDesktopAccessDeny->setObjectName("actionDesktopAccessDeny");
        actionDesktopAccessDeny->setCheckable(false);
        actionMediaFile = new QAction(MainWindow);
        actionMediaFile->setObjectName("actionMediaFile");
        actionMediaFile->setCheckable(true);
        actionMediaFile->setIcon(icon10);
        actionInterceptMediaFile = new QAction(MainWindow);
        actionInterceptMediaFile->setObjectName("actionInterceptMediaFile");
        actionInterceptMediaFile->setCheckable(true);
        actionInterceptMediaFile->setIcon(icon10);
        actionAllowMediaFileTransmission = new QAction(MainWindow);
        actionAllowMediaFileTransmission->setObjectName("actionAllowMediaFileTransmission");
        actionAllowMediaFileTransmission->setCheckable(true);
        actionAllowAllMediaFileTransmission = new QAction(MainWindow);
        actionAllowAllMediaFileTransmission->setObjectName("actionAllowAllMediaFileTransmission");
        actionAllowAllMediaFileTransmission->setCheckable(true);
        actionMuteVoice = new QAction(MainWindow);
        actionMuteVoice->setObjectName("actionMuteVoice");
        actionMuteVoice->setCheckable(true);
        actionMuteMediaFile = new QAction(MainWindow);
        actionMuteMediaFile->setObjectName("actionMuteMediaFile");
        actionMuteMediaFile->setCheckable(true);
        actionKickFromChannel = new QAction(MainWindow);
        actionKickFromChannel->setObjectName("actionKickFromChannel");
        actionKickFromServer = new QAction(MainWindow);
        actionKickFromServer->setObjectName("actionKickFromServer");
        actionIncreaseMediaFileVolume = new QAction(MainWindow);
        actionIncreaseMediaFileVolume->setObjectName("actionIncreaseMediaFileVolume");
#if QT_CONFIG(shortcut)
        actionIncreaseMediaFileVolume->setShortcut(QString::fromUtf8("Ctrl+Shift+Y"));
#endif // QT_CONFIG(shortcut)
        actionLowerMediaFileVolume = new QAction(MainWindow);
        actionLowerMediaFileVolume->setObjectName("actionLowerMediaFileVolume");
#if QT_CONFIG(shortcut)
        actionLowerMediaFileVolume->setShortcut(QString::fromUtf8("Ctrl+Shift+H"));
#endif // QT_CONFIG(shortcut)
        actionResetPreferencesToDefault = new QAction(MainWindow);
        actionResetPreferencesToDefault->setObjectName("actionResetPreferencesToDefault");
        actionKickAndBanFromChannel = new QAction(MainWindow);
        actionKickAndBanFromChannel->setObjectName("actionKickAndBanFromChannel");
        actionBannedUsersInChannel = new QAction(MainWindow);
        actionBannedUsersInChannel->setObjectName("actionBannedUsersInChannel");
        actionAllowChannelTextMessages = new QAction(MainWindow);
        actionAllowChannelTextMessages->setObjectName("actionAllowChannelTextMessages");
        actionAllowChannelTextMessages->setCheckable(true);
        actionAllowAllChannelTextMessages = new QAction(MainWindow);
        actionAllowAllChannelTextMessages->setObjectName("actionAllowAllChannelTextMessages");
        actionAllowAllChannelTextMessages->setCheckable(true);
        actionHearMyself = new QAction(MainWindow);
        actionHearMyself->setObjectName("actionHearMyself");
        actionHearMyself->setCheckable(true);
        actionToggleQuestionMode = new QAction(MainWindow);
        actionToggleQuestionMode->setObjectName("actionToggleQuestionMode");
        actionToggleQuestionMode->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/hand.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionToggleQuestionMode->setIcon(icon12);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action->setText(QString::fromUtf8("-"));
        actionRelayVoiceStream = new QAction(MainWindow);
        actionRelayVoiceStream->setObjectName("actionRelayVoiceStream");
        actionRelayVoiceStream->setCheckable(true);
        actionRelayMediaFileStream = new QAction(MainWindow);
        actionRelayMediaFileStream->setObjectName("actionRelayMediaFileStream");
        actionRelayMediaFileStream->setCheckable(true);
        actionRefreshSoundDevices = new QAction(MainWindow);
        actionRefreshSoundDevices->setObjectName("actionRefreshSoundDevices");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(3, 3, 3, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        channelsWidget = new ChannelsTree(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(5, QString::fromUtf8("6"));
        __qtreewidgetitem->setText(4, QString::fromUtf8("5"));
        __qtreewidgetitem->setText(3, QString::fromUtf8("4"));
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        channelsWidget->setHeaderItem(__qtreewidgetitem);
        channelsWidget->setObjectName("channelsWidget");
        channelsWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        channelsWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        channelsWidget->setProperty("showDropIndicator", QVariant(false));
        channelsWidget->setAlternatingRowColors(false);
        channelsWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        channelsWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        channelsWidget->setRootIsDecorated(false);
        channelsWidget->setUniformRowHeights(true);
        channelsWidget->setAnimated(false);
        channelsWidget->setHeaderHidden(true);
        channelsWidget->setColumnCount(6);
        channelsWidget->header()->setVisible(false);
        channelsWidget->header()->setMinimumSectionSize(5);
        channelsWidget->header()->setDefaultSectionSize(50);
        channelsWidget->header()->setStretchLastSection(false);

        verticalLayout->addWidget(channelsWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/speaker.png")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        volumeSlider = new QSlider(layoutWidget);
        volumeSlider->setObjectName("volumeSlider");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy1);
        volumeSlider->setMaximum(100);
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        volumeSlider->setPageStep(5);

        gridLayout->addWidget(volumeSlider, 0, 1, 1, 1);

        vumeterLabel = new QLabel(layoutWidget);
        vumeterLabel->setObjectName("vumeterLabel");
        vumeterLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/images/vumeter.png")));
        vumeterLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(vumeterLabel, 0, 2, 1, 1);

        voiceactBar = new QProgressBar(layoutWidget);
        voiceactBar->setObjectName("voiceactBar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(voiceactBar->sizePolicy().hasHeightForWidth());
        voiceactBar->setSizePolicy(sizePolicy2);
        voiceactBar->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        voiceactBar->setMaximum(20);
        voiceactBar->setValue(0);
        voiceactBar->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(voiceactBar, 0, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/mike.png")));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        micSlider = new QSlider(layoutWidget);
        micSlider->setObjectName("micSlider");
        sizePolicy1.setHeightForWidth(micSlider->sizePolicy().hasHeightForWidth());
        micSlider->setSizePolicy(sizePolicy1);
        micSlider->setMaximum(100);
        micSlider->setOrientation(Qt::Orientation::Horizontal);
        micSlider->setPageStep(5);

        gridLayout->addWidget(micSlider, 1, 1, 1, 1);

        voiceactLabel = new QLabel(layoutWidget);
        voiceactLabel->setObjectName("voiceactLabel");
        voiceactLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/images/voiceact.png")));
        voiceactLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(voiceactLabel, 1, 2, 1, 1);

        voiceactSlider = new QSlider(layoutWidget);
        voiceactSlider->setObjectName("voiceactSlider");
        sizePolicy1.setHeightForWidth(voiceactSlider->sizePolicy().hasHeightForWidth());
        voiceactSlider->setSizePolicy(sizePolicy1);
        voiceactSlider->setMaximum(20);
        voiceactSlider->setPageStep(5);
        voiceactSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(voiceactSlider, 1, 3, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        verticalLayout->addLayout(gridLayout);

        splitter->addWidget(layoutWidget);
        tabWidget = new MyTabWidget(splitter);
        tabWidget->setObjectName("tabWidget");
        chatTab = new QWidget();
        chatTab->setObjectName("chatTab");
        verticalLayout_3 = new QVBoxLayout(chatTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        chatEdit = new ChatTextEdit(chatTab);
        chatEdit->setObjectName("chatEdit");
        chatEdit->setTabChangesFocus(true);
        chatEdit->setUndoRedoEnabled(false);
        chatEdit->setReadOnly(true);
        chatEdit->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_3->addWidget(chatEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        msgEdit = new ChatLineEdit(chatTab);
        msgEdit->setObjectName("msgEdit");
        msgEdit->setVisible(false);

        horizontalLayout_2->addWidget(msgEdit);

        sendButton = new QToolButton(chatTab);
        sendButton->setObjectName("sendButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy3);
        sendButton->setVisible(false);

        horizontalLayout_2->addWidget(sendButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget->addTab(chatTab, QString());
        filesTab = new QWidget();
        filesTab->setObjectName("filesTab");
        verticalLayout_4 = new QVBoxLayout(filesTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        channelLabel = new QLabel(filesTab);
        channelLabel->setObjectName("channelLabel");

        verticalLayout_4->addWidget(channelLabel);

        filesView = new FilesView(filesTab);
        filesView->setObjectName("filesView");
        filesView->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        filesView->setProperty("dragEnabled", QVariant(false));
        filesView->setProperty("alternatingRowColors", QVariant(true));
        filesView->setProperty("sortingEnabled", QVariant(true));
        filesView->setProperty("tabKeyNavigation", QVariant(false));
        filesView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        filesView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_4->addWidget(filesView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        downloadButton = new QToolButton(filesTab);
        downloadButton->setObjectName("downloadButton");
        downloadButton->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/download.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        downloadButton->setIcon(icon13);
        downloadButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(downloadButton);

        deleteButton = new QToolButton(filesTab);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteButton->setIcon(icon14);
        deleteButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(deleteButton);

        uploadButton = new QToolButton(filesTab);
        uploadButton->setObjectName("uploadButton");
        uploadButton->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/upload.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        uploadButton->setIcon(icon15);
        uploadButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(uploadButton);


        verticalLayout_4->addLayout(horizontalLayout);

        tabWidget->addTab(filesTab, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_11 = new QVBoxLayout(tab);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");

        horizontalLayout_11->addWidget(label_7);

        playMediaFileButton = new QToolButton(tab);
        playMediaFileButton->setObjectName("playMediaFileButton");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        playMediaFileButton->setIcon(icon16);

        horizontalLayout_11->addWidget(playMediaFileButton);

        stopMediaFileButton = new QToolButton(tab);
        stopMediaFileButton->setObjectName("stopMediaFileButton");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        stopMediaFileButton->setIcon(icon17);

        horizontalLayout_11->addWidget(stopMediaFileButton);

        openMediaFileButton = new QToolButton(tab);
        openMediaFileButton->setObjectName("openMediaFileButton");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/images/file_open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        openMediaFileButton->setIcon(icon18);

        horizontalLayout_11->addWidget(openMediaFileButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        verticalLayout_11->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        mediaFileNameLabel = new QLabel(tab);
        mediaFileNameLabel->setObjectName("mediaFileNameLabel");
        mediaFileNameLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_13->addWidget(mediaFileNameLabel);


        verticalLayout_11->addLayout(horizontalLayout_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        mediaDurationLabel = new QLabel(tab);
        mediaDurationLabel->setObjectName("mediaDurationLabel");
        mediaDurationLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_9->addWidget(mediaDurationLabel);


        verticalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        mediaAudioFmtLabel = new QLabel(tab);
        mediaAudioFmtLabel->setObjectName("mediaAudioFmtLabel");
        mediaAudioFmtLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_10->addWidget(mediaAudioFmtLabel);


        verticalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        mediaVideoFmtLabel = new QLabel(tab);
        mediaVideoFmtLabel->setObjectName("mediaVideoFmtLabel");
        mediaVideoFmtLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_8->addWidget(mediaVideoFmtLabel);


        verticalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        playbackElapsedStaticLabel = new QLabel(tab);
        playbackElapsedStaticLabel->setObjectName("playbackElapsedStaticLabel");
        playbackElapsedStaticLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_7->addWidget(playbackElapsedStaticLabel);

        playbackOffsetSlider = new QSlider(tab);
        playbackOffsetSlider->setObjectName("playbackOffsetSlider");
        playbackOffsetSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_7->addWidget(playbackOffsetSlider);

        playbackTimeLabel = new QLabel(tab);
        playbackTimeLabel->setObjectName("playbackTimeLabel");
        sizePolicy.setHeightForWidth(playbackTimeLabel->sizePolicy().hasHeightForWidth());
        playbackTimeLabel->setSizePolicy(sizePolicy);
        playbackTimeLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        playbackTimeLabel->setText(QString::fromUtf8("0:00:00.000"));

        horizontalLayout_7->addWidget(playbackTimeLabel);


        verticalLayout_11->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        mediaVolumeStaticLabel = new QLabel(tab);
        mediaVolumeStaticLabel->setObjectName("mediaVolumeStaticLabel");
        mediaVolumeStaticLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_12->addWidget(mediaVolumeStaticLabel);

        mediaVolumeSlider = new QSlider(tab);
        mediaVolumeSlider->setObjectName("mediaVolumeSlider");
        mediaVolumeSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_12->addWidget(mediaVolumeSlider);

        mediaVolumeLabel = new QLabel(tab);
        mediaVolumeLabel->setObjectName("mediaVolumeLabel");
        mediaVolumeLabel->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        horizontalLayout_12->addWidget(mediaVolumeLabel);


        verticalLayout_11->addLayout(horizontalLayout_12);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_11);

        tabWidget->addTab(tab, QString());
        videoTab = new QWidget();
        videoTab->setObjectName("videoTab");
        verticalLayout_10 = new QVBoxLayout(videoTab);
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(3, 3, 3, 3);
        videosplitter = new QSplitter(videoTab);
        videosplitter->setObjectName("videosplitter");
        videosplitter->setOrientation(Qt::Orientation::Vertical);
        videosplitter->setHandleWidth(5);
        layoutWidget_2 = new QWidget(videosplitter);
        layoutWidget_2->setObjectName("layoutWidget_2");
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        videogridWidget = new VideoGridWidget(layoutWidget_2);
        videogridWidget->setObjectName("videogridWidget");

        horizontalLayout_3->addWidget(videogridWidget);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        detachVideoButton = new QToolButton(layoutWidget_2);
        detachVideoButton->setObjectName("detachVideoButton");
        detachVideoButton->setEnabled(false);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/images/detach.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        detachVideoButton->setIcon(icon19);
        detachVideoButton->setIconSize(QSize(20, 20));

        verticalLayout_5->addWidget(detachVideoButton);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);

        addVideoButton = new QToolButton(layoutWidget_2);
        addVideoButton->setObjectName("addVideoButton");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/images/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addVideoButton->setIcon(icon20);
        addVideoButton->setIconSize(QSize(20, 20));

        verticalLayout_5->addWidget(addVideoButton);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        removeVideoButton = new QToolButton(layoutWidget_2);
        removeVideoButton->setObjectName("removeVideoButton");
        removeVideoButton->setEnabled(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/images/minus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        removeVideoButton->setIcon(icon21);
        removeVideoButton->setIconSize(QSize(20, 20));

        verticalLayout_5->addWidget(removeVideoButton);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);

        initVideoButton = new QToolButton(layoutWidget_2);
        initVideoButton->setObjectName("initVideoButton");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/images/webcam_start.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon22.addFile(QString::fromUtf8(":/images/images/webcam_stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        initVideoButton->setIcon(icon22);
        initVideoButton->setIconSize(QSize(20, 20));
        initVideoButton->setCheckable(true);

        verticalLayout_5->addWidget(initVideoButton);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalLayout_3->setStretch(0, 1);
        videosplitter->addWidget(layoutWidget_2);
        videostackedWidget = new QStackedWidget(videosplitter);
        videostackedWidget->setObjectName("videostackedWidget");
        videostackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        videochatEdit = new ChatTextEdit(page_3);
        videochatEdit->setObjectName("videochatEdit");
        videochatEdit->setMouseTracking(false);
        videochatEdit->setTabChangesFocus(true);
        videochatEdit->setUndoRedoEnabled(false);
        videochatEdit->setReadOnly(true);
        videochatEdit->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_9->addWidget(videochatEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        videomsgEdit = new ChatLineEdit(page_3);
        videomsgEdit->setObjectName("videomsgEdit");
        videomsgEdit->setVisible(false);

        horizontalLayout_6->addWidget(videomsgEdit);

        videosendButton = new QToolButton(page_3);
        videosendButton->setObjectName("videosendButton");
        videosendButton->setVisible(false);

        horizontalLayout_6->addWidget(videosendButton);


        verticalLayout_9->addLayout(horizontalLayout_6);

        verticalLayout_9->setStretch(0, 1);
        videostackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        videostackedWidget->addWidget(page_4);
        videosplitter->addWidget(videostackedWidget);

        verticalLayout_10->addWidget(videosplitter);

        tabWidget->addTab(videoTab, QString());
        desktopTab = new QWidget();
        desktopTab->setObjectName("desktopTab");
        verticalLayout_7 = new QVBoxLayout(desktopTab);
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(3, 3, 3, 3);
        desktopsplitter = new QSplitter(desktopTab);
        desktopsplitter->setObjectName("desktopsplitter");
        desktopsplitter->setOrientation(Qt::Orientation::Vertical);
        desktopsplitter->setHandleWidth(5);
        layoutWidget_1 = new QWidget(desktopsplitter);
        layoutWidget_1->setObjectName("layoutWidget_1");
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_1);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        desktopgridWidget = new DesktopGridWidget(layoutWidget_1);
        desktopgridWidget->setObjectName("desktopgridWidget");

        horizontalLayout_4->addWidget(desktopgridWidget);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        detachDesktopButton = new QToolButton(layoutWidget_1);
        detachDesktopButton->setObjectName("detachDesktopButton");
        detachDesktopButton->setEnabled(false);
        detachDesktopButton->setText(QString::fromUtf8("..."));
        detachDesktopButton->setIcon(icon19);
        detachDesktopButton->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(detachDesktopButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        addDesktopButton = new QToolButton(layoutWidget_1);
        addDesktopButton->setObjectName("addDesktopButton");
        addDesktopButton->setIcon(icon20);
        addDesktopButton->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(addDesktopButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        removeDesktopButton = new QToolButton(layoutWidget_1);
        removeDesktopButton->setObjectName("removeDesktopButton");
        removeDesktopButton->setText(QString::fromUtf8("..."));
        removeDesktopButton->setIcon(icon21);
        removeDesktopButton->setIconSize(QSize(20, 20));

        verticalLayout_6->addWidget(removeDesktopButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        desktopaccessButton = new QToolButton(layoutWidget_1);
        desktopaccessButton->setObjectName("desktopaccessButton");
        desktopaccessButton->setEnabled(false);
        desktopaccessButton->setText(QString::fromUtf8("..."));
        desktopaccessButton->setIcon(icon11);
        desktopaccessButton->setIconSize(QSize(20, 20));
        desktopaccessButton->setCheckable(true);

        verticalLayout_6->addWidget(desktopaccessButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalLayout_4->setStretch(0, 1);
        desktopsplitter->addWidget(layoutWidget_1);
        desktopstackedWidget = new QStackedWidget(desktopsplitter);
        desktopstackedWidget->setObjectName("desktopstackedWidget");
        desktopstackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_8 = new QVBoxLayout(page);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        desktopchatEdit = new ChatTextEdit(page);
        desktopchatEdit->setObjectName("desktopchatEdit");
        desktopchatEdit->setMouseTracking(false);
        desktopchatEdit->setTabChangesFocus(true);
        desktopchatEdit->setUndoRedoEnabled(false);
        desktopchatEdit->setReadOnly(true);
        desktopchatEdit->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_8->addWidget(desktopchatEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        desktopmsgEdit = new ChatLineEdit(page);
        desktopmsgEdit->setObjectName("desktopmsgEdit");
        desktopmsgEdit->setVisible(false);

        horizontalLayout_5->addWidget(desktopmsgEdit);

        desktopsendButton = new QToolButton(page);
        desktopsendButton->setObjectName("desktopsendButton");
        desktopsendButton->setVisible(false);

        horizontalLayout_5->addWidget(desktopsendButton);


        verticalLayout_8->addLayout(horizontalLayout_5);

        verticalLayout_8->setStretch(0, 1);
        desktopstackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        desktopstackedWidget->addWidget(page_2);
        desktopsplitter->addWidget(desktopstackedWidget);

        verticalLayout_7->addWidget(desktopsplitter);

        tabWidget->addTab(desktopTab, QString());
        splitter->addWidget(tabWidget);

        verticalLayout_2->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 637, 24));
        menuClient = new QMenu(menubar);
        menuClient->setObjectName("menuClient");
        menuSoundConfiguration = new QMenu(menuClient);
        menuSoundConfiguration->setObjectName("menuSoundConfiguration");
        menuInputDev = new QMenu(menuSoundConfiguration);
        menuInputDev->setObjectName("menuInputDev");
        menuOutputDev = new QMenu(menuSoundConfiguration);
        menuOutputDev->setObjectName("menuOutputDev");
        menuMe = new QMenu(menubar);
        menuMe->setObjectName("menuMe");
        menuNotifications = new QMenu(menuMe);
        menuNotifications->setObjectName("menuNotifications");
        menuUsers = new QMenu(menubar);
        menuUsers->setObjectName("menuUsers");
        menuSubscriptions = new QMenu(menuUsers);
        menuSubscriptions->setObjectName("menuSubscriptions");
        menu_Advanced = new QMenu(menuUsers);
        menu_Advanced->setObjectName("menu_Advanced");
        menuMute = new QMenu(menuUsers);
        menuMute->setObjectName("menuMute");
        menu_Kick = new QMenu(menuUsers);
        menu_Kick->setObjectName("menu_Kick");
        menu_Info = new QMenu(menuUsers);
        menu_Info->setObjectName("menu_Info");
        menu_Transmit_Control = new QMenu(menuUsers);
        menu_Transmit_Control->setObjectName("menu_Transmit_Control");
        menuChannels = new QMenu(menubar);
        menuChannels->setObjectName("menuChannels");
        menu_InfoChannel = new QMenu(menuChannels);
        menu_InfoChannel->setObjectName("menu_InfoChannel");
        menu_Stream = new QMenu(menuChannels);
        menu_Stream->setObjectName("menu_Stream");
        menuServer = new QMenu(menubar);
        menuServer->setObjectName("menuServer");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setWindowTitle(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(20, 20));
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        label->setBuddy(volumeSlider);
        label_2->setBuddy(micSlider);
        voiceactLabel->setBuddy(voiceactSlider);
        label_7->setBuddy(playMediaFileButton);
        playbackElapsedStaticLabel->setBuddy(playbackOffsetSlider);
        playbackTimeLabel->setBuddy(playbackOffsetSlider);
        mediaVolumeStaticLabel->setBuddy(mediaVolumeSlider);
        mediaVolumeLabel->setBuddy(mediaVolumeSlider);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuClient->menuAction());
        menubar->addAction(menuMe->menuAction());
        menubar->addAction(menuUsers->menuAction());
        menubar->addAction(menuChannels->menuAction());
        menubar->addAction(menuServer->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuClient->addAction(actionNewClient);
        menuClient->addSeparator();
        menuClient->addAction(actionConnect);
        menuClient->addSeparator();
        menuClient->addAction(actionPreferences);
        menuClient->addAction(menuSoundConfiguration->menuAction());
        menuClient->addAction(actionMediaStorage);
        menuClient->addSeparator();
        menuClient->addAction(actionSpeakClientStats);
        menuClient->addSeparator();
        menuClient->addAction(actionExit);
        menuSoundConfiguration->addAction(actionRefreshSoundDevices);
        menuSoundConfiguration->addAction(menuInputDev->menuAction());
        menuSoundConfiguration->addAction(menuOutputDev->menuAction());
        menuSoundConfiguration->addSeparator();
        menuSoundConfiguration->addAction(actionEnableEchoCancel);
        menuSoundConfiguration->addAction(actionEnableAGC);
        menuSoundConfiguration->addAction(actionEnableDenoising);
        menuMe->addAction(actionChangeNickname);
        menuMe->addAction(actionChangeStatus);
        menuMe->addAction(actionToggleQuestionMode);
        menuMe->addSeparator();
        menuMe->addAction(actionHearMyself);
        menuMe->addSeparator();
        menuMe->addAction(actionEnablePushToTalk);
        menuMe->addAction(actionEnableVoiceActivation);
        menuMe->addAction(actionEnableVideoTransmission);
        menuMe->addAction(actionEnableDesktopSharing);
        menuMe->addSeparator();
        menuMe->addAction(menuNotifications->menuAction());
        menuNotifications->addAction(actionEnableTTS);
        menuNotifications->addAction(actionEnableSounds);
        menuUsers->addAction(menu_Info->menuAction());
        menuUsers->addAction(actionMessages);
        menuUsers->addAction(actionDesktopAccessAllow);
        menuUsers->addAction(actionOp);
        menuUsers->addAction(actionVolume);
        menuUsers->addAction(menuMute->menuAction());
        menuUsers->addAction(menu_Kick->menuAction());
        menuUsers->addAction(menuSubscriptions->menuAction());
        menuUsers->addAction(menu_Transmit_Control->menuAction());
        menuUsers->addAction(menu_Advanced->menuAction());
        menuUsers->addSeparator();
        menuUsers->addAction(actionMuteAll);
        menuSubscriptions->addAction(actionUserMessages);
        menuSubscriptions->addAction(actionChannelMessages);
        menuSubscriptions->addAction(actionBroadcastMessages);
        menuSubscriptions->addAction(actionVoice);
        menuSubscriptions->addAction(actionVideo);
        menuSubscriptions->addAction(actionDesktop);
        menuSubscriptions->addAction(actionDesktopInput);
        menuSubscriptions->addAction(actionMediaFile);
        menuSubscriptions->addSeparator();
        menuSubscriptions->addAction(actionInterceptUserMessages);
        menuSubscriptions->addAction(actionInterceptChannelMessages);
        menuSubscriptions->addAction(actionInterceptVoice);
        menuSubscriptions->addAction(actionInterceptVideo);
        menuSubscriptions->addAction(actionInterceptDesktop);
        menuSubscriptions->addAction(actionInterceptMediaFile);
        menu_Advanced->addAction(actionIncreaseVoiceVolume);
        menu_Advanced->addAction(actionLowerVoiceVolume);
        menu_Advanced->addAction(actionIncreaseMediaFileVolume);
        menu_Advanced->addAction(actionLowerMediaFileVolume);
        menu_Advanced->addSeparator();
        menu_Advanced->addAction(actionStoreForMove);
        menu_Advanced->addAction(actionMoveUser);
        menu_Advanced->addAction(actionMoveUsersDialog);
        menu_Advanced->addSeparator();
        menu_Advanced->addSeparator();
        menu_Advanced->addAction(actionRelayVoiceStream);
        menu_Advanced->addAction(actionRelayMediaFileStream);
        menuMute->addAction(actionMuteVoice);
        menuMute->addAction(actionMuteMediaFile);
        menu_Kick->addAction(actionKickFromChannel);
        menu_Kick->addAction(actionKickAndBanFromChannel);
        menu_Kick->addSeparator();
        menu_Kick->addAction(actionKickFromServer);
        menu_Kick->addAction(actionKickBan);
        menu_Info->addAction(actionViewUserInformation);
        menu_Info->addAction(actionSpeakUserInformation);
        menu_Transmit_Control->addAction(actionAllowChannelTextMessages);
        menu_Transmit_Control->addAction(actionAllowVoiceTransmission);
        menu_Transmit_Control->addAction(actionAllowVideoTransmission);
        menu_Transmit_Control->addAction(actionAllowDesktopTransmission);
        menu_Transmit_Control->addAction(actionAllowMediaFileTransmission);
        menu_Transmit_Control->addSeparator();
        menu_Transmit_Control->addAction(actionAllowAllChannelTextMessages);
        menu_Transmit_Control->addAction(actionAllowAllVoiceTransmission);
        menu_Transmit_Control->addAction(actionAllowAllVideoTransmission);
        menu_Transmit_Control->addAction(actionAllowAllDesktopTransmission);
        menu_Transmit_Control->addAction(actionAllowAllMediaFileTransmission);
        menuChannels->addAction(actionJoinChannel);
        menuChannels->addAction(actionLeaveChannel);
        menuChannels->addAction(menu_InfoChannel->menuAction());
        menuChannels->addAction(actionGenerateTTURL);
        menuChannels->addSeparator();
        menuChannels->addAction(actionCreateChannel);
        menuChannels->addAction(actionUpdateChannel);
        menuChannels->addAction(actionDeleteChannel);
        menuChannels->addSeparator();
        menuChannels->addAction(actionBannedUsersInChannel);
        menuChannels->addSeparator();
        menuChannels->addAction(menu_Stream->menuAction());
        menuChannels->addSeparator();
        menuChannels->addAction(actionUploadFile);
        menuChannels->addAction(actionDownloadFile);
        menuChannels->addAction(actionDeleteFile);
        menu_InfoChannel->addAction(actionViewChannelInfo);
        menu_InfoChannel->addAction(actionSpeakChannelInfo);
        menu_InfoChannel->addAction(actionSpeakChannelStat);
        menu_Stream->addAction(actionStreamMediaFileToChannel);
        menu_Stream->addAction(actionPauseResumeStream);
        menuServer->addAction(actionUserAccounts);
        menuServer->addAction(actionBannedUsers);
        menuServer->addAction(actionOnlineUsers);
        menuServer->addSeparator();
        menuServer->addAction(actionBroadcastMessage);
        menuServer->addSeparator();
        menuServer->addAction(actionServerProperties);
        menuServer->addAction(actionSaveConfiguration);
        menuServer->addSeparator();
        menuServer->addAction(actionServerStatistics);
        menuHelp->addAction(actionManual);
        menuHelp->addAction(actionResetPreferencesToDefault);
        menuHelp->addAction(actionVisitBearWare);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheckUpdate);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionConnect);
        toolBar->addSeparator();
        toolBar->addAction(actionEnablePushToTalk);
        toolBar->addAction(actionEnableVoiceActivation);
        toolBar->addAction(actionEnableVideoTransmission);
        toolBar->addAction(actionEnableDesktopSharing);
        toolBar->addAction(actionStreamMediaFileToChannel);
        toolBar->addSeparator();
        toolBar->addAction(actionMuteAll);
        toolBar->addAction(actionMediaStorage);
        toolBar->addSeparator();
        toolBar->addAction(actionToggleQuestionMode);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        videostackedWidget->setCurrentIndex(0);
        desktopstackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionServerList->setText(QCoreApplication::translate("MainWindow", "&Server List", nullptr));
#if QT_CONFIG(shortcut)
        actionServerList->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConnect->setText(QCoreApplication::translate("MainWindow", "&Connect", nullptr));
#if QT_CONFIG(shortcut)
        actionConnect->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableEchoCancel->setText(QCoreApplication::translate("MainWindow", "&Enable Echo Cancellation", nullptr));
        actionEnableAGC->setText(QCoreApplication::translate("MainWindow", "Enable &Automatic Gain Control", nullptr));
        actionEnableDenoising->setText(QCoreApplication::translate("MainWindow", "Enable &Denoising", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences", nullptr));
#if QT_CONFIG(shortcut)
        actionPreferences->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
        actionSpeakClientStats->setText(QCoreApplication::translate("MainWindow", "&Speak Client Statistics", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeakClientStats->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnablePushToTalk->setText(QCoreApplication::translate("MainWindow", "Enable &Push To Talk", nullptr));
#if QT_CONFIG(shortcut)
        actionEnablePushToTalk->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheckUpdate->setText(QCoreApplication::translate("MainWindow", "&Check for Update", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionManual->setText(QCoreApplication::translate("MainWindow", "&Manual", nullptr));
#if QT_CONFIG(shortcut)
        actionManual->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionServerProperties->setText(QCoreApplication::translate("MainWindow", "Server &Properties", nullptr));
#if QT_CONFIG(shortcut)
        actionServerProperties->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreateChannel->setText(QCoreApplication::translate("MainWindow", "&Create Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionCreateChannel->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUpdateChannel->setText(QCoreApplication::translate("MainWindow", "&Update Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionUpdateChannel->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeleteChannel->setText(QCoreApplication::translate("MainWindow", "&Delete Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionDeleteChannel->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJoinChannel->setText(QCoreApplication::translate("MainWindow", "&Join Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionJoinChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLeaveChannel->setText(QCoreApplication::translate("MainWindow", "&Leave Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionLeaveChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableVoiceActivation->setText(QCoreApplication::translate("MainWindow", "Enable Voice &Activation", nullptr));
#if QT_CONFIG(shortcut)
        actionEnableVoiceActivation->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChangeNickname->setText(QCoreApplication::translate("MainWindow", "Change &Nickname", nullptr));
#if QT_CONFIG(shortcut)
        actionChangeNickname->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChangeStatus->setText(QCoreApplication::translate("MainWindow", "Change &Status", nullptr));
#if QT_CONFIG(shortcut)
        actionChangeStatus->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewUserInformation->setText(QCoreApplication::translate("MainWindow", "&View User Information", nullptr));
#if QT_CONFIG(shortcut)
        actionViewUserInformation->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeakUserInformation->setText(QCoreApplication::translate("MainWindow", "&Speak User Information", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeakUserInformation->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMuteAll->setText(QCoreApplication::translate("MainWindow", "Mute &All", nullptr));
#if QT_CONFIG(shortcut)
        actionMuteAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUploadFile->setText(QCoreApplication::translate("MainWindow", "Up&load File", nullptr));
#if QT_CONFIG(shortcut)
        actionUploadFile->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDownloadFile->setText(QCoreApplication::translate("MainWindow", "D&ownload File", nullptr));
#if QT_CONFIG(shortcut)
        actionDownloadFile->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeleteFile->setText(QCoreApplication::translate("MainWindow", "Dele&te File", nullptr));
#if QT_CONFIG(shortcut)
        actionDeleteFile->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBannedUsers->setText(QCoreApplication::translate("MainWindow", "&Banned Users", nullptr));
#if QT_CONFIG(shortcut)
        actionBannedUsers->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUserAccounts->setText(QCoreApplication::translate("MainWindow", "&User Accounts", nullptr));
#if QT_CONFIG(shortcut)
        actionUserAccounts->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveConfiguration->setText(QCoreApplication::translate("MainWindow", "&Save Configuration", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveConfiguration->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewChannelInfo->setText(QCoreApplication::translate("MainWindow", "&View Channel Info", nullptr));
#if QT_CONFIG(shortcut)
        actionViewChannelInfo->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeakChannelInfo->setText(QCoreApplication::translate("MainWindow", "&Speak Channel Info", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeakChannelInfo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeakChannelStat->setText(QCoreApplication::translate("MainWindow", "S&peak Channel State", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeakChannelStat->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMessages->setText(QCoreApplication::translate("MainWindow", "M&essages", nullptr));
#if QT_CONFIG(shortcut)
        actionMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKickBan->setText(QCoreApplication::translate("MainWindow", "Kick and &Ban From Server", nullptr));
        actionOp->setText(QCoreApplication::translate("MainWindow", "&Op", nullptr));
#if QT_CONFIG(shortcut)
        actionOp->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVolume->setText(QCoreApplication::translate("MainWindow", "&Volume", nullptr));
#if QT_CONFIG(shortcut)
        actionVolume->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVoice->setText(QCoreApplication::translate("MainWindow", "V&oice", nullptr));
#if QT_CONFIG(shortcut)
        actionVoice->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUserMessages->setText(QCoreApplication::translate("MainWindow", "&User Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionUserMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChannelMessages->setText(QCoreApplication::translate("MainWindow", "&Channel Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionChannelMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVideo->setText(QCoreApplication::translate("MainWindow", "&Video", nullptr));
#if QT_CONFIG(shortcut)
        actionVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBroadcastMessages->setText(QCoreApplication::translate("MainWindow", "&Broadcast Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionBroadcastMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableVideoTransmission->setText(QCoreApplication::translate("MainWindow", "Enable &Video Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionEnableVideoTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStreamAudioFileToChannel->setText(QCoreApplication::translate("MainWindow", "&Stream Audio File to Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionStreamAudioFileToChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStreamAudioFileToUser->setText(QCoreApplication::translate("MainWindow", "Stream Audio &File to User", nullptr));
#if QT_CONFIG(shortcut)
        actionStreamAudioFileToUser->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMediaStorage->setText(QCoreApplication::translate("MainWindow", "Record Conversations to &Disk", nullptr));
#if QT_CONFIG(tooltip)
        actionMediaStorage->setToolTip(QCoreApplication::translate("MainWindow", "Specify a folder where audio from users will be stored", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMediaStorage->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptUserMessages->setText(QCoreApplication::translate("MainWindow", "Intercept User Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptUserMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptChannelMessages->setText(QCoreApplication::translate("MainWindow", "Intercept Channel Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptChannelMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptVoice->setText(QCoreApplication::translate("MainWindow", "Intercept Voice", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptVoice->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptVideo->setText(QCoreApplication::translate("MainWindow", "Intercept Video", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBroadcastMessage->setText(QCoreApplication::translate("MainWindow", "&Broadcast Message", nullptr));
        actionIncreaseVoiceVolume->setText(QCoreApplication::translate("MainWindow", "&Increase Voice Volume", nullptr));
        actionLowerVoiceVolume->setText(QCoreApplication::translate("MainWindow", "&Lower Voice Volume", nullptr));
        actionStoreForMove->setText(QCoreApplication::translate("MainWindow", "&Store User(s) for Move", nullptr));
#if QT_CONFIG(shortcut)
        actionStoreForMove->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUser->setText(QCoreApplication::translate("MainWindow", "&Move User(s)", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUser->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUsersDialog->setText(QCoreApplication::translate("MainWindow", "Move Users &Dialog", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUsersDialog->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVisitBearWare->setText(QCoreApplication::translate("MainWindow", "&BearWare.dk Website", nullptr));
        actionAllowVoiceTransmission->setText(QCoreApplication::translate("MainWindow", "Allow V&oice Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowVoiceTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowVideoTransmission->setText(QCoreApplication::translate("MainWindow", "Allow Video Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowVideoTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowAllVoiceTransmission->setText(QCoreApplication::translate("MainWindow", "Allow All V&oice Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowAllVoiceTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowAllVideoTransmission->setText(QCoreApplication::translate("MainWindow", "Allow All Video Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowAllVideoTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionServerStatistics->setText(QCoreApplication::translate("MainWindow", "Server S&tatistics", nullptr));
#if QT_CONFIG(shortcut)
        actionServerStatistics->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewClient->setText(QCoreApplication::translate("MainWindow", "&New Client Instance", nullptr));
#if QT_CONFIG(shortcut)
        actionNewClient->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOnlineUsers->setText(QCoreApplication::translate("MainWindow", "&Online Users", nullptr));
#if QT_CONFIG(shortcut)
        actionOnlineUsers->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableDesktopSharing->setText(QCoreApplication::translate("MainWindow", "Enable Desktop Sharing", nullptr));
#if QT_CONFIG(shortcut)
        actionEnableDesktopSharing->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableTTS->setText(QCoreApplication::translate("MainWindow", "Enable Text-To-Speech Events", nullptr));
#if QT_CONFIG(shortcut)
        actionEnableTTS->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableSounds->setText(QCoreApplication::translate("MainWindow", "Enable Sound Events", nullptr));
#if QT_CONFIG(shortcut)
        actionEnableSounds->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowDesktopTransmission->setText(QCoreApplication::translate("MainWindow", "Allow Desktop Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowDesktopTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowAllDesktopTransmission->setText(QCoreApplication::translate("MainWindow", "Allow All Desktop Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowAllDesktopTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDesktop->setText(QCoreApplication::translate("MainWindow", "&Desktop", nullptr));
#if QT_CONFIG(shortcut)
        actionDesktop->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptDesktop->setText(QCoreApplication::translate("MainWindow", "Intercept Desktop", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptDesktop->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStreamMediaFileToChannel->setText(QCoreApplication::translate("MainWindow", "Stream &Media File to Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionStreamMediaFileToChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPauseResumeStream->setText(QCoreApplication::translate("MainWindow", "Pause/Resume Stream", nullptr));
#if QT_CONFIG(shortcut)
        actionPauseResumeStream->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerateTTURL->setText(QCoreApplication::translate("MainWindow", "&Generate tt:// URL to Clipboard", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerateTTURL->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDesktopInput->setText(QCoreApplication::translate("MainWindow", "Desktop Acce&ss", nullptr));
        actionDesktopAccessAllow->setText(QCoreApplication::translate("MainWindow", "Allow Desktop Access", nullptr));
#if QT_CONFIG(shortcut)
        actionDesktopAccessAllow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDesktopAccessDeny->setText(QCoreApplication::translate("MainWindow", "&Deny", nullptr));
        actionMediaFile->setText(QCoreApplication::translate("MainWindow", "Media File Stream", nullptr));
#if QT_CONFIG(shortcut)
        actionMediaFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterceptMediaFile->setText(QCoreApplication::translate("MainWindow", "Intercept Media File Stream", nullptr));
#if QT_CONFIG(shortcut)
        actionInterceptMediaFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowMediaFileTransmission->setText(QCoreApplication::translate("MainWindow", "Allow Media File Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowMediaFileTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowAllMediaFileTransmission->setText(QCoreApplication::translate("MainWindow", "Allow All Media File Transmission", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowAllMediaFileTransmission->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMuteVoice->setText(QCoreApplication::translate("MainWindow", "Mu&te Voice", nullptr));
#if QT_CONFIG(shortcut)
        actionMuteVoice->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMuteMediaFile->setText(QCoreApplication::translate("MainWindow", "Mute Media File", nullptr));
#if QT_CONFIG(shortcut)
        actionMuteMediaFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKickFromChannel->setText(QCoreApplication::translate("MainWindow", "Kick From Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionKickFromChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKickFromServer->setText(QCoreApplication::translate("MainWindow", "Kick From Server", nullptr));
#if QT_CONFIG(shortcut)
        actionKickFromServer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIncreaseMediaFileVolume->setText(QCoreApplication::translate("MainWindow", "Increase Media File Volume", nullptr));
        actionLowerMediaFileVolume->setText(QCoreApplication::translate("MainWindow", "Lower Media File Volume", nullptr));
        actionResetPreferencesToDefault->setText(QCoreApplication::translate("MainWindow", "R&eset Preferences to Default", nullptr));
        actionKickAndBanFromChannel->setText(QCoreApplication::translate("MainWindow", "Kick and Ban From &Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionKickAndBanFromChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBannedUsersInChannel->setText(QCoreApplication::translate("MainWindow", "Banned Users From Channel", nullptr));
#if QT_CONFIG(shortcut)
        actionBannedUsersInChannel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowChannelTextMessages->setText(QCoreApplication::translate("MainWindow", "Allow Channel Text Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowChannelTextMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAllowAllChannelTextMessages->setText(QCoreApplication::translate("MainWindow", "Allow All Channel Text Messages", nullptr));
#if QT_CONFIG(shortcut)
        actionAllowAllChannelTextMessages->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHearMyself->setText(QCoreApplication::translate("MainWindow", "&Hear Myself", nullptr));
#if QT_CONFIG(shortcut)
        actionHearMyself->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleQuestionMode->setText(QCoreApplication::translate("MainWindow", "Toggle &Question Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleQuestionMode->setToolTip(QCoreApplication::translate("MainWindow", "Show blinking icon", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleQuestionMode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRelayVoiceStream->setText(QCoreApplication::translate("MainWindow", "&Relay Voice Stream", nullptr));
        actionRelayMediaFileStream->setText(QCoreApplication::translate("MainWindow", "Relay Media &File Stream", nullptr));
        actionRefreshSoundDevices->setText(QCoreApplication::translate("MainWindow", "&Refresh Sound Devices", nullptr));
#if QT_CONFIG(accessibility)
        channelsWidget->setAccessibleName(QCoreApplication::translate("MainWindow", "Channel list", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("MainWindow", "Master volume", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
#if QT_CONFIG(tooltip)
        volumeSlider->setToolTip(QCoreApplication::translate("MainWindow", "Master volume", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        volumeSlider->setAccessibleName(QCoreApplication::translate("MainWindow", "Master volume", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        vumeterLabel->setToolTip(QCoreApplication::translate("MainWindow", "Voice level", nullptr));
#endif // QT_CONFIG(tooltip)
        vumeterLabel->setText(QString());
#if QT_CONFIG(tooltip)
        voiceactBar->setToolTip(QCoreApplication::translate("MainWindow", "Voice level", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        voiceactBar->setAccessibleName(QCoreApplication::translate("MainWindow", "Voice level", nullptr));
#endif // QT_CONFIG(accessibility)
        voiceactBar->setFormat(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("MainWindow", "Microphone gain", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QString());
#if QT_CONFIG(tooltip)
        micSlider->setToolTip(QCoreApplication::translate("MainWindow", "Microphone gain", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        micSlider->setAccessibleName(QCoreApplication::translate("MainWindow", "Microphone gain", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        voiceactLabel->setToolTip(QCoreApplication::translate("MainWindow", "Voice activation level", nullptr));
#endif // QT_CONFIG(tooltip)
        voiceactLabel->setText(QString());
#if QT_CONFIG(tooltip)
        voiceactSlider->setToolTip(QCoreApplication::translate("MainWindow", "Voice activation level", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        voiceactSlider->setAccessibleName(QCoreApplication::translate("MainWindow", "Voice activation level", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        chatTab->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        chatTab->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        chatTab->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        msgEdit->setAccessibleName(QCoreApplication::translate("MainWindow", "Message", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        sendButton->setToolTip(QCoreApplication::translate("MainWindow", "Send text message", nullptr));
#endif // QT_CONFIG(tooltip)
        sendButton->setText(QCoreApplication::translate("MainWindow", "Sen&d", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(chatTab), QCoreApplication::translate("MainWindow", "Ch&at", nullptr));
        channelLabel->setText(QString());
#if QT_CONFIG(accessibility)
        filesView->setAccessibleName(QCoreApplication::translate("MainWindow", "Files list", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        downloadButton->setToolTip(QCoreApplication::translate("MainWindow", "Download", nullptr));
#endif // QT_CONFIG(tooltip)
        downloadButton->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        uploadButton->setToolTip(QCoreApplication::translate("MainWindow", "Upload", nullptr));
#endif // QT_CONFIG(tooltip)
        uploadButton->setText(QCoreApplication::translate("MainWindow", "Upload", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(filesTab), QCoreApplication::translate("MainWindow", "&Files", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Playback", nullptr));
        playMediaFileButton->setText(QCoreApplication::translate("MainWindow", "Play/Pause", nullptr));
        stopMediaFileButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        openMediaFileButton->setToolTip(QCoreApplication::translate("MainWindow", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        openMediaFileButton->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        mediaFileNameLabel->setText(QCoreApplication::translate("MainWindow", "Filename:", nullptr));
        mediaDurationLabel->setText(QCoreApplication::translate("MainWindow", "Duration:", nullptr));
        mediaAudioFmtLabel->setText(QCoreApplication::translate("MainWindow", "Audio format:", nullptr));
        mediaVideoFmtLabel->setText(QCoreApplication::translate("MainWindow", "Video format:", nullptr));
        playbackElapsedStaticLabel->setText(QCoreApplication::translate("MainWindow", "Elapsed", nullptr));
#if QT_CONFIG(accessibility)
        playbackOffsetSlider->setAccessibleName(QCoreApplication::translate("MainWindow", "Elapsed time", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        playbackOffsetSlider->setAccessibleDescription(QCoreApplication::translate("MainWindow", "Start position", nullptr));
#endif // QT_CONFIG(accessibility)
        mediaVolumeStaticLabel->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
#if QT_CONFIG(accessibility)
        mediaVolumeSlider->setAccessibleName(QCoreApplication::translate("MainWindow", "Volume level", nullptr));
#endif // QT_CONFIG(accessibility)
        mediaVolumeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "M&edia", nullptr));
#if QT_CONFIG(accessibility)
        videoTab->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        videoTab->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        detachVideoButton->setToolTip(QCoreApplication::translate("MainWindow", "Detach User Video", nullptr));
#endif // QT_CONFIG(tooltip)
        detachVideoButton->setText(QCoreApplication::translate("MainWindow", "Detach User Video", nullptr));
#if QT_CONFIG(tooltip)
        addVideoButton->setToolTip(QCoreApplication::translate("MainWindow", "Add User to Video Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        addVideoButton->setText(QCoreApplication::translate("MainWindow", "Add User to Video Grid", nullptr));
#if QT_CONFIG(tooltip)
        removeVideoButton->setToolTip(QCoreApplication::translate("MainWindow", "Remove User From Video Grid", nullptr));
#endif // QT_CONFIG(tooltip)
        removeVideoButton->setText(QCoreApplication::translate("MainWindow", "Remove User From Video Grid", nullptr));
#if QT_CONFIG(tooltip)
        initVideoButton->setToolTip(QCoreApplication::translate("MainWindow", "Start/Stop Webcam", nullptr));
#endif // QT_CONFIG(tooltip)
        initVideoButton->setText(QCoreApplication::translate("MainWindow", "Start/Stop Webcam", nullptr));
#if QT_CONFIG(accessibility)
        videomsgEdit->setAccessibleName(QCoreApplication::translate("MainWindow", "Message", nullptr));
#endif // QT_CONFIG(accessibility)
        videosendButton->setText(QCoreApplication::translate("MainWindow", "Sen&d", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(videoTab), QCoreApplication::translate("MainWindow", "&Video", nullptr));
#if QT_CONFIG(tooltip)
        detachDesktopButton->setToolTip(QCoreApplication::translate("MainWindow", "Detach selected window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        detachDesktopButton->setAccessibleName(QCoreApplication::translate("MainWindow", "Detach selected window", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        addDesktopButton->setToolTip(QCoreApplication::translate("MainWindow", "Put back removed window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        addDesktopButton->setAccessibleName(QCoreApplication::translate("MainWindow", "Add window", nullptr));
#endif // QT_CONFIG(accessibility)
        addDesktopButton->setText(QString());
#if QT_CONFIG(tooltip)
        removeDesktopButton->setToolTip(QCoreApplication::translate("MainWindow", "Remove selected window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        removeDesktopButton->setAccessibleName(QCoreApplication::translate("MainWindow", "Remove selected window", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        desktopaccessButton->setToolTip(QCoreApplication::translate("MainWindow", "Request desktop access", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        desktopaccessButton->setAccessibleName(QCoreApplication::translate("MainWindow", "Request desktop access", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        desktopmsgEdit->setAccessibleName(QCoreApplication::translate("MainWindow", "Message", nullptr));
#endif // QT_CONFIG(accessibility)
        desktopsendButton->setText(QCoreApplication::translate("MainWindow", "Sen&d", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(desktopTab), QCoreApplication::translate("MainWindow", "&Desktops", nullptr));
        menuClient->setTitle(QCoreApplication::translate("MainWindow", "C&lient", nullptr));
        menuSoundConfiguration->setTitle(QCoreApplication::translate("MainWindow", "S&ound Configuration", nullptr));
        menuInputDev->setTitle(QCoreApplication::translate("MainWindow", "&Input Devices", nullptr));
        menuOutputDev->setTitle(QCoreApplication::translate("MainWindow", "&Output Devices", nullptr));
        menuMe->setTitle(QCoreApplication::translate("MainWindow", "&Me", nullptr));
        menuNotifications->setTitle(QCoreApplication::translate("MainWindow", "&Notifications", nullptr));
        menuUsers->setTitle(QCoreApplication::translate("MainWindow", "&Users", nullptr));
        menuSubscriptions->setTitle(QCoreApplication::translate("MainWindow", "&Subscriptions", nullptr));
        menu_Advanced->setTitle(QCoreApplication::translate("MainWindow", "&Advanced", nullptr));
        menuMute->setTitle(QCoreApplication::translate("MainWindow", "&Mute", nullptr));
        menu_Kick->setTitle(QCoreApplication::translate("MainWindow", "&Kick", nullptr));
        menu_Info->setTitle(QCoreApplication::translate("MainWindow", "&User Information", nullptr));
        menu_Transmit_Control->setTitle(QCoreApplication::translate("MainWindow", "&Transmit Control", nullptr));
        menuChannels->setTitle(QCoreApplication::translate("MainWindow", "&Channels", nullptr));
        menu_InfoChannel->setTitle(QCoreApplication::translate("MainWindow", "&Channel Information", nullptr));
        menu_Stream->setTitle(QCoreApplication::translate("MainWindow", "Streaming to Channel", nullptr));
        menuServer->setTitle(QCoreApplication::translate("MainWindow", "&Server", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
