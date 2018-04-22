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
#include <QtWidgets/QSpacerItem>
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
    QLabel *label;
    QLabel *label_32;
    QWidget *mainPage;
    QStackedWidget *mainStack;
    QWidget *customerPage;
    QTabWidget *customerTab;
    QWidget *overviewTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *firstNameInfoCustomer;
    QLabel *surNameInfoCustomer;
    QLabel *addressInfoCustomer;
    QLabel *zipInfoCustomer;
    QLabel *cityInfoCustomer;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_36;
    QTableView *petTableOverview;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *viewPetsButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_37;
    QTableView *appTableOverview;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *viewAppButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *Hei_3;
    QTableView *petTableView;
    QPushButton *addPetButton;
    QWidget *Appointments_3;
    QTableView *appTableView;
    QPushButton *addAppButton;
    QWidget *employeePage;
    QTabWidget *tabWidget_4;
    QWidget *OverviewTab_4;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_11;
    QLabel *label_18;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *firstNameInfoCustomer_2;
    QLabel *surNameInfoCustomer_2;
    QLabel *addressInfoCustomer_2;
    QLabel *zipInfoCustomer_2;
    QLabel *cityInfoCustomer_2;
    QTableView *shiftsTableView_2;
    QWidget *Hei_4;
    QTableView *shiftsTableView;
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
    QWidget *layoutWidget2;
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
        sasPicLabel->setGeometry(QRect(300, 80, 201, 121));
        sasPicLabel->setPixmap(QPixmap(QString::fromUtf8("../build-ProjectSAS-Desktop_Qt_5_10_0_clang_64bit-Debug/sas.svg")));
        label = new QLabel(LoginPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 200, 141, 16));
        label->setStyleSheet(QStringLiteral("font-size: 20px;"));
        label->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(LoginPage);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(270, 240, 261, 16));
        label_32->setStyleSheet(QStringLiteral("font-style: italic;"));
        label_32->setAlignment(Qt::AlignCenter);
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
        overviewTab = new QWidget();
        overviewTab->setObjectName(QStringLiteral("overviewTab"));
        verticalLayoutWidget_3 = new QWidget(overviewTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(180, 60, 160, 114));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(verticalLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_14);

        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_10);

        verticalLayoutWidget_4 = new QWidget(overviewTab);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(410, 60, 160, 114));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        firstNameInfoCustomer = new QLabel(verticalLayoutWidget_4);
        firstNameInfoCustomer->setObjectName(QStringLiteral("firstNameInfoCustomer"));

        verticalLayout_7->addWidget(firstNameInfoCustomer);

        surNameInfoCustomer = new QLabel(verticalLayoutWidget_4);
        surNameInfoCustomer->setObjectName(QStringLiteral("surNameInfoCustomer"));

        verticalLayout_7->addWidget(surNameInfoCustomer);

        addressInfoCustomer = new QLabel(verticalLayoutWidget_4);
        addressInfoCustomer->setObjectName(QStringLiteral("addressInfoCustomer"));

        verticalLayout_7->addWidget(addressInfoCustomer);

        zipInfoCustomer = new QLabel(verticalLayoutWidget_4);
        zipInfoCustomer->setObjectName(QStringLiteral("zipInfoCustomer"));

        verticalLayout_7->addWidget(zipInfoCustomer);

        cityInfoCustomer = new QLabel(verticalLayoutWidget_4);
        cityInfoCustomer->setObjectName(QStringLiteral("cityInfoCustomer"));

        verticalLayout_7->addWidget(cityInfoCustomer);

        verticalLayoutWidget_5 = new QWidget(overviewTab);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 220, 321, 251));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(verticalLayoutWidget_5);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_36);

        petTableOverview = new QTableView(verticalLayoutWidget_5);
        petTableOverview->setObjectName(QStringLiteral("petTableOverview"));

        verticalLayout_8->addWidget(petTableOverview);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        viewPetsButton = new QPushButton(verticalLayoutWidget_5);
        viewPetsButton->setObjectName(QStringLiteral("viewPetsButton"));

        horizontalLayout_5->addWidget(viewPetsButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_5);

        verticalLayoutWidget_6 = new QWidget(overviewTab);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(410, 220, 321, 251));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(verticalLayoutWidget_6);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_37);

        appTableOverview = new QTableView(verticalLayoutWidget_6);
        appTableOverview->setObjectName(QStringLiteral("appTableOverview"));

        verticalLayout_9->addWidget(appTableOverview);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        viewAppButton = new QPushButton(verticalLayoutWidget_6);
        viewAppButton->setObjectName(QStringLiteral("viewAppButton"));

        horizontalLayout_6->addWidget(viewAppButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_6);

        customerTab->addTab(overviewTab, QString());
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
        appTableView = new QTableView(Appointments_3);
        appTableView->setObjectName(QStringLiteral("appTableView"));
        appTableView->setGeometry(QRect(60, 60, 651, 351));
        addAppButton = new QPushButton(Appointments_3);
        addAppButton->setObjectName(QStringLiteral("addAppButton"));
        addAppButton->setGeometry(QRect(300, 430, 151, 32));
        customerTab->addTab(Appointments_3, QString());
        mainStack->addWidget(customerPage);
        employeePage = new QWidget();
        employeePage->setObjectName(QStringLiteral("employeePage"));
        tabWidget_4 = new QTabWidget(employeePage);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(10, 10, 761, 521));
        OverviewTab_4 = new QWidget();
        OverviewTab_4->setObjectName(QStringLiteral("OverviewTab_4"));
        verticalLayoutWidget_7 = new QWidget(OverviewTab_4);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(180, 90, 160, 114));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_15);

        label_16 = new QLabel(verticalLayoutWidget_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_16);

        label_17 = new QLabel(verticalLayoutWidget_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_17);

        label_11 = new QLabel(verticalLayoutWidget_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_11);

        label_18 = new QLabel(verticalLayoutWidget_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label_18);

        verticalLayoutWidget_8 = new QWidget(OverviewTab_4);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(410, 90, 160, 114));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        firstNameInfoCustomer_2 = new QLabel(verticalLayoutWidget_8);
        firstNameInfoCustomer_2->setObjectName(QStringLiteral("firstNameInfoCustomer_2"));

        verticalLayout_11->addWidget(firstNameInfoCustomer_2);

        surNameInfoCustomer_2 = new QLabel(verticalLayoutWidget_8);
        surNameInfoCustomer_2->setObjectName(QStringLiteral("surNameInfoCustomer_2"));

        verticalLayout_11->addWidget(surNameInfoCustomer_2);

        addressInfoCustomer_2 = new QLabel(verticalLayoutWidget_8);
        addressInfoCustomer_2->setObjectName(QStringLiteral("addressInfoCustomer_2"));

        verticalLayout_11->addWidget(addressInfoCustomer_2);

        zipInfoCustomer_2 = new QLabel(verticalLayoutWidget_8);
        zipInfoCustomer_2->setObjectName(QStringLiteral("zipInfoCustomer_2"));

        verticalLayout_11->addWidget(zipInfoCustomer_2);

        cityInfoCustomer_2 = new QLabel(verticalLayoutWidget_8);
        cityInfoCustomer_2->setObjectName(QStringLiteral("cityInfoCustomer_2"));

        verticalLayout_11->addWidget(cityInfoCustomer_2);

        shiftsTableView_2 = new QTableView(OverviewTab_4);
        shiftsTableView_2->setObjectName(QStringLiteral("shiftsTableView_2"));
        shiftsTableView_2->setGeometry(QRect(80, 230, 611, 221));
        tabWidget_4->addTab(OverviewTab_4, QString());
        Hei_4 = new QWidget();
        Hei_4->setObjectName(QStringLiteral("Hei_4"));
        shiftsTableView = new QTableView(Hei_4);
        shiftsTableView->setObjectName(QStringLiteral("shiftsTableView"));
        shiftsTableView->setGeometry(QRect(60, 70, 651, 351));
        tabWidget_4->addTab(Hei_4, QString());
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
        verticalLayoutWidget->setGeometry(QRect(290, 150, 291, 302));
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

        layoutWidget2 = new QWidget(registerCustomerPage);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 440, 289, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        registerButton = new QPushButton(layoutWidget2);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        horizontalLayout->addWidget(registerButton);

        cancelRegisterButton = new QPushButton(layoutWidget2);
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
        mainStack->setCurrentIndex(1);
        customerTab->setCurrentIndex(2);
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
        errorLabel->setText(QApplication::translate("Application", "error message", nullptr));
        sasPicLabel->setText(QString());
        label->setText(QApplication::translate("Application", "Pet Kennel", nullptr));
        label_32->setText(QApplication::translate("Application", "- give your pet the holiday it deserves", nullptr));
