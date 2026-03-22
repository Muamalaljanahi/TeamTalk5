/********************************************************************************
** Form generated from reading UI file 'customvideofmt.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMVIDEOFMT_H
#define UI_CUSTOMVIDEOFMT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomVideoFmtDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *widthEdit;
    QLabel *label_2;
    QLineEdit *heightEdit;
    QLabel *label_3;
    QLineEdit *fpsEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CustomVideoFmtDlg)
    {
        if (CustomVideoFmtDlg->objectName().isEmpty())
            CustomVideoFmtDlg->setObjectName("CustomVideoFmtDlg");
        CustomVideoFmtDlg->resize(356, 129);
        verticalLayout = new QVBoxLayout(CustomVideoFmtDlg);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(CustomVideoFmtDlg);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widthEdit = new QLineEdit(groupBox);
        widthEdit->setObjectName("widthEdit");

        horizontalLayout->addWidget(widthEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setText(QString::fromUtf8("x"));

        horizontalLayout->addWidget(label_2);

        heightEdit = new QLineEdit(groupBox);
        heightEdit->setObjectName("heightEdit");

        horizontalLayout->addWidget(heightEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        fpsEdit = new QLineEdit(groupBox);
        fpsEdit->setObjectName("fpsEdit");

        horizontalLayout->addWidget(fpsEdit);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(CustomVideoFmtDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(widthEdit);
        label_2->setBuddy(heightEdit);
        label_3->setBuddy(fpsEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CustomVideoFmtDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CustomVideoFmtDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CustomVideoFmtDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CustomVideoFmtDlg);
    } // setupUi

    void retranslateUi(QDialog *CustomVideoFmtDlg)
    {
        CustomVideoFmtDlg->setWindowTitle(QCoreApplication::translate("CustomVideoFmtDlg", "Custom Video Format", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CustomVideoFmtDlg", "Video Format", nullptr));
        label->setText(QCoreApplication::translate("CustomVideoFmtDlg", "Video Resolution", nullptr));
        widthEdit->setText(QCoreApplication::translate("CustomVideoFmtDlg", "640", nullptr));
        heightEdit->setText(QCoreApplication::translate("CustomVideoFmtDlg", "480", nullptr));
        label_3->setText(QCoreApplication::translate("CustomVideoFmtDlg", "FPS", nullptr));
        fpsEdit->setText(QCoreApplication::translate("CustomVideoFmtDlg", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomVideoFmtDlg: public Ui_CustomVideoFmtDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMVIDEOFMT_H
