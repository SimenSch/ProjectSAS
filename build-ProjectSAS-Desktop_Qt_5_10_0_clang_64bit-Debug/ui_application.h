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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
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
    QLabel *errorLabel;
    QLabel *sasPicLabel;
    QWidget *mainPage;
    QStackedWidget *mainStack;
    QWidget *customerPage;
    QTabWidget *customerTab;
    QWidget *OverviewTab_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *Hei_3;
    QTableView *petTableView;
    QPushButton *addPetButton;
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
    QLabel *activeUserLabel;
    QWidget *registerPetPage;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_27;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *petNameEdit;
    QComboBox *typeCombobox;
    QLineEdit *raceEdit;
    QDateEdit *petBirthEdit;
    QTextEdit *petNotesEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addPetToDBButton;
    QPushButton *cancelPetAddButton;
    QWidget *userChoicePage;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *chooseUserTypeButton;
    QPushButton *cancelUserChoiceButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *customerRadioButton;
    QRadioButton *employeeRadioButton;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *employeeKeyLabel;
    QLineEdit *employeeKeyInput;
    QLabel *invalidKeyLabel;
    QWidget *registerCustomerPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *firstNameInput;
    QLineEdit *surNameInput;
    QLineEdit *dateOfBirthInput;
    QLineEdit *addressInput;
    QLineEdit *cityInput;
    QLineEdit *zipInput;
    QLineEdit *phoneinput;
    QLineEdit *eMailInput;
    QLineEdit *passwordInput;
    QLineEdit *reEnterPasswordInput;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_28;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelRegisterButton;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *firstNameMsg;
    QLabel *surNameMsg;
    QLabel *dateOfBirthMsg;
    QLabel *addressMsg;
    QLabel *cityMsg;
    QLabel *zipMsg;
    QLabel *phoneMsg;
    QLabel *emailMsg;
    QLabel *firstPasswordMsg;
    QLabel *secondPasswordMsg;
    QLabel *generalMsg;
    QWidget *registerEmployeePage;

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
        passwordEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(LoginPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 340, 60, 16));
        label_4 = new QLabel(LoginPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 290, 71, 16));
        errorLabel = new QLabel(LoginPage);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(310, 440, 171, 16));
        errorLabel->setStyleSheet(QStringLiteral("color: red;"));
        errorLabel->setAlignment(Qt::AlignCenter);
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
        customerTab = new QTabWidget(customerPage);
        customerTab->setObjectName(QStringLiteral("customerTab"));
        customerTab->setGeometry(QRect(10, 10, 761, 521));
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
        customerTab->addTab(OverviewTab_3, QString());
        Hei_3 = new QWidget();
        Hei_3->setObjectName(QStringLiteral("Hei_3"));
        petTableView = new QTableView(Hei_3);
        petTableView->setObjectName(QStringLiteral("petTableView"));
        petTableView->setGeometry(QRect(60, 60, 651, 351));
        addPetButton = new QPushButton(Hei_3);
        addPetButton->setObjectName(QStringLiteral("addPetButton"));
        addPetButton->setGeometry(QRect(320, 430, 113, 32));
        customerTab->addTab(Hei_3, QString());
        Appointments_3 = new QWidget();
        Appointments_3->setObjectName(QStringLiteral("Appointments_3"));
        customerTab->addTab(Appointments_3, QString());
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
        switchUserButton->setGeometry(QRect(650, 10, 113, 32));
        activeUserLabel = new QLabel(mainPage);
        activeUserLabel->setObjectName(QStringLiteral("activeUserLabel"));
        activeUserLabel->setGeometry(QRect(10, 20, 141, 16));
        stackedWidget->addWidget(mainPage);
        registerPetPage = new QWidget();
        registerPetPage->setObjectName(QStringLiteral("registerPetPage"));
        layoutWidget_2 = new QWidget(registerPetPage);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 110, 122, 151));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_24);

        label_26 = new QLabel(layoutWidget_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_26);

        label_25 = new QLabel(layoutWidget_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_25);

        label_27 = new QLabel(layoutWidget_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_27);

        verticalLayoutWidget_2 = new QWidget(registerPetPage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(290, 110, 291, 261));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 4, 0, 0);
        petNameEdit = new QLineEdit(verticalLayoutWidget_2);
        petNameEdit->setObjectName(QStringLiteral("petNameEdit"));

        verticalLayout_3->addWidget(petNameEdit);

        typeCombobox = new QComboBox(verticalLayoutWidget_2);
        typeCombobox->addItem(QString());
        typeCombobox->addItem(QString());
        typeCombobox->addItem(QString());
        typeCombobox->addItem(QString());
        typeCombobox->setObjectName(QStringLiteral("typeCombobox"));

        verticalLayout_3->addWidget(typeCombobox);

        raceEdit = new QLineEdit(verticalLayoutWidget_2);
        raceEdit->setObjectName(QStringLiteral("raceEdit"));

        verticalLayout_3->addWidget(raceEdit);

        petBirthEdit = new QDateEdit(verticalLayoutWidget_2);
        petBirthEdit->setObjectName(QStringLiteral("petBirthEdit"));

        verticalLayout_3->addWidget(petBirthEdit);

        petNotesEdit = new QTextEdit(verticalLayoutWidget_2);
        petNotesEdit->setObjectName(QStringLiteral("petNotesEdit"));

        verticalLayout_3->addWidget(petNotesEdit);

        layoutWidget = new QWidget(registerPetPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 370, 285, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addPetToDBButton = new QPushButton(layoutWidget);
        addPetToDBButton->setObjectName(QStringLiteral("addPetToDBButton"));

        horizontalLayout_2->addWidget(addPetToDBButton);

        cancelPetAddButton = new QPushButton(layoutWidget);
        cancelPetAddButton->setObjectName(QStringLiteral("cancelPetAddButton"));

        horizontalLayout_2->addWidget(cancelPetAddButton);

        stackedWidget->addWidget(registerPetPage);
        userChoicePage = new QWidget();
        userChoicePage->setObjectName(QStringLiteral("userChoicePage"));
        horizontalLayoutWidget = new QWidget(userChoicePage);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(280, 350, 231, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        chooseUserTypeButton = new QPushButton(horizontalLayoutWidget);
        chooseUserTypeButton->setObjectName(QStringLiteral("chooseUserTypeButton"));

        horizontalLayout_3->addWidget(chooseUserTypeButton);

        cancelUserChoiceButton = new QPushButton(horizontalLayoutWidget);
        cancelUserChoiceButton->setObjectName(QStringLiteral("cancelUserChoiceButton"));

        horizontalLayout_3->addWidget(cancelUserChoiceButton);

        horizontalLayoutWidget_2 = new QWidget(userChoicePage);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(280, 320, 231, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        customerRadioButton = new QRadioButton(horizontalLayoutWidget_2);
        customerRadioButton->setObjectName(QStringLiteral("customerRadioButton"));
        customerRadioButton->setStyleSheet(QStringLiteral("margin-left: 20px;"));
        customerRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(customerRadioButton);

        employeeRadioButton = new QRadioButton(horizontalLayoutWidget_2);
        employeeRadioButton->setObjectName(QStringLiteral("employeeRadioButton"));

        horizontalLayout_4->addWidget(employeeRadioButton);

        label_29 = new QLabel(userChoicePage);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(300, 120, 191, 71));
        label_29->setStyleSheet(QStringLiteral("font-size: 30px;"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(userChoicePage);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(300, 280, 181, 16));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(userChoicePage);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(300, 300, 181, 16));
        label_31->setAlignment(Qt::AlignCenter);
        employeeKeyLabel = new QLabel(userChoicePage);
        employeeKeyLabel->setObjectName(QStringLiteral("employeeKeyLabel"));
        employeeKeyLabel->setEnabled(true);
        employeeKeyLabel->setGeometry(QRect(300, 400, 181, 16));
        employeeKeyLabel->setAlignment(Qt::AlignCenter);
        employeeKeyInput = new QLineEdit(userChoicePage);
        employeeKeyInput->setObjectName(QStringLiteral("employeeKeyInput"));
        employeeKeyInput->setEnabled(true);
        employeeKeyInput->setGeometry(QRect(282, 420, 231, 21));
        invalidKeyLabel = new QLabel(userChoicePage);
        invalidKeyLabel->setObjectName(QStringLiteral("invalidKeyLabel"));
        invalidKeyLabel->setEnabled(true);
        invalidKeyLabel->setGeometry(QRect(300, 450, 181, 16));
        invalidKeyLabel->setStyleSheet(QStringLiteral("color: red;"));
        invalidKeyLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(userChoicePage);
        registerCustomerPage = new QWidget();
        registerCustomerPage->setObjectName(QStringLiteral("registerCustomerPage"));
        verticalLayoutWidget = new QWidget(registerCustomerPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 150, 291, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        firstNameInput = new QLineEdit(verticalLayoutWidget);
        firstNameInput->setObjectName(QStringLiteral("firstNameInput"));

        verticalLayout->addWidget(firstNameInput);

        surNameInput = new QLineEdit(verticalLayoutWidget);
        surNameInput->setObjectName(QStringLiteral("surNameInput"));

        verticalLayout->addWidget(surNameInput);

        dateOfBirthInput = new QLineEdit(verticalLayoutWidget);
        dateOfBirthInput->setObjectName(QStringLiteral("dateOfBirthInput"));

        verticalLayout->addWidget(dateOfBirthInput);

        addressInput = new QLineEdit(verticalLayoutWidget);
        addressInput->setObjectName(QStringLiteral("addressInput"));

        verticalLayout->addWidget(addressInput);

        cityInput = new QLineEdit(verticalLayoutWidget);
        cityInput->setObjectName(QStringLiteral("cityInput"));

        verticalLayout->addWidget(cityInput);

        zipInput = new QLineEdit(verticalLayoutWidget);
        zipInput->setObjectName(QStringLiteral("zipInput"));

        verticalLayout->addWidget(zipInput);

        phoneinput = new QLineEdit(verticalLayoutWidget);
        phoneinput->setObjectName(QStringLiteral("phoneinput"));

        verticalLayout->addWidget(phoneinput);

        eMailInput = new QLineEdit(verticalLayoutWidget);
        eMailInput->setObjectName(QStringLiteral("eMailInput"));

        verticalLayout->addWidget(eMailInput);

        passwordInput = new QLineEdit(verticalLayoutWidget);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordInput);

        reEnterPasswordInput = new QLineEdit(verticalLayoutWidget);
        reEnterPasswordInput->setObjectName(QStringLiteral("reEnterPasswordInput"));
        reEnterPasswordInput->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(reEnterPasswordInput);

        layoutWidget1 = new QWidget(registerCustomerPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 150, 122, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);

        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_28);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_8);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_19);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_20);

        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_21);

        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_22);

        widget = new QWidget(registerCustomerPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(290, 440, 289, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        horizontalLayout->addWidget(registerButton);

        cancelRegisterButton = new QPushButton(widget);
        cancelRegisterButton->setObjectName(QStringLiteral("cancelRegisterButton"));

        horizontalLayout->addWidget(cancelRegisterButton);

        layoutWidget_3 = new QWidget(registerCustomerPage);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(600, 150, 122, 291));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        firstNameMsg = new QLabel(layoutWidget_3);
        firstNameMsg->setObjectName(QStringLiteral("firstNameMsg"));
        firstNameMsg->setLayoutDirection(Qt::RightToLeft);
        firstNameMsg->setStyleSheet(QStringLiteral("color: red;"));
        firstNameMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(firstNameMsg);

        surNameMsg = new QLabel(layoutWidget_3);
        surNameMsg->setObjectName(QStringLiteral("surNameMsg"));
        surNameMsg->setLayoutDirection(Qt::RightToLeft);
        surNameMsg->setStyleSheet(QStringLiteral("color: red;"));
        surNameMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(surNameMsg);

        dateOfBirthMsg = new QLabel(layoutWidget_3);
        dateOfBirthMsg->setObjectName(QStringLiteral("dateOfBirthMsg"));
        dateOfBirthMsg->setLayoutDirection(Qt::RightToLeft);
        dateOfBirthMsg->setStyleSheet(QStringLiteral("color: red;"));
        dateOfBirthMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(dateOfBirthMsg);

        addressMsg = new QLabel(layoutWidget_3);
        addressMsg->setObjectName(QStringLiteral("addressMsg"));
        addressMsg->setLayoutDirection(Qt::RightToLeft);
        addressMsg->setStyleSheet(QStringLiteral("color: red;"));
        addressMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(addressMsg);

        cityMsg = new QLabel(layoutWidget_3);
        cityMsg->setObjectName(QStringLiteral("cityMsg"));
        cityMsg->setLayoutDirection(Qt::RightToLeft);
        cityMsg->setStyleSheet(QStringLiteral("color: red;"));
        cityMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(cityMsg);

        zipMsg = new QLabel(layoutWidget_3);
        zipMsg->setObjectName(QStringLiteral("zipMsg"));
        zipMsg->setLayoutDirection(Qt::RightToLeft);
        zipMsg->setStyleSheet(QStringLiteral("color: red;"));
        zipMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(zipMsg);

        phoneMsg = new QLabel(layoutWidget_3);
        phoneMsg->setObjectName(QStringLiteral("phoneMsg"));
        phoneMsg->setLayoutDirection(Qt::RightToLeft);
        phoneMsg->setStyleSheet(QStringLiteral("color: red;"));
        phoneMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(phoneMsg);

        emailMsg = new QLabel(layoutWidget_3);
        emailMsg->setObjectName(QStringLiteral("emailMsg"));
        emailMsg->setLayoutDirection(Qt::RightToLeft);
        emailMsg->setStyleSheet(QStringLiteral("color: red;"));
        emailMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(emailMsg);

        firstPasswordMsg = new QLabel(layoutWidget_3);
        firstPasswordMsg->setObjectName(QStringLiteral("firstPasswordMsg"));
        firstPasswordMsg->setLayoutDirection(Qt::RightToLeft);
        firstPasswordMsg->setStyleSheet(QStringLiteral("color: red;"));
        firstPasswordMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(firstPasswordMsg);

        secondPasswordMsg = new QLabel(layoutWidget_3);
        secondPasswordMsg->setObjectName(QStringLiteral("secondPasswordMsg"));
        secondPasswordMsg->setLayoutDirection(Qt::RightToLeft);
        secondPasswordMsg->setStyleSheet(QStringLiteral("color: red;"));
        secondPasswordMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(secondPasswordMsg);

        generalMsg = new QLabel(registerCustomerPage);
        generalMsg->setObjectName(QStringLiteral("generalMsg"));
        generalMsg->setGeometry(QRect(290, 480, 291, 22));
        generalMsg->setLayoutDirection(Qt::RightToLeft);
        generalMsg->setStyleSheet(QStringLiteral("color: red;"));
        generalMsg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidget->addWidget(registerCustomerPage);
        registerEmployeePage = new QWidget();
        registerEmployeePage->setObjectName(QStringLiteral("registerEmployeePage"));
        stackedWidget->addWidget(registerEmployeePage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(1);
        mainStack->setCurrentIndex(0);
        customerTab->setCurrentIndex(1);
        tabWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Form", nullptr));
        loginButton->setText(QApplication::translate("Application", "Login", nullptr));
        newUserButton->setText(QApplication::translate("Application", "New User", nullptr));
        label_3->setText(QApplication::translate("Application", "Password", nullptr));
        label_4->setText(QApplication::translate("Application", "Username", nullptr));
        errorLabel->setText(QApplication::translate("Application", "error message", nullptr));
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
        customerTab->setTabText(customerTab->indexOf(OverviewTab_3), QApplication::translate("Application", "Overview", nullptr));
        addPetButton->setText(QApplication::translate("Application", "Add Pet", nullptr));
        customerTab->setTabText(customerTab->indexOf(Hei_3), QApplication::translate("Application", "Pets", nullptr));
        customerTab->setTabText(customerTab->indexOf(Appointments_3), QApplication::translate("Application", "Appointments", nullptr));
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
        activeUserLabel->setText(QApplication::translate("Application", "user", nullptr));
        label_23->setText(QApplication::translate("Application", "Name:", nullptr));
        label_24->setText(QApplication::translate("Application", "Type:", nullptr));
        label_26->setText(QApplication::translate("Application", "Race:", nullptr));
        label_25->setText(QApplication::translate("Application", "Date of birth:", nullptr));
        label_27->setText(QApplication::translate("Application", "Notes:", nullptr));
        typeCombobox->setItemText(0, QApplication::translate("Application", "Dog", nullptr));
        typeCombobox->setItemText(1, QApplication::translate("Application", "Cat", nullptr));
        typeCombobox->setItemText(2, QApplication::translate("Application", "Rat", nullptr));
        typeCombobox->setItemText(3, QString());

        addPetToDBButton->setText(QApplication::translate("Application", "Add", nullptr));
        cancelPetAddButton->setText(QApplication::translate("Application", "Cancel", nullptr));
        chooseUserTypeButton->setText(QApplication::translate("Application", "Choose", nullptr));
        cancelUserChoiceButton->setText(QApplication::translate("Application", "Cancel", nullptr));
        customerRadioButton->setText(QApplication::translate("Application", "Customer", nullptr));
        employeeRadioButton->setText(QApplication::translate("Application", "Employee", nullptr));
        label_29->setText(QApplication::translate("Application", "New User", nullptr));
        label_30->setText(QApplication::translate("Application", "Please choose the user type", nullptr));
        label_31->setText(QApplication::translate("Application", "you would like to create:", nullptr));
        employeeKeyLabel->setText(QApplication::translate("Application", "Please enter employee key:", nullptr));
        invalidKeyLabel->setText(QApplication::translate("Application", "ERROR: Invalid key", nullptr));
        label_2->setText(QApplication::translate("Application", "First Name:", nullptr));
        label_5->setText(QApplication::translate("Application", "Surname:", nullptr));
        label_28->setText(QApplication::translate("Application", "Date of birth", nullptr));
        label_6->setText(QApplication::translate("Application", "Address:", nullptr));
        label_7->setText(QApplication::translate("Application", "City:", nullptr));
        label_8->setText(QApplication::translate("Application", "Zip:", nullptr));
        label_19->setText(QApplication::translate("Application", "Phone:", nullptr));
        label_20->setText(QApplication::translate("Application", "E-Mail:", nullptr));
        label_21->setText(QApplication::translate("Application", "Password:", nullptr));
        label_22->setText(QApplication::translate("Application", "Re-enter password:", nullptr));
        registerButton->setText(QApplication::translate("Application", "Register", nullptr));
        cancelRegisterButton->setText(QApplication::translate("Application", "Cancel", nullptr));
        firstNameMsg->setText(QApplication::translate("Application", "*", nullptr));
        surNameMsg->setText(QApplication::translate("Application", "*", nullptr));
        dateOfBirthMsg->setText(QApplication::translate("Application", "*", nullptr));
        addressMsg->setText(QApplication::translate("Application", "*", nullptr));
        cityMsg->setText(QApplication::translate("Application", "*", nullptr));
        zipMsg->setText(QApplication::translate("Application", "*", nullptr));
        phoneMsg->setText(QApplication::translate("Application", "*", nullptr));
        emailMsg->setText(QApplication::translate("Application", "*", nullptr));
        firstPasswordMsg->setText(QApplication::translate("Application", "*", nullptr));
        secondPasswordMsg->setText(QApplication::translate("Application", "*", nullptr));
        generalMsg->setText(QApplication::translate("Application", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
