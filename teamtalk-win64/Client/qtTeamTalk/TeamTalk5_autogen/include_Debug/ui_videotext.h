/********************************************************************************
** Form generated from reading UI file 'videotext.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOTEXT_H
#define UI_VIDEOTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VideoTextDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *nicknameRadioButton;
    QRadioButton *usernameRadioButton;
    QRadioButton *statusRadioButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *pos_tlBtn;
    QRadioButton *pos_blBtn;
    QRadioButton *pos_trBtn;
    QRadioButton *pos_brBtn;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QToolButton *fontBtn;
    QLabel *label;
    QToolButton *bgBtn;
    QLabel *label_3;
    QSpinBox *widthSpinBox;
    QLabel *label_4;
    QSpinBox *heightSpinBox;
    QLabel *exampleLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VideoTextDlg)
    {
        if (VideoTextDlg->objectName().isEmpty())
            VideoTextDlg->setObjectName("VideoTextDlg");
        VideoTextDlg->resize(388, 427);
        verticalLayout_3 = new QVBoxLayout(VideoTextDlg);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_3 = new QGroupBox(VideoTextDlg);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        nicknameRadioButton = new QRadioButton(groupBox_3);
        nicknameRadioButton->setObjectName("nicknameRadioButton");
        nicknameRadioButton->setChecked(true);

        verticalLayout->addWidget(nicknameRadioButton);

        usernameRadioButton = new QRadioButton(groupBox_3);
        usernameRadioButton->setObjectName("usernameRadioButton");

        verticalLayout->addWidget(usernameRadioButton);

        statusRadioButton = new QRadioButton(groupBox_3);
        statusRadioButton->setObjectName("statusRadioButton");

        verticalLayout->addWidget(statusRadioButton);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(VideoTextDlg);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        pos_tlBtn = new QRadioButton(groupBox);
        pos_tlBtn->setObjectName("pos_tlBtn");

        gridLayout->addWidget(pos_tlBtn, 0, 0, 1, 1);

        pos_blBtn = new QRadioButton(groupBox);
        pos_blBtn->setObjectName("pos_blBtn");

        gridLayout->addWidget(pos_blBtn, 1, 0, 1, 1);

        pos_trBtn = new QRadioButton(groupBox);
        pos_trBtn->setObjectName("pos_trBtn");
        pos_trBtn->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(pos_trBtn, 0, 1, 1, 1);

        pos_brBtn = new QRadioButton(groupBox);
        pos_brBtn->setObjectName("pos_brBtn");
        pos_brBtn->setLayoutDirection(Qt::RightToLeft);
        pos_brBtn->setChecked(true);

        gridLayout->addWidget(pos_brBtn, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_2);

        groupBox_2 = new QGroupBox(VideoTextDlg);
        groupBox_2->setObjectName("groupBox_2");
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        fontBtn = new QToolButton(groupBox_2);
        fontBtn->setObjectName("fontBtn");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, fontBtn);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        bgBtn = new QToolButton(groupBox_2);
        bgBtn->setObjectName("bgBtn");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, bgBtn);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        widthSpinBox = new QSpinBox(groupBox_2);
        widthSpinBox->setObjectName("widthSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widthSpinBox->sizePolicy().hasHeightForWidth());
        widthSpinBox->setSizePolicy(sizePolicy);
        widthSpinBox->setMinimum(10);
        widthSpinBox->setMaximum(100);
        widthSpinBox->setValue(30);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, widthSpinBox);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        heightSpinBox = new QSpinBox(groupBox_2);
        heightSpinBox->setObjectName("heightSpinBox");
        sizePolicy.setHeightForWidth(heightSpinBox->sizePolicy().hasHeightForWidth());
        heightSpinBox->setSizePolicy(sizePolicy);
        heightSpinBox->setMinimum(10);
        heightSpinBox->setMaximum(100);
        heightSpinBox->setValue(10);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, heightSpinBox);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout);

        exampleLabel = new QLabel(VideoTextDlg);
        exampleLabel->setObjectName("exampleLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(exampleLabel->sizePolicy().hasHeightForWidth());
        exampleLabel->setSizePolicy(sizePolicy1);
        exampleLabel->setFrameShape(QFrame::NoFrame);
        exampleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(exampleLabel);

        buttonBox = new QDialogButtonBox(VideoTextDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(fontBtn);
        label->setBuddy(bgBtn);
        label_3->setBuddy(widthSpinBox);
        label_4->setBuddy(heightSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(VideoTextDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VideoTextDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VideoTextDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VideoTextDlg);
    } // setupUi

    void retranslateUi(QDialog *VideoTextDlg)
    {
        VideoTextDlg->setWindowTitle(QCoreApplication::translate("VideoTextDlg", "Video Source Text Box", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("VideoTextDlg", "Text to Show", nullptr));
        nicknameRadioButton->setText(QCoreApplication::translate("VideoTextDlg", "Show nickname", nullptr));
        usernameRadioButton->setText(QCoreApplication::translate("VideoTextDlg", "Show username", nullptr));
        statusRadioButton->setText(QCoreApplication::translate("VideoTextDlg", "Show status text", nullptr));
        groupBox->setTitle(QCoreApplication::translate("VideoTextDlg", "Text Position", nullptr));
        pos_tlBtn->setText(QCoreApplication::translate("VideoTextDlg", "Top-Left", nullptr));
        pos_blBtn->setText(QCoreApplication::translate("VideoTextDlg", "Bottom-Left", nullptr));
        pos_trBtn->setText(QCoreApplication::translate("VideoTextDlg", "Top-Right", nullptr));
        pos_brBtn->setText(QCoreApplication::translate("VideoTextDlg", "Bottom-Right", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("VideoTextDlg", "Text Appearance", nullptr));
        label_2->setText(QCoreApplication::translate("VideoTextDlg", "Font color", nullptr));
        fontBtn->setText(QCoreApplication::translate("VideoTextDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        fontBtn->setAccessibleName(QCoreApplication::translate("VideoTextDlg", "Font color", nullptr));
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("VideoTextDlg", "Background color", nullptr));
        bgBtn->setText(QCoreApplication::translate("VideoTextDlg", "...", nullptr));
#if QT_CONFIG(accessibility)
        bgBtn->setAccessibleName(QCoreApplication::translate("VideoTextDlg", "Background color", nullptr));
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("VideoTextDlg", "Width in percent", nullptr));
        label_4->setText(QCoreApplication::translate("VideoTextDlg", "Height in percent", nullptr));
        exampleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoTextDlg: public Ui_VideoTextDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOTEXT_H
