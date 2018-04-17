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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QPushButton *loginButton;
    QPushButton *newUserButton;
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
    QTableView *petTableView;
    QPushButton *loadPetsButton;
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
    QSplitter *splitter;
    QLabel *label;
    QLabel *userLabel;
    QPushButton *switchUserButton;
    QWidget *registerPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *cancelRegisterButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;

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
        newUserButton = new QPushButton(LoginPage);
        newUserButton->setObjectName(QStringLiteral("newUserButton"));
        newUserButton->setGeometry(QRect(410, 400, 113, 32));
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
        petTableView = new QTableView(Hei_3);
        petTableView->setObjectName(QStringLiteral("petTableView"));
        petTableView->setGeometry(QRect(160, 60, 431, 351));
        loadPetsButton = new QPushButton(Hei_3);
        loadPetsButton->setObjectName(QStringLiteral("loadPetsButton"));
        loadPetsButton->setGeometry(QRect(320, 430, 113, 32));
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
        splitter = new QSplitter(mainPage);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(490, 10, 224, 32));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        splitter->addWidget(label);
        userLabel = new QLabel(splitter);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setAlignment(Qt::AlignCenter);
        splitter->addWidget(userLabel);
        switchUserButton = new QPushButton(splitter);
        switchUserButton->setObjectName(QStringLiteral("switchUserButton"));
        splitter->addWidget(switchUserButton);
        stackedWidget->addWidget(mainPage);
        registerPage = new QWidget();
        registerPage->setObjectName(QStringLiteral("registerPage"));
        verticalLayoutWidget = new QWidget(registerPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 150, 291, 313));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout->addWidget(lineEdit_10);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_12 = new QLineEdit(verticalLayoutWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout->addWidget(lineEdit_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        cancelRegisterButton = new QPushButton(verticalLayoutWidget);
        cancelRegisterButton->setObjectName(QStringLiteral("cancelRegisterButton"));

        horizontalLayout->addWidget(cancelRegisterButton);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(registerPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(150, 150, 122, 271));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_8);

        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_19);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_20);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_21);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_22);

        stackedWidget->addWidget(registerPage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Form", nullptr));
        loginButton->setText(QApplication::translate("Application", "Login", nullptr));
        newUserButton->setText(QApplication::translate("Application", "New User", nullptr));
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
        loadPetsButton->setText(QApplication::translate("Application", "Load Pets", nullptr));
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
        label->setText(QApplication::translate("Application", "Logged in as:", nullptr));
        userLabel->setText(QApplication::translate("Application", "user", nullptr));
        switchUserButton->setText(QApplication::translate("Application", "Switch User", nullptr));
        pushButton_2->setText(QApplication::translate("Application", "Register", nullptr));
        cancelRegisterButton->setText(QApplication::translate("Application", "Cancel", nullptr));
        label_2->setText(QApplication::translate("Application", "First Name:", nullptr));
        label_5->setText(QApplication::translate("Application", "Surname:", nullptr));
        label_6->setText(QApplication::translate("Application", "Address:", nullptr));
        label_7->setText(QApplication::translate("Application", "City:", nullptr));
        label_8->setText(QApplication::translate("Application", "Zip:", nullptr));
        label_19->setText(QApplication::translate("Application", "Phone:", nullptr));
        label_20->setText(QApplication::translate("Application", "E-Mail:", nullptr));
        label_21->setText(QApplication::translate("Application", "Password:", nullptr));
        label_22->setText(QApplication::translate("Application", "Re-enter password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
