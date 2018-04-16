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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
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
    QTabWidget *tabWidget;
    QWidget *OverviewTab;
    QWidget *Hei;
    QWidget *Appointments;
    QWidget *EmployeePage;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *Appointments1;

    void setupUi(QWidget *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QStringLiteral("Application"));
        Application->resize(777, 589);
        stackedWidget = new QStackedWidget(Application);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 781, 591));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: white;"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QStringLiteral("LoginPage"));
        LoginPage->setStyleSheet(QStringLiteral("background-color: white;"));
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(280, 400, 113, 32));
        registerButton = new QPushButton(LoginPage);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(410, 400, 113, 32));
        userNameEdit = new QLineEdit(LoginPage);
        userNameEdit->setObjectName(QStringLiteral("userNameEdit"));
        userNameEdit->setGeometry(QRect(290, 310, 221, 21));
        passwordEdit = new QLineEdit(LoginPage);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(290, 360, 221, 21));
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 340, 60, 16));
        label_4 = new QLabel(LoginPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 290, 71, 16));
        wrongUserLabel = new QLabel(LoginPage);
        wrongUserLabel->setObjectName(QStringLiteral("wrongUserLabel"));
        wrongUserLabel->setGeometry(QRect(310, 440, 171, 16));
        wrongUserLabel->setStyleSheet(QStringLiteral("color: red;"));
        stackedWidget->addWidget(LoginPage);
        UserMenuPage = new QWidget();
        UserMenuPage->setObjectName(QStringLiteral("UserMenuPage"));
        tabWidget = new QTabWidget(UserMenuPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 761, 581));
        OverviewTab = new QWidget();
        OverviewTab->setObjectName(QStringLiteral("OverviewTab"));
        tabWidget->addTab(OverviewTab, QString());
        Hei = new QWidget();
        Hei->setObjectName(QStringLiteral("Hei"));
        tabWidget->addTab(Hei, QString());
        Appointments = new QWidget();
        Appointments->setObjectName(QStringLiteral("Appointments"));
        tabWidget->addTab(Appointments, QString());
        stackedWidget->addWidget(UserMenuPage);
        EmployeePage = new QWidget();
        EmployeePage->setObjectName(QStringLiteral("EmployeePage"));
        tabWidget_2 = new QTabWidget(EmployeePage);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 0, 761, 581));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 71, 16));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 60, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 110, 60, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 150, 81, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 130, 60, 16));
        tabWidget_2->addTab(tab, QString());
        Appointments1 = new QWidget();
        Appointments1->setObjectName(QStringLiteral("Appointments1"));
        tabWidget_2->addTab(Appointments1, QString());
        stackedWidget->addWidget(EmployeePage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Form", nullptr));
        loginButton->setText(QApplication::translate("Application", "Login", nullptr));
        registerButton->setText(QApplication::translate("Application", "Register", nullptr));
        label_3->setText(QApplication::translate("Application", "Password", nullptr));
        label_4->setText(QApplication::translate("Application", "Username", nullptr));
        wrongUserLabel->setText(QApplication::translate("Application", "Wrong Username/Password", nullptr));
#ifndef QT_NO_TOOLTIP
        OverviewTab->setToolTip(QApplication::translate("Application", "<html><head/><body><p>Overview</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        OverviewTab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(OverviewTab), QApplication::translate("Application", "Overview", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Hei), QApplication::translate("Application", "Pets", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Appointments), QApplication::translate("Application", "Appointments", nullptr));
        label->setText(QApplication::translate("Application", "First Name", nullptr));
        label_2->setText(QApplication::translate("Application", "Surname", nullptr));
        label_5->setText(QApplication::translate("Application", "Address", nullptr));
        label_6->setText(QApplication::translate("Application", "Penis length", nullptr));
        label_7->setText(QApplication::translate("Application", "Zip", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("Application", "Overview", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Appointments1), QApplication::translate("Application", "Appointments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
