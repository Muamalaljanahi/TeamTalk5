/********************************************************************************
** Form generated from reading UI file 'desktopshare.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPSHARE_H
#define UI_DESKTOPSHARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DesktopShareDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *desktopRadioBtn;
    QRadioButton *actwndRadioButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *specificwndRadioButton;
    QComboBox *windowComboBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *rgbComboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *updintervakChkBox;
    QSpinBox *intervalSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cursorChkBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DesktopShareDlg)
    {
        if (DesktopShareDlg->objectName().isEmpty())
            DesktopShareDlg->setObjectName("DesktopShareDlg");
        DesktopShareDlg->resize(481, 277);
        verticalLayout_2 = new QVBoxLayout(DesktopShareDlg);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(DesktopShareDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        desktopRadioBtn = new QRadioButton(groupBox);
        desktopRadioBtn->setObjectName("desktopRadioBtn");
        desktopRadioBtn->setChecked(true);

        verticalLayout->addWidget(desktopRadioBtn);

        actwndRadioButton = new QRadioButton(groupBox);
        actwndRadioButton->setObjectName("actwndRadioButton");

        verticalLayout->addWidget(actwndRadioButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        specificwndRadioButton = new QRadioButton(groupBox);
        specificwndRadioButton->setObjectName("specificwndRadioButton");

        horizontalLayout->addWidget(specificwndRadioButton);

        windowComboBox = new QComboBox(groupBox);
        windowComboBox->setObjectName("windowComboBox");
        windowComboBox->setEnabled(false);
        windowComboBox->setMaximumSize(QSize(400, 16777215));

        horizontalLayout->addWidget(windowComboBox);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DesktopShareDlg);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        rgbComboBox = new QComboBox(groupBox_2);
        rgbComboBox->setObjectName("rgbComboBox");

        horizontalLayout_3->addWidget(rgbComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        updintervakChkBox = new QCheckBox(groupBox_2);
        updintervakChkBox->setObjectName("updintervakChkBox");
        updintervakChkBox->setChecked(true);

        horizontalLayout_2->addWidget(updintervakChkBox);

        intervalSpinBox = new QSpinBox(groupBox_2);
        intervalSpinBox->setObjectName("intervalSpinBox");
        intervalSpinBox->setMinimumSize(QSize(50, 0));
        intervalSpinBox->setMinimum(50);
        intervalSpinBox->setMaximum(60000);
        intervalSpinBox->setSingleStep(100);
        intervalSpinBox->setValue(250);

        horizontalLayout_2->addWidget(intervalSpinBox);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        cursorChkBox = new QCheckBox(groupBox_2);
        cursorChkBox->setObjectName("cursorChkBox");

        verticalLayout_3->addWidget(cursorChkBox);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DesktopShareDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(rgbComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DesktopShareDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DesktopShareDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DesktopShareDlg, qOverload<>(&QDialog::reject));
        QObject::connect(specificwndRadioButton, &QRadioButton::toggled, windowComboBox, &QComboBox::setEnabled);
        QObject::connect(updintervakChkBox, &QCheckBox::clicked, intervalSpinBox, &QSpinBox::setEnabled);

        QMetaObject::connectSlotsByName(DesktopShareDlg);
    } // setupUi

    void retranslateUi(QDialog *DesktopShareDlg)
    {
        DesktopShareDlg->setWindowTitle(QCoreApplication::translate("DesktopShareDlg", "Desktop Sharing", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DesktopShareDlg", "Window to Share", nullptr));
        desktopRadioBtn->setText(QCoreApplication::translate("DesktopShareDlg", "Share entire desktop", nullptr));
        actwndRadioButton->setText(QCoreApplication::translate("DesktopShareDlg", "Share active window", nullptr));
        specificwndRadioButton->setText(QCoreApplication::translate("DesktopShareDlg", "Share specific window", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DesktopShareDlg", "Shared Window Look", nullptr));
        label->setText(QCoreApplication::translate("DesktopShareDlg", "Color mode", nullptr));
        updintervakChkBox->setText(QCoreApplication::translate("DesktopShareDlg", "Update interval", nullptr));
        label_2->setText(QCoreApplication::translate("DesktopShareDlg", "msec", nullptr));
        cursorChkBox->setText(QCoreApplication::translate("DesktopShareDlg", "Share desktop cursor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopShareDlg: public Ui_DesktopShareDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPSHARE_H
