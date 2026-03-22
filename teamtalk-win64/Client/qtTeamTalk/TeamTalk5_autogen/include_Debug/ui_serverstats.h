/********************************************************************************
** Form generated from reading UI file 'serverstats.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERSTATS_H
#define UI_SERVERSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ServerStatsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *uptimeLabel;
    QLabel *voiceRXTXLabel;
    QLabel *mediafileRXTXLabel;
    QLabel *totalRXTXLabel;
    QLabel *videoRXTXLabel;
    QLabel *kbpsLabel;
    QLabel *usersPeakLabel;
    QLabel *usersLabel;
    QLabel *filesRXTXLabel;
    QLabel *desktopRXTXLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *updateChkBox;
    QSpinBox *msecSpinBox;

    void setupUi(QDialog *ServerStatsDlg)
    {
        if (ServerStatsDlg->objectName().isEmpty())
            ServerStatsDlg->setObjectName("ServerStatsDlg");
        ServerStatsDlg->resize(317, 296);
        verticalLayout = new QVBoxLayout(ServerStatsDlg);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        uptimeLabel = new QLabel(ServerStatsDlg);
        uptimeLabel->setObjectName("uptimeLabel");
        uptimeLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(uptimeLabel, 9, 0, 1, 1);

        voiceRXTXLabel = new QLabel(ServerStatsDlg);
        voiceRXTXLabel->setObjectName("voiceRXTXLabel");
        voiceRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(voiceRXTXLabel, 1, 0, 1, 1);

        mediafileRXTXLabel = new QLabel(ServerStatsDlg);
        mediafileRXTXLabel->setObjectName("mediafileRXTXLabel");
        mediafileRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mediafileRXTXLabel, 3, 0, 1, 1);

        totalRXTXLabel = new QLabel(ServerStatsDlg);
        totalRXTXLabel->setObjectName("totalRXTXLabel");
        totalRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(totalRXTXLabel, 0, 0, 1, 1);

        videoRXTXLabel = new QLabel(ServerStatsDlg);
        videoRXTXLabel->setObjectName("videoRXTXLabel");
        videoRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(videoRXTXLabel, 2, 0, 1, 1);

        kbpsLabel = new QLabel(ServerStatsDlg);
        kbpsLabel->setObjectName("kbpsLabel");
        kbpsLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(kbpsLabel, 5, 0, 1, 1);

        usersPeakLabel = new QLabel(ServerStatsDlg);
        usersPeakLabel->setObjectName("usersPeakLabel");
        usersPeakLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(usersPeakLabel, 8, 0, 1, 1);

        usersLabel = new QLabel(ServerStatsDlg);
        usersLabel->setObjectName("usersLabel");
        usersLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(usersLabel, 7, 0, 1, 1);

        filesRXTXLabel = new QLabel(ServerStatsDlg);
        filesRXTXLabel->setObjectName("filesRXTXLabel");
        filesRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(filesRXTXLabel, 6, 0, 1, 1);

        desktopRXTXLabel = new QLabel(ServerStatsDlg);
        desktopRXTXLabel->setObjectName("desktopRXTXLabel");
        desktopRXTXLabel->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(desktopRXTXLabel, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        updateChkBox = new QCheckBox(ServerStatsDlg);
        updateChkBox->setObjectName("updateChkBox");

        horizontalLayout_2->addWidget(updateChkBox);

        msecSpinBox = new QSpinBox(ServerStatsDlg);
        msecSpinBox->setObjectName("msecSpinBox");
        msecSpinBox->setEnabled(false);
        msecSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        msecSpinBox->setMinimum(250);
        msecSpinBox->setMaximum(10000);
        msecSpinBox->setSingleStep(50);
        msecSpinBox->setValue(1000);

        horizontalLayout_2->addWidget(msecSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ServerStatsDlg);

        QMetaObject::connectSlotsByName(ServerStatsDlg);
    } // setupUi

    void retranslateUi(QDialog *ServerStatsDlg)
    {
        ServerStatsDlg->setWindowTitle(QCoreApplication::translate("ServerStatsDlg", "Server Statistics", nullptr));
        uptimeLabel->setText(QString());
        voiceRXTXLabel->setText(QString());
        mediafileRXTXLabel->setText(QString());
        totalRXTXLabel->setText(QString());
        videoRXTXLabel->setText(QString());
        kbpsLabel->setText(QString());
        usersPeakLabel->setText(QString());
        usersLabel->setText(QString());
        filesRXTXLabel->setText(QString());
        desktopRXTXLabel->setText(QString());
        updateChkBox->setText(QCoreApplication::translate("ServerStatsDlg", "Update interval", nullptr));
#if QT_CONFIG(accessibility)
        msecSpinBox->setAccessibleName(QCoreApplication::translate("ServerStatsDlg", "Update information every", nullptr));
#endif // QT_CONFIG(accessibility)
        msecSpinBox->setSuffix(QCoreApplication::translate("ServerStatsDlg", "msec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerStatsDlg: public Ui_ServerStatsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERSTATS_H
