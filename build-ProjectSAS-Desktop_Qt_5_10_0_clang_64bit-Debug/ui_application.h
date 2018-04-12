/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLineEdit *userNameEdit;
    QLineEdit *passwordEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *wrongUserLabel;
    QWidget *UserMenuPage;
    QLabel *label_2;

    void setupUi(QWidget *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QStringLiteral("Application"));
        Application->resize(608, 420);
        label = new QLabel(Application);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 161, 31));
        label->setStyleSheet(QStringLiteral("font-size: 20px;"));
        stackedWidget = new QStackedWidget(Application);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 611, 361));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: white;"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QStringLiteral("LoginPage"));
        LoginPage->setStyleSheet(QStringLiteral("background-color: white;"));
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(190, 200, 113, 32));
        registerButton = new QPushButton(LoginPage);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(310, 200, 113, 32));
        userNameEdit = new QLineEdit(LoginPage);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));
        userNameEdit->setGeometry(QRect(220, 100, 171, 21));
        passwordEdit = new QLineEdit(LoginPage);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(220, 140, 171, 21));
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 120, 60, 16));
        label_4 = new QLabel(LoginPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 80, 71, 16));
        wrongUserLabel = new QLabel(LoginPage);
        wrongUserLabel->setObjectName(QStringLiteral("wrongUserLabel"));
        wrongUserLabel->setGeometry(QRect(220, 270, 171, 16));
        wrongUserLabel->setStyleSheet(QStringLiteral("color: red;"));
        stackedWidget->addWidget(LoginPage);
        UserMenuPage = new QWidget();
        UserMenuPage->setObjectName(QStringLiteral("UserMenuPage"));
        label_2 = new QLabel(UserMenuPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 20, 71, 16));
        stackedWidget->addWidget(UserMenuPage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Form", nullptr));
        label->setText(QApplication::translate("Application", "SAS Pet Kennel", nullptr));
        loginButton->setText(QApplication::translate("Application", "Login", nullptr));
        registerButton->setText(QApplication::translate("Application", "Register", nullptr));
        label_3->setText(QApplication::translate("Application", "Password", nullptr));
        label_4->setText(QApplication::translate("Application", "Username", nullptr));
        wrongUserLabel->setText(QApplication::translate("Application", "Wrong Username/Password", nullptr));
        label_2->setText(QApplication::translate("Application", "User Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
