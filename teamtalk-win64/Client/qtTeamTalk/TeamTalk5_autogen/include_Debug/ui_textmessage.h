/********************************************************************************
** Form generated from reading UI file 'textmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMESSAGE_H
#define UI_TEXTMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "chattextedit.h"
#include "sendtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_TextMessageDlg
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    ChatTextEdit *historyTextEdit;
    QGroupBox *newmsgGroupBox;
    QHBoxLayout *horizontalLayout_3;
    SendTextEdit *newmsgTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *TextMessageDlg)
    {
        if (TextMessageDlg->objectName().isEmpty())
            TextMessageDlg->setObjectName("TextMessageDlg");
        TextMessageDlg->resize(272, 300);
        TextMessageDlg->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(TextMessageDlg);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        splitter = new QSplitter(TextMessageDlg);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        historyTextEdit = new ChatTextEdit(groupBox);
        historyTextEdit->setObjectName("historyTextEdit");
#if QT_CONFIG(accessibility)
        historyTextEdit->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        historyTextEdit->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        historyTextEdit->setTabChangesFocus(true);
        historyTextEdit->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        horizontalLayout_2->addWidget(historyTextEdit);

        splitter->addWidget(groupBox);
        newmsgGroupBox = new QGroupBox(splitter);
        newmsgGroupBox->setObjectName("newmsgGroupBox");
        horizontalLayout_3 = new QHBoxLayout(newmsgGroupBox);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        newmsgTextEdit = new SendTextEdit(newmsgGroupBox);
        newmsgTextEdit->setObjectName("newmsgTextEdit");
        newmsgTextEdit->setTabChangesFocus(true);

        horizontalLayout_3->addWidget(newmsgTextEdit);

        splitter->addWidget(newmsgGroupBox);

        verticalLayout->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sendButton = new QPushButton(TextMessageDlg);
        sendButton->setObjectName("sendButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setFlat(false);

        horizontalLayout->addWidget(sendButton);

        cancelButton = new QPushButton(TextMessageDlg);
        cancelButton->setObjectName("cancelButton");
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TextMessageDlg);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(TextMessageDlg);
    } // setupUi

    void retranslateUi(QDialog *TextMessageDlg)
    {
        TextMessageDlg->setWindowTitle(QCoreApplication::translate("TextMessageDlg", "Messages", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TextMessageDlg", "History", nullptr));
        newmsgGroupBox->setTitle(QCoreApplication::translate("TextMessageDlg", "Message", nullptr));
        sendButton->setText(QCoreApplication::translate("TextMessageDlg", "&Send", nullptr));
        cancelButton->setText(QCoreApplication::translate("TextMessageDlg", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextMessageDlg: public Ui_TextMessageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMESSAGE_H