#ifndef QT_NO_TOOLTIP
        overviewTab->setToolTip(QApplication::translate("Application", "<html><head/><body><p>Overview</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        overviewTab->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("Application", "First Name", nullptr));
        label_13->setText(QApplication::translate("Application", "Surname", nullptr));
        label_14->setText(QApplication::translate("Application", "Address", nullptr));
        label_9->setText(QApplication::translate("Application", "Zip", nullptr));
        label_10->setText(QApplication::translate("Application", "City", nullptr));
        firstNameInfoCustomer->setText(QApplication::translate("Application", "firstName", nullptr));
        surNameInfoCustomer->setText(QApplication::translate("Application", "surName", nullptr));
        addressInfoCustomer->setText(QApplication::translate("Application", "address", nullptr));
        zipInfoCustomer->setText(QApplication::translate("Application", "zip", nullptr));
        cityInfoCustomer->setText(QApplication::translate("Application", "City", nullptr));
        label_36->setText(QApplication::translate("Application", "Pets", nullptr));
        viewPetsButton->setText(QApplication::translate("Application", "View", nullptr));
        label_37->setText(QApplication::translate("Application", "Appointments", nullptr));
        viewAppButton->setText(QApplication::translate("Application", "View", nullptr));
        customerTab->setTabText(customerTab->indexOf(overviewTab), QApplication::translate("Application", "Overview", nullptr));
        addPetButton->setText(QApplication::translate("Application", "Add Pet", nullptr));
        customerTab->setTabText(customerTab->indexOf(Hei_3), QApplication::translate("Application", "Pets", nullptr));
        addAppButton->setText(QApplication::translate("Application", "New Appointment", nullptr));
        customerTab->setTabText(customerTab->indexOf(Appointments_3), QApplication::translate("Application", "Appointments", nullptr));
#ifndef QT_NO_TOOLTIP
        OverviewTab_4->setToolTip(QApplication::translate("Application", "<html><head/><body><p>Overview</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        OverviewTab_4->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_15->setText(QApplication::translate("Application", "First Name", nullptr));
        label_16->setText(QApplication::translate("Application", "Surname", nullptr));
        label_17->setText(QApplication::translate("Application", "Address", nullptr));
        label_11->setText(QApplication::translate("Application", "Zip", nullptr));
        label_18->setText(QApplication::translate("Application", "City", nullptr));
        firstNameInfoCustomer_2->setText(QApplication::translate("Application", "firstName", nullptr));
        surNameInfoCustomer_2->setText(QApplication::translate("Application", "surName", nullptr));
        addressInfoCustomer_2->setText(QApplication::translate("Application", "address", nullptr));
        zipInfoCustomer_2->setText(QApplication::translate("Application", "zip", nullptr));
        cityInfoCustomer_2->setText(QApplication::translate("Application", "City", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(OverviewTab_4), QApplication::translate("Application", "Overview", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(Hei_4), QApplication::translate("Application", "Shifts", nullptr));
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
