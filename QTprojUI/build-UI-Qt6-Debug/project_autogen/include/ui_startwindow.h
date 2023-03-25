/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPlainTextEdit *usernameLogInTB;
    QPlainTextEdit *passwordLogInTB;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QPushButton *loginButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QPlainTextEdit *usernameNewAcTB;
    QPlainTextEdit *passwordNewAcTB;
    QPushButton *createNewAcButton;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuSign_in;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName(QString::fromUtf8("StartWindow"));
        StartWindow->resize(1313, 675);
        QFont font;
        font.setPointSize(16);
        StartWindow->setFont(font);
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(5, 21, 1301, 51));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(210, 140, 871, 84));
        formLayoutWidget->setMaximumSize(QSize(16777215, 84));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        usernameLogInTB = new QPlainTextEdit(formLayoutWidget);
        usernameLogInTB->setObjectName(QString::fromUtf8("usernameLogInTB"));
        usernameLogInTB->setMaximumSize(QSize(16777215, 84));
        usernameLogInTB->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLogInTB);

        passwordLogInTB = new QPlainTextEdit(formLayoutWidget);
        passwordLogInTB->setObjectName(QString::fromUtf8("passwordLogInTB"));
        passwordLogInTB->setMaximumSize(QSize(16777215, 84));

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLogInTB);

        textBrowser_2 = new QTextBrowser(formLayoutWidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, textBrowser_2);

        textBrowser_3 = new QTextBrowser(formLayoutWidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, textBrowser_3);

        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(550, 280, 211, 71));
        QFont font1;
        font1.setPointSize(18);
        loginButton->setFont(font1);
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(210, 400, 871, 84));
        formLayoutWidget_2->setMaximumSize(QSize(16777215, 84));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_4 = new QTextBrowser(formLayoutWidget_2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, textBrowser_4);

        textBrowser_5 = new QTextBrowser(formLayoutWidget_2);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, textBrowser_5);

        usernameNewAcTB = new QPlainTextEdit(formLayoutWidget_2);
        usernameNewAcTB->setObjectName(QString::fromUtf8("usernameNewAcTB"));
        usernameNewAcTB->setMaximumSize(QSize(16777215, 84));
        usernameNewAcTB->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, usernameNewAcTB);

        passwordNewAcTB = new QPlainTextEdit(formLayoutWidget_2);
        passwordNewAcTB->setObjectName(QString::fromUtf8("passwordNewAcTB"));
        passwordNewAcTB->setMaximumSize(QSize(16777215, 84));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordNewAcTB);

        createNewAcButton = new QPushButton(centralwidget);
        createNewAcButton->setObjectName(QString::fromUtf8("createNewAcButton"));
        createNewAcButton->setGeometry(QRect(550, 530, 211, 71));
        createNewAcButton->setFont(font1);
        StartWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(StartWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StartWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(StartWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1313, 30));
        menuSign_in = new QMenu(menuBar);
        menuSign_in->setObjectName(QString::fromUtf8("menuSign_in"));
        StartWindow->setMenuBar(menuBar);

        menuBar->addAction(menuSign_in->menuAction());

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "StartWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("StartWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">Please Login</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("StartWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Username:</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("StartWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Password:</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("StartWindow", "Login", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("StartWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Password:</span></p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("StartWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Username:</span></p></body></html>", nullptr));
        createNewAcButton->setText(QCoreApplication::translate("StartWindow", "Create account", nullptr));
        menuSign_in->setTitle(QCoreApplication::translate("StartWindow", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
