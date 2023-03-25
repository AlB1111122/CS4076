/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homePage
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *homePage)
    {
        if (homePage->objectName().isEmpty())
            homePage->setObjectName(QString::fromUtf8("homePage"));
        homePage->resize(1316, 676);
        pushButton = new QPushButton(homePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 230, 331, 221));

        retranslateUi(homePage);

        QMetaObject::connectSlotsByName(homePage);
    } // setupUi

    void retranslateUi(QWidget *homePage)
    {
        homePage->setWindowTitle(QCoreApplication::translate("homePage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("homePage", "efbhuyaweifga", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homePage: public Ui_homePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
