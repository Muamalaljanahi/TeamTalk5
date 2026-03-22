/********************************************************************************
** Form generated from reading UI file 'mediastorage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIASTORAGE_H
#define UI_MEDIASTORAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MediaStorageDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QCheckBox *singleCheckBox;
    QCheckBox *multipleCheckBox;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QCheckBox *voicestreamCheckBox;
    QCheckBox *mediafileCheckBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *affComboBox;
    QLabel *label;
    QLineEdit *audiopathEdit;
    QToolButton *audioToolButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *chanlogEdit;
    QToolButton *chanlogToolButton;
    QLabel *label_5;
    QLineEdit *usertextEdit;
    QToolButton *usertextToolButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *MediaStorageDlg)
    {
        if (MediaStorageDlg->objectName().isEmpty())
            MediaStorageDlg->setObjectName("MediaStorageDlg");
        MediaStorageDlg->resize(486, 395);
        verticalLayout_2 = new QVBoxLayout(MediaStorageDlg);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(MediaStorageDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        singleCheckBox = new QCheckBox(groupBox);
        singleCheckBox->setObjectName("singleCheckBox");

        gridLayout->addWidget(singleCheckBox, 0, 1, 1, 1);

        multipleCheckBox = new QCheckBox(groupBox);
        multipleCheckBox->setObjectName("multipleCheckBox");

        gridLayout->addWidget(multipleCheckBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        voicestreamCheckBox = new QCheckBox(groupBox);
        voicestreamCheckBox->setObjectName("voicestreamCheckBox");

        gridLayout_4->addWidget(voicestreamCheckBox, 0, 1, 1, 1);

        mediafileCheckBox = new QCheckBox(groupBox);
        mediafileCheckBox->setObjectName("mediafileCheckBox");

        gridLayout_4->addWidget(mediafileCheckBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        affComboBox = new QComboBox(groupBox);
        affComboBox->setObjectName("affComboBox");

        gridLayout_2->addWidget(affComboBox, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        audiopathEdit = new QLineEdit(groupBox);
        audiopathEdit->setObjectName("audiopathEdit");

        gridLayout_2->addWidget(audiopathEdit, 1, 1, 1, 1);

        audioToolButton = new QToolButton(groupBox);
        audioToolButton->setObjectName("audioToolButton");
        audioToolButton->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(audioToolButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MediaStorageDlg);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        chanlogEdit = new QLineEdit(groupBox_2);
        chanlogEdit->setObjectName("chanlogEdit");

        gridLayout_3->addWidget(chanlogEdit, 0, 1, 1, 1);

        chanlogToolButton = new QToolButton(groupBox_2);
        chanlogToolButton->setObjectName("chanlogToolButton");
        chanlogToolButton->setText(QString::fromUtf8("..."));

        gridLayout_3->addWidget(chanlogToolButton, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        usertextEdit = new QLineEdit(groupBox_2);
        usertextEdit->setObjectName("usertextEdit");

        gridLayout_3->addWidget(usertextEdit, 1, 1, 1, 1);

        usertextToolButton = new QToolButton(groupBox_2);
        usertextToolButton->setObjectName("usertextToolButton");
        usertextToolButton->setText(QString::fromUtf8("..."));

        gridLayout_3->addWidget(usertextToolButton, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        startButton = new QPushButton(MediaStorageDlg);
        startButton->setObjectName("startButton");

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(MediaStorageDlg);
        stopButton->setObjectName("stopButton");

        horizontalLayout->addWidget(stopButton);

        cancelButton = new QPushButton(MediaStorageDlg);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(affComboBox);
        label->setBuddy(audiopathEdit);
        label_4->setBuddy(chanlogEdit);
        label_5->setBuddy(usertextEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MediaStorageDlg);

        QMetaObject::connectSlotsByName(MediaStorageDlg);
    } // setupUi

    void retranslateUi(QDialog *MediaStorageDlg)
    {
        MediaStorageDlg->setWindowTitle(QCoreApplication::translate("MediaStorageDlg", "Record Conversations to Disk", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MediaStorageDlg", "Store audio conversations", nullptr));
        label_3->setText(QCoreApplication::translate("MediaStorageDlg", "Storage mode", nullptr));
        singleCheckBox->setText(QCoreApplication::translate("MediaStorageDlg", "Single audio file for all users", nullptr));
        multipleCheckBox->setText(QCoreApplication::translate("MediaStorageDlg", "Separate audio file for each user", nullptr));
        label_6->setText(QCoreApplication::translate("MediaStorageDlg", "Stream types", nullptr));
        voicestreamCheckBox->setText(QCoreApplication::translate("MediaStorageDlg", "Voice", nullptr));
        mediafileCheckBox->setText(QCoreApplication::translate("MediaStorageDlg", "Media files", nullptr));
        label_2->setText(QCoreApplication::translate("MediaStorageDlg", "Audio file format", nullptr));
        label->setText(QCoreApplication::translate("MediaStorageDlg", "Folder for audio files", nullptr));
        audioToolButton->setAccessibleName(QCoreApplication::translate("MediaStorageDlg", "Browse", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MediaStorageDlg", "Store text message conversations", nullptr));
        label_4->setText(QCoreApplication::translate("MediaStorageDlg", "Folder for channel log files", nullptr));
        chanlogToolButton->setAccessibleName(QCoreApplication::translate("MediaStorageDlg", "Browse", nullptr));
        label_5->setText(QCoreApplication::translate("MediaStorageDlg", "Folder for user-to-user log files", nullptr));
        usertextToolButton->setAccessibleName(QCoreApplication::translate("MediaStorageDlg", "Browse", nullptr));
        startButton->setText(QCoreApplication::translate("MediaStorageDlg", "&Start", nullptr));
        stopButton->setText(QCoreApplication::translate("MediaStorageDlg", "S&top", nullptr));
        cancelButton->setText(QCoreApplication::translate("MediaStorageDlg", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MediaStorageDlg: public Ui_MediaStorageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIASTORAGE_H
