/********************************************************************************
** Form generated from reading UI file 'useraccountdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNTDLG_H
#define UI_USERACCOUNTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytableview.h"
#include "mytabwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UserAccountDlg
{
public:
    QVBoxLayout *verticalLayout_1;
    MyTabWidget *tabWidget;
    QWidget *tab_basic_info;
    QVBoxLayout *verticalLayout_basic_info;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_2;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *label_4;
    QPlainTextEdit *noteEdit;
    QLabel *label_5;
    QComboBox *channelComboBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *lastEditLabel;
    QLabel *lastLoginLabel;
    QWidget *tab_user_rights;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    MyTableView *userrightsTableView;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_7;
    QListWidget *opchannelsListWidget;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *opchanComboBox;
    QToolButton *addopBtn;
    QToolButton *rmopBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QSpinBox *audmaxbpsSpinBox;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QComboBox *limitcmdComboBox;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserAccountDlg)
    {
        if (UserAccountDlg->objectName().isEmpty())
            UserAccountDlg->setObjectName("UserAccountDlg");
        UserAccountDlg->resize(804, 590);
        UserAccountDlg->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout_1 = new QVBoxLayout(UserAccountDlg);
        verticalLayout_1->setObjectName("verticalLayout_1");
        tabWidget = new MyTabWidget(UserAccountDlg);
        tabWidget->setObjectName("tabWidget");
        tab_basic_info = new QWidget();
        tab_basic_info->setObjectName("tab_basic_info");
        verticalLayout_basic_info = new QVBoxLayout(tab_basic_info);
        verticalLayout_basic_info->setObjectName("verticalLayout_basic_info");
        groupBox_6 = new QGroupBox(tab_basic_info);
        groupBox_6->setObjectName("groupBox_6");
        formLayout_2 = new QFormLayout(groupBox_6);
        formLayout_2->setObjectName("formLayout_2");
        typeLabel = new QLabel(groupBox_6);
        typeLabel->setObjectName("typeLabel");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, typeLabel);

        typeComboBox = new QComboBox(groupBox_6);
        typeComboBox->setObjectName("typeComboBox");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, typeComboBox);

        label = new QLabel(groupBox_6);
        label->setObjectName("label");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        usernameEdit = new QLineEdit(groupBox_6);
        usernameEdit->setObjectName("usernameEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usernameEdit->sizePolicy().hasHeightForWidth());
        usernameEdit->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, usernameEdit);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        passwordEdit = new QLineEdit(groupBox_6);
        passwordEdit->setObjectName("passwordEdit");
        sizePolicy.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, passwordEdit);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        noteEdit = new QPlainTextEdit(groupBox_6);
        noteEdit->setObjectName("noteEdit");
        noteEdit->setTabChangesFocus(true);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, noteEdit);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        channelComboBox = new QComboBox(groupBox_6);
        channelComboBox->setObjectName("channelComboBox");
        channelComboBox->setEditable(true);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, channelComboBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_2->setItem(5, QFormLayout::ItemRole::FieldRole, verticalSpacer_4);

        lastEditLabel = new QLabel(groupBox_6);
        lastEditLabel->setObjectName("lastEditLabel");
        lastEditLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout_2->setWidget(6, QFormLayout::ItemRole::LabelRole, lastEditLabel);

        lastLoginLabel = new QLabel(groupBox_6);
        lastLoginLabel->setObjectName("lastLoginLabel");
        lastLoginLabel->setFocusPolicy(Qt::StrongFocus);

        formLayout_2->setWidget(7, QFormLayout::ItemRole::LabelRole, lastLoginLabel);


        verticalLayout_basic_info->addWidget(groupBox_6);

        tabWidget->addTab(tab_basic_info, QString());
        tab_user_rights = new QWidget();
        tab_user_rights->setObjectName("tab_user_rights");
        horizontalLayout_8 = new QHBoxLayout(tab_user_rights);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        groupBox_4 = new QGroupBox(tab_user_rights);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName("verticalLayout");
        userrightsTableView = new MyTableView(groupBox_4);
        userrightsTableView->setObjectName("userrightsTableView");
        userrightsTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        userrightsTableView->setProperty("showDropIndicator", QVariant(false));
        userrightsTableView->setAlternatingRowColors(true);
        userrightsTableView->setTabKeyNavigation(false);

        verticalLayout->addWidget(userrightsTableView);


        horizontalLayout_8->addWidget(groupBox_4);

        tabWidget->addTab(tab_user_rights, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        opchannelsListWidget = new QListWidget(groupBox_3);
        opchannelsListWidget->setObjectName("opchannelsListWidget");
        opchannelsListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        opchannelsListWidget->setUniformItemSizes(false);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, opchannelsListWidget);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        opchanComboBox = new QComboBox(groupBox_3);
        opchanComboBox->setObjectName("opchanComboBox");
        opchanComboBox->setEditable(false);

        horizontalLayout_3->addWidget(opchanComboBox);

        addopBtn = new QToolButton(groupBox_3);
        addopBtn->setObjectName("addopBtn");

        horizontalLayout_3->addWidget(addopBtn);

        rmopBtn = new QToolButton(groupBox_3);
        rmopBtn->setObjectName("rmopBtn");

        horizontalLayout_3->addWidget(rmopBtn);

        horizontalLayout_3->setStretch(0, 1);

        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");

        horizontalLayout_2->addWidget(label_10);

        audmaxbpsSpinBox = new QSpinBox(groupBox_5);
        audmaxbpsSpinBox->setObjectName("audmaxbpsSpinBox");
        audmaxbpsSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        audmaxbpsSpinBox->setMaximum(2048);
        audmaxbpsSpinBox->setSingleStep(1);

        horizontalLayout_2->addWidget(audmaxbpsSpinBox);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");

        horizontalLayout_2->addWidget(label_11);


        verticalLayout_5->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 158, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName("groupBox_7");
        verticalLayout_7 = new QVBoxLayout(groupBox_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName("label_9");
        label_9->setWordWrap(true);

        verticalLayout_7->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        limitcmdComboBox = new QComboBox(groupBox_7);
        limitcmdComboBox->setObjectName("limitcmdComboBox");

        horizontalLayout_7->addWidget(limitcmdComboBox);


        verticalLayout_7->addLayout(horizontalLayout_7);


        verticalLayout_8->addWidget(groupBox_7);

        verticalSpacer_5 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_1->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(236, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UserAccountDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_1->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        typeLabel->setBuddy(typeComboBox);
        label->setBuddy(usernameEdit);
        label_2->setBuddy(passwordEdit);
        label_4->setBuddy(noteEdit);
        label_5->setBuddy(channelComboBox);
        label_7->setBuddy(opchannelsListWidget);
        label_6->setBuddy(opchanComboBox);
        label_10->setBuddy(audmaxbpsSpinBox);
        label_8->setBuddy(limitcmdComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(UserAccountDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UserAccountDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UserAccountDlg, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserAccountDlg);
    } // setupUi

    void retranslateUi(QDialog *UserAccountDlg)
    {
        groupBox_6->setTitle(QCoreApplication::translate("UserAccountDlg", "Basic Account Properties", nullptr));
        typeLabel->setText(QCoreApplication::translate("UserAccountDlg", "User Type", nullptr));
        label->setText(QCoreApplication::translate("UserAccountDlg", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("UserAccountDlg", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("UserAccountDlg", "Note", nullptr));
        label_5->setText(QCoreApplication::translate("UserAccountDlg", "Initial Channel", nullptr));
#if QT_CONFIG(tooltip)
        channelComboBox->setToolTip(QCoreApplication::translate("UserAccountDlg", "User should automatically join this channel after login", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        channelComboBox->setAccessibleDescription(QCoreApplication::translate("UserAccountDlg", "User should automatically join this channel after login", nullptr));
#endif // QT_CONFIG(accessibility)
        lastEditLabel->setText(QString());
        lastLoginLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_basic_info), QCoreApplication::translate("UserAccountDlg", "Basic Information", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("UserAccountDlg", "User Actions Allowed on Server", nullptr));
#if QT_CONFIG(accessibility)
        userrightsTableView->setAccessibleName(QCoreApplication::translate("UserAccountDlg", "User Rights", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tab_user_rights), QCoreApplication::translate("UserAccountDlg", "User Rights", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_3->setAccessibleName(QCoreApplication::translate("UserAccountDlg", "Auto-Operator Channels", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_3->setTitle(QCoreApplication::translate("UserAccountDlg", "Auto-Operator Channels", nullptr));
        label_7->setText(QCoreApplication::translate("UserAccountDlg", "Selected Channels", nullptr));
#if QT_CONFIG(tooltip)
        opchannelsListWidget->setToolTip(QCoreApplication::translate("UserAccountDlg", "User will automatically become operator when joining these channels", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("UserAccountDlg", "Available Channels", nullptr));
#if QT_CONFIG(accessibility)
        addopBtn->setAccessibleDescription(QCoreApplication::translate("UserAccountDlg", "Set selected user auto operator for selected channels", nullptr));
#endif // QT_CONFIG(accessibility)
        addopBtn->setText(QCoreApplication::translate("UserAccountDlg", "Add", nullptr));
#if QT_CONFIG(accessibility)
        rmopBtn->setAccessibleDescription(QCoreApplication::translate("UserAccountDlg", "No longer set selected user auto operator for selected channels", nullptr));
#endif // QT_CONFIG(accessibility)
        rmopBtn->setText(QCoreApplication::translate("UserAccountDlg", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("UserAccountDlg", "Channel Operator", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("UserAccountDlg", "Audio Codec Limitations", nullptr));
        label_10->setText(QCoreApplication::translate("UserAccountDlg", "Max bitrate for audio codecs", nullptr));
        label_11->setText(QCoreApplication::translate("UserAccountDlg", "kbps (0 = disabled)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("UserAccountDlg", "Codec Limitations", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("UserAccountDlg", "Flood Protection", nullptr));
        label_9->setText(QCoreApplication::translate("UserAccountDlg", "Prevent user from e.g. spamming text messages by limiting the number of commands they can issue within a given timeframe.", nullptr));
        label_8->setText(QCoreApplication::translate("UserAccountDlg", "Limit issued commands", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("UserAccountDlg", "Abuse Prevention", nullptr));
        (void)UserAccountDlg;
    } // retranslateUi

};

namespace Ui {
    class UserAccountDlg: public Ui_UserAccountDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNTDLG_H
