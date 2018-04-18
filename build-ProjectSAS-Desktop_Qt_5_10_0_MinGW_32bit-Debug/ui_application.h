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
    QSplitter *splitter;
    QLabel *label;
    QLabel *userLabel;
    QPushButton *switchUserButton;
    QWidget *registerPage;
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
    QHBoxLayout *horizontalLayout;
    QPushButton *registerButton;
    QPushButton *cancelRegisterButton;
    QWidget *layoutWidget;
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
    QLineEdit *petNotesEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addPetToDBButton;
    QPushButton *cancelPetAddButton;

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
        loadPetsButton->setGeometry(QRect(240, 430, 113, 32));
        addPetButton = new QPushButton(Hei_3);
        addPetButton->setObjectName(QStringLiteral("addPetButton"));
        addPetButton->setGeometry(QRect(390, 430, 113, 32));
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
        verticalLayoutWidget->setGeometry(QRect(290, 150, 291, 322));
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

        verticalLayout->addWidget(passwordInput);

        reEnterPasswordInput = new QLineEdit(verticalLayoutWidget);
        reEnterPasswordInput->setObjectName(QStringLiteral("reEnterPasswordInput"));

        verticalLayout->addWidget(reEnterPasswordInput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        registerButton = new QPushButton(verticalLayoutWidget);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        horizontalLayout->addWidget(registerButton);

        cancelRegisterButton = new QPushButton(verticalLayoutWidget);
        cancelRegisterButton->setObjectName(QStringLiteral("cancelRegisterButton"));

        horizontalLayout->addWidget(cancelRegisterButton);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget = new QWidget(registerPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 150, 122, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_5);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_28);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_8);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_19);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_20);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_21);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_22);

        stackedWidget->addWidget(registerPage);
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
        verticalLayoutWidget_2->setGeometry(QRect(290, 110, 291, 151));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
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

        petNotesEdit = new QLineEdit(verticalLayoutWidget_2);
        petNotesEdit->setObjectName(QStringLiteral("petNotesEdit"));

        verticalLayout_3->addWidget(petNotesEdit);

        layoutWidget1 = new QWidget(registerPetPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 280, 285, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addPetToDBButton = new QPushButton(layoutWidget1);
        addPetToDBButton->setObjectName(QStringLiteral("addPetToDBButton"));

        horizontalLayout_2->addWidget(addPetToDBButton);

        cancelPetAddButton = new QPushButton(layoutWidget1);
        cancelPetAddButton->setObjectName(QStringLiteral("cancelPetAddButton"));

        horizontalLayout_2->addWidget(cancelPetAddButton);

        stackedWidget->addWidget(registerPetPage);

        retranslateUi(Application);

        stackedWidget->setCurrentIndex(2);
        mainStack->setCurrentIndex(0);
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
        addPetButton->setText(QApplication::translate("Application", "Add Pet", nullptr));
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
        registerButton->setText(QApplication::translate("Application", "Register", nullptr));
        cancelRegisterButton->setText(QApplication::translate("Application", "Cancel", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
