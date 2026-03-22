/********************************************************************************
** Form generated from reading UI file 'changestatus.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESTATUS_H
#define UI_CHANGESTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeStatusDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *statusBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *msgEdit;
    QCheckBox *streamChkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeStatusDlg)
    {
        if (ChangeStatusDlg->objectName().isEmpty())
            ChangeStatusDlg->setObjectName("ChangeStatusDlg");
        ChangeStatusDlg->resize(456, 189);
        ChangeStatusDlg->setModal(true);
        verticalLayout = new QVBoxLayout(ChangeStatusDlg);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ChangeStatusDlg);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        statusBox = new QComboBox(ChangeStatusDlg);
        statusBox->setObjectName("statusBox");

        horizontalLayout->addWidget(statusBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ChangeStatusDlg);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        msgEdit = new QLineEdit(ChangeStatusDlg);
        msgEdit->setObjectName("msgEdit");

        horizontalLayout_2->addWidget(msgEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        streamChkBox = new QCheckBox(ChangeStatusDlg);
        streamChkBox->setObjectName("streamChkBox");

        verticalLayout->addWidget(streamChkBox);

        buttonBox = new QDialogButtonBox(ChangeStatusDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(statusBox);
        label_2->setBuddy(msgEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChangeStatusDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChangeStatusDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChangeStatusDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChangeStatusDlg);
    } // setupUi

    void retranslateUi(QDialog *ChangeStatusDlg)
    {
        ChangeStatusDlg->setWindowTitle(QCoreApplication::translate("ChangeStatusDlg", "Change Status", nullptr));
#if QT_CONFIG(tooltip)
        ChangeStatusDlg->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        ChangeStatusDlg->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("ChangeStatusDlg", "Status mode", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeStatusDlg", "Message", nullptr));
        streamChkBox->setText(QCoreApplication::translate("ChangeStatusDlg", "Display file name in status message when streaming", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeStatusDlg: public Ui_ChangeStatusDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESTATUS_H
