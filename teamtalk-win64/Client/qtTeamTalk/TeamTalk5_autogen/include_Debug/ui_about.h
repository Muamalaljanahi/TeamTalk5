/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *versionLabel;
    QTextBrowser *textBrowser;
    QLabel *compileLabel;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *iconLabel;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName("AboutDlg");
        AboutDlg->resize(333, 417);
        horizontalLayout_2 = new QHBoxLayout(AboutDlg);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AboutDlg);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        label->setFont(font);
        label->setText(QString::fromUtf8("TeamTalk"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        versionLabel = new QLabel(AboutDlg);
        versionLabel->setObjectName("versionLabel");
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        versionLabel->setFont(font1);
        versionLabel->setText(QString::fromUtf8("5.0"));
        versionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        versionLabel->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(versionLabel);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(AboutDlg);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        compileLabel = new QLabel(AboutDlg);
        compileLabel->setObjectName("compileLabel");
        compileLabel->setText(QString::fromUtf8("Compile date"));
        compileLabel->setWordWrap(true);
        compileLabel->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(compileLabel);

        label_4 = new QLabel(AboutDlg);
        label_4->setObjectName("label_4");
        label_4->setText(QString::fromUtf8("Copyright (c) 2005-2021, BearWare.dk"));
        label_4->setWordWrap(true);
        label_4->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        iconLabel = new QLabel(AboutDlg);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(iconLabel);


        retranslateUi(AboutDlg);

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QCoreApplication::translate("AboutDlg", "About", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("AboutDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Credits</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Contributors</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bj\303"
                        "\270rn Damstedt Rasmussen, developer</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Corentin Bacqu\303\251-Cazenave, developer</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Translators</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\264\272\347\250\274\346\240\213, Chinese Simplified</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Corentin Bacqu\303\251-Cazenave, French</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\">Steffen Schultz, German</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Abolfazl Saeidifar, Persian</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Micha\305\202 Cio\305\202ek, Polish</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jo\303\243o Carlos Ramos and JNylson, Portuguese from Brazil</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ozancan Karata\305\237, Turkish</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:"
                        "600;\">Libraries</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TeamTalk uses the following libraries:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.dre.vanderbilt.edu/~schmidt/ACE.html\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">ACE</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://ffmpeg.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">FFmpeg</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xiph.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">OGG</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0"
                        "px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.openssl.org\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">OpenSSL</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xiph.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">OPUS</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xiph.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">OPUS-tools</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://portaudio.com/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">PortAudio</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://qt.io\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">Qt</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xiph.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">Speex</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xiph.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">SpeexDSP</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.grinninglizard.com/tinyxml/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">TinyXML</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.webmproject.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">WebM</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://webrtc.org/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">WebRTC</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://zlib.net/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">Zlib</span></a></p></body></html>", nullptr));
        iconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
