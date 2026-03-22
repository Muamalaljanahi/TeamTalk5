/********************************************************************************
** Form generated from reading UI file 'streammediafile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMMEDIAFILE_H
#define UI_STREAMMEDIAFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_StreamMediaFileDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    MyComboBox *mediafileComboBox;
    QToolButton *toolButton;
    QToolButton *refreshBtn;
    QToolButton *deleteButton;
    QToolButton *clearButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *audioLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *videoLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *durationLabel;
    QCheckBox *loopChkBox;
    QGroupBox *playbackGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QComboBox *preprocessorComboBox;
    QPushButton *preprocessButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *playbackOffsetSlider;
    QSpacerItem *horizontalSpacer_4;
    QLabel *playbackTimeLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QToolButton *startToolButton;
    QToolButton *stopToolButton;
    QSpacerItem *horizontalSpacer_3;
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
    QLabel *label_43;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *StreamMediaFileDlg)
    {
        if (StreamMediaFileDlg->objectName().isEmpty())
            StreamMediaFileDlg->setObjectName("StreamMediaFileDlg");
        StreamMediaFileDlg->resize(511, 527);
        verticalLayout_2 = new QVBoxLayout(StreamMediaFileDlg);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(StreamMediaFileDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        mediafileComboBox = new MyComboBox(groupBox);
        mediafileComboBox->setObjectName("mediafileComboBox");
        mediafileComboBox->setEditable(true);

        horizontalLayout->addWidget(mediafileComboBox);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName("toolButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/file_open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton->setIcon(icon);

        horizontalLayout->addWidget(toolButton);

        refreshBtn = new QToolButton(groupBox);
        refreshBtn->setObjectName("refreshBtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/refresh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refreshBtn->setIcon(icon1);

        horizontalLayout->addWidget(refreshBtn);

        deleteButton = new QToolButton(groupBox);
        deleteButton->setObjectName("deleteButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteButton->setIcon(icon2);

        horizontalLayout->addWidget(deleteButton);

        clearButton = new QToolButton(groupBox);
        clearButton->setObjectName("clearButton");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/chalkstickbg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearButton->setIcon(icon3);

        horizontalLayout->addWidget(clearButton);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        audioLabel = new QLabel(groupBox);
        audioLabel->setObjectName("audioLabel");
        audioLabel->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        horizontalLayout_2->addWidget(audioLabel);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        videoLabel = new QLabel(groupBox);
        videoLabel->setObjectName("videoLabel");
        videoLabel->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        horizontalLayout_3->addWidget(videoLabel);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        durationLabel = new QLabel(groupBox);
        durationLabel->setObjectName("durationLabel");
        durationLabel->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        horizontalLayout_5->addWidget(durationLabel);

        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        loopChkBox = new QCheckBox(groupBox);
        loopChkBox->setObjectName("loopChkBox");

        verticalLayout->addWidget(loopChkBox);


        verticalLayout_2->addWidget(groupBox);

        playbackGroupBox = new QGroupBox(StreamMediaFileDlg);
        playbackGroupBox->setObjectName("playbackGroupBox");
        verticalLayout_3 = new QVBoxLayout(playbackGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(playbackGroupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        preprocessorComboBox = new QComboBox(playbackGroupBox);
        preprocessorComboBox->setObjectName("preprocessorComboBox");

        horizontalLayout_7->addWidget(preprocessorComboBox);

        preprocessButton = new QPushButton(playbackGroupBox);
        preprocessButton->setObjectName("preprocessButton");
        preprocessButton->setAutoDefault(false);

        horizontalLayout_7->addWidget(preprocessButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(playbackGroupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        playbackOffsetSlider = new QSlider(playbackGroupBox);
        playbackOffsetSlider->setObjectName("playbackOffsetSlider");
        playbackOffsetSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_6->addWidget(playbackOffsetSlider);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        playbackTimeLabel = new QLabel(playbackGroupBox);
        playbackTimeLabel->setObjectName("playbackTimeLabel");
        playbackTimeLabel->setText(QString::fromUtf8("0:00:00.000"));

        horizontalLayout_6->addWidget(playbackTimeLabel);

        horizontalLayout_6->setStretch(1, 10);
        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(playbackGroupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        startToolButton = new QToolButton(playbackGroupBox);
        startToolButton->setObjectName("startToolButton");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        startToolButton->setIcon(icon4);
        startToolButton->setCheckable(false);

        horizontalLayout_8->addWidget(startToolButton);

        stopToolButton = new QToolButton(playbackGroupBox);
        stopToolButton->setObjectName("stopToolButton");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/stop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        stopToolButton->setIcon(icon5);

        horizontalLayout_8->addWidget(stopToolButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(playbackGroupBox);

        vidgroupBox = new QGroupBox(StreamMediaFileDlg);
        vidgroupBox->setObjectName("vidgroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vidgroupBox->sizePolicy().hasHeightForWidth());
        vidgroupBox->setSizePolicy(sizePolicy);
        verticalLayout_14 = new QVBoxLayout(vidgroupBox);
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_33 = new QLabel(vidgroupBox);
        label_33->setObjectName("label_33");

        horizontalLayout_19->addWidget(label_33);

        vidcodecBox = new QComboBox(vidgroupBox);
        vidcodecBox->setObjectName("vidcodecBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vidcodecBox->sizePolicy().hasHeightForWidth());
        vidcodecBox->setSizePolicy(sizePolicy1);

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
        sizePolicy1.setHeightForWidth(vp8bitrateSpinBox->sizePolicy().hasHeightForWidth());
        vp8bitrateSpinBox->setSizePolicy(sizePolicy1);
        vp8bitrateSpinBox->setMinimum(0);
        vp8bitrateSpinBox->setMaximum(1000);
        vp8bitrateSpinBox->setValue(0);

        horizontalLayout_21->addWidget(vp8bitrateSpinBox);

        label_43 = new QLabel(vp8_page);
        label_43->setObjectName("label_43");
        label_43->setText(QString::fromUtf8("kbps"));

        horizontalLayout_21->addWidget(label_43);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_22);


        verticalLayout_15->addLayout(horizontalLayout_21);

        vidcodecStackedWidget->addWidget(vp8_page);

        verticalLayout_14->addWidget(vidcodecStackedWidget);


        verticalLayout_2->addWidget(vidgroupBox);

        verticalSpacer_9 = new QSpacerItem(20, 73, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        okBtn = new QPushButton(StreamMediaFileDlg);
        okBtn->setObjectName("okBtn");

        horizontalLayout_4->addWidget(okBtn);

        cancelBtn = new QPushButton(StreamMediaFileDlg);
        cancelBtn->setObjectName("cancelBtn");

        horizontalLayout_4->addWidget(cancelBtn);


        verticalLayout_2->addLayout(horizontalLayout_4);

#if QT_CONFIG(shortcut)
        label->setBuddy(mediafileComboBox);
        label_5->setBuddy(preprocessorComboBox);
        playbackTimeLabel->setBuddy(playbackOffsetSlider);
        label_33->setBuddy(vidcodecBox);
        label_42->setBuddy(vp8bitrateSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(StreamMediaFileDlg);
        QObject::connect(okBtn, &QPushButton::pressed, StreamMediaFileDlg, qOverload<>(&QDialog::accept));
        QObject::connect(cancelBtn, &QPushButton::pressed, StreamMediaFileDlg, qOverload<>(&QDialog::reject));

        vidcodecStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StreamMediaFileDlg);
    } // setupUi

    void retranslateUi(QDialog *StreamMediaFileDlg)
    {
        StreamMediaFileDlg->setWindowTitle(QCoreApplication::translate("StreamMediaFileDlg", "Stream Media File To Channel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StreamMediaFileDlg", "Media File Properties", nullptr));
        label->setText(QCoreApplication::translate("StreamMediaFileDlg", "Media file", nullptr));
#if QT_CONFIG(tooltip)
        toolButton->setToolTip(QCoreApplication::translate("StreamMediaFileDlg", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        toolButton->setAccessibleName(QCoreApplication::translate("StreamMediaFileDlg", "Browse", nullptr));
#endif // QT_CONFIG(accessibility)
        toolButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "&B", nullptr));
#if QT_CONFIG(tooltip)
        refreshBtn->setToolTip(QCoreApplication::translate("StreamMediaFileDlg", "Refresh", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        refreshBtn->setAccessibleName(QCoreApplication::translate("StreamMediaFileDlg", "Refresh", nullptr));
#endif // QT_CONFIG(accessibility)
        refreshBtn->setText(QCoreApplication::translate("StreamMediaFileDlg", "&R", nullptr));
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("StreamMediaFileDlg", "Delete from history", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        deleteButton->setAccessibleName(QCoreApplication::translate("StreamMediaFileDlg", "Delete from history", nullptr));
#endif // QT_CONFIG(accessibility)
        deleteButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "&D", nullptr));
#if QT_CONFIG(tooltip)
        clearButton->setToolTip(QCoreApplication::translate("StreamMediaFileDlg", "Clear history", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        clearButton->setAccessibleName(QCoreApplication::translate("StreamMediaFileDlg", "Clear history", nullptr));
#endif // QT_CONFIG(accessibility)
        clearButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "&L", nullptr));
        label_2->setText(QCoreApplication::translate("StreamMediaFileDlg", "Audio format:", nullptr));
        audioLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("StreamMediaFileDlg", "Video format:", nullptr));
        videoLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("StreamMediaFileDlg", "Duration:", nullptr));
        durationLabel->setText(QString());
        loopChkBox->setText(QCoreApplication::translate("StreamMediaFileDlg", "Co&ntinuously play media file", nullptr));
        playbackGroupBox->setTitle(QCoreApplication::translate("StreamMediaFileDlg", "Playback Settings", nullptr));
        label_5->setText(QCoreApplication::translate("StreamMediaFileDlg", "Audio preprocessor", nullptr));
        preprocessButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "&Setup", nullptr));
        label_6->setText(QCoreApplication::translate("StreamMediaFileDlg", "Start position", nullptr));
#if QT_CONFIG(accessibility)
        playbackOffsetSlider->setAccessibleDescription(QCoreApplication::translate("StreamMediaFileDlg", "Start position", nullptr));
#endif // QT_CONFIG(accessibility)
        label_7->setText(QCoreApplication::translate("StreamMediaFileDlg", "Test playback", nullptr));
        startToolButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "&Play", nullptr));
        stopToolButton->setText(QCoreApplication::translate("StreamMediaFileDlg", "S&top", nullptr));
#if QT_CONFIG(accessibility)
        vidgroupBox->setAccessibleName(QCoreApplication::translate("StreamMediaFileDlg", "Video Codec Settings", nullptr));
#endif // QT_CONFIG(accessibility)
        vidgroupBox->setTitle(QCoreApplication::translate("StreamMediaFileDlg", "Video Codec Settings", nullptr));
        label_33->setText(QCoreApplication::translate("StreamMediaFileDlg", "Codec", nullptr));
        label_42->setText(QCoreApplication::translate("StreamMediaFileDlg", "Bitrate", nullptr));
        okBtn->setText(QCoreApplication::translate("StreamMediaFileDlg", "&OK", nullptr));
        cancelBtn->setText(QCoreApplication::translate("StreamMediaFileDlg", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreamMediaFileDlg: public Ui_StreamMediaFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMMEDIAFILE_H
