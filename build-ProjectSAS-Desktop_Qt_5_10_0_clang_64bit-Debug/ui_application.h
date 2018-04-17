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
#include <QtWidgets/QTableView>
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
    QLabel *sasPicLabel;
    QWidget *mainPage;
    QStackedWidget *mainStack;
    QWidget *customerPage;
    QTabWidget *tabWidget_3;
    QWidget *OverviewTab_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *Hei_3;
    QWidget *Appointments_3;
    QWidget *employeePage;
    QTabWidget *tabWidget_4;
    QWidget *OverviewTab_4;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QTableView *tableView;
    QWidget *Hei_4;
    QWidget *Appointments_4;
    QPushButton *switchUserButton;
    QLabel *label;
    QLabel *userLabel;

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
        sasPicLabel = new QLabel(LoginPage);
        sasPicLabel->setObjectName(QStringLiteral("sasPicLabel"));
        sasPicLabel->setGeometry(QRect(300, 100, 201, 121));
        sasPicLabel->setPixmap(QPixmap(QString::fromUtf8("../build-ProjectSAS-Desktop_Qt_5_10_0_clang_64bit-Debug/sas.svg")));
        stackedWidget->addWidget(LoginPage);
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        mainStack = new QStackedWidget(mainPage);
        mainStack->setObjectName(QStringLiteral("mainStack"));
        mainStack->setGeometry(QRect(0, 39, 781, 551));
        customerPage = new QWidget();
        customerPage->setObjectName(QStringLiteral("customerPage"));
        tabWidget_3 = new QTabWidget(customerPage);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 10, 761, 521));
        OverviewTab_3 = new QWidget();
        OverviewTab_3->setObjectName(QStringLiteral("OverviewTab_3"));
        label_9 = new QLabel(OverviewTab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 130, 60, 16));
        label_10 = new QLabel(OverviewTab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 150, 81, 16));
        label_12 = new QLabel(OverviewTab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 70, 71, 16));
        label_13 = new QLabel(OverviewTab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 90, 60, 16));
        label_14 = new QLabel(OverviewTab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 110, 60, 16));
        tabWidget_3->addTab(OverviewTab_3, QString());
        Hei_3 = new QWidget();
        Hei_3->setObjectName(QStringLiteral("Hei_3"));
        tabWidget_3->addTab(Hei_3, QString());
        Appointments_3 = new QWidget();
        Appointments_3->setObjectName(QStringLiteral("Appointments_3"));
        tabWidget_3->addTab(Appointments_3, QString());
        mainStack->addWidget(customerPage);
        employeePage = new QWidget();
        employeePage->setObjectName(QStringLiteral("employeePage"));
        tabWidget_4 = new QTabWidget(employeePage);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(10, 10, 761, 521));
        OverviewTab_4 = new QWidget();
        OverviewTab_4->setObjectName(QStringLiteral("OverviewTab_4"));
        label_11 = new QLabel(OverviewTab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 130, 60, 16));
        label_15 = new QLabel(OverviewTab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 150, 81, 16));
        label_16 = new QLabel(OverviewTab_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 70, 71, 16));
        label_17 = new QLabel(OverviewTab_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(90, 90, 60, 16));
        label_18 = new QLabel(OverviewTab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 110, 60, 16));
        tableView = new QTableView(OverviewTab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(290, 60, 256, 192));
        tabWidget_4->addTab(OverviewTab_4, QString());
        Hei_4 = new QWidget();
        Hei_4->setObjectName(QStringLiteral("Hei_4"));
        tabWidget_4->addTab(Hei_4, QString());
        Appointments_4 = new QWidget();
        Appointments_4->setObjectName(QStringLiteral("Appointments_4"));
        tabWidget_4->addTab(Appointments_4, QString());
        mainStack->addWidget(employeePage);
        switchUserButton = new QPushButton(mainPage);
        switchUserButton->setObjectName(QStringLiteral("switchUserButton"));
        switchUserButton->setGeometry(QRect(650, 20, 113, 31));
        label = new QLabel(mainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 10, 91, 16));
        userLabel = new QLabel(mainPage);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(490, 30, 81, 16));
        userLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(mainPage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);


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
        sasPicLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        OverviewTab_3->setToolTip(QApplication::translate("Application", "<html><head/><body><p>Overview</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        OverviewTab_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_9->setText(QApplication::translate("Application", "Zip", nullptr));
        label_10->setText(QApplication::translate("Application", "Penis length", nullptr));
        label_12->setText(QApplication::translate("Application", "First Name", nullptr));
        label_13->setText(QApplication::translate("Application", "Surname", nullptr));
        label_14->setText(QApplication::translate("Application", "Address", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(OverviewTab_3), QApplication::translate("Application", "Overview", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Hei_3), QApplication::translate("Application", "Pets", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Appointments_3), QApplication::translate("Application", "Appointments", nullptr));
#ifndef QT_NO_TOOLTIP
        OverviewTab_4->setToolTip(QApplication::translate("Application", "<html><head/><body><p>Overview</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        OverviewTab_4->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("Application", "Zip", nullptr));
        label_15->setText(QApplication::translate("Application", "Penis length", nullptr));
        label_16->setText(QApplication::translate("Application", "First Name", nullptr));
        label_17->setText(QApplication::translate("Application", "Surname", nullptr));
        label_18->setText(QApplication::translate("Application", "Address", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(OverviewTab_4), QApplication::translate("Application", "Overview", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(Hei_4), QApplication::translate("Application", "Pets", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(Appointments_4), QApplication::translate("Application", "Appointments", nullptr));
        switchUserButton->setText(QApplication::translate("Application", "Switch User", nullptr));
        label->setText(QApplication::translate("Application", "Logged in as:", nullptr));
        userLabel->setText(QApplication::translate("Application", "user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
