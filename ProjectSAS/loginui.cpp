#include "loginui.h"
#include "mainui.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>

LoginUI::LoginUI(QWidget *parent)
    : QWidget(parent)
{
    welcomeLabel = new QLabel(tr("Welcome to SAS kennel service.\nPlease login to use our service."));
    welcomeLabel->setAlignment(Qt::AlignCenter);

    QHBoxLayout *loginLabelLayout = new QHBoxLayout;
    loginLabelLayout->addWidget(welcomeLabel);

    userLabel = new QLabel(tr("E-mail:"));
    userEdit = new QLineEdit;
    passwordLabel = new QLabel(tr("Password:"));
    passwordEdit = new QLineEdit;
    passwordEdit->setEchoMode(QLineEdit::Password);

    QVBoxLayout *inputFieldsLayout = new QVBoxLayout;
    inputFieldsLayout->addWidget(userLabel);
    inputFieldsLayout->addWidget(userEdit);
    inputFieldsLayout->addWidget(passwordLabel);
    inputFieldsLayout->addWidget(passwordEdit);

    buttonsLayout = new QHBoxLayout;

    loginButton = new QPushButton(tr("Login"));
    registerButton = new QPushButton(tr("Register"));

    buttonsLayout->addWidget(loginButton);
    buttonsLayout->addWidget(registerButton);


    cellLayout = new QVBoxLayout;
    cellLayout->addLayout(loginLabelLayout);
    cellLayout->addLayout(inputFieldsLayout);
    cellLayout->addLayout(buttonsLayout);

    mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);


    setWindowTitle(tr("Login"));

    QObject::connect(loginButton, SIGNAL(clicked(bool)),this, SLOT(on_LoginClick()));

}

void LoginUI::on_LoginClick() {
    LoginUI::~LoginUI();

}

LoginUI::~LoginUI() {}
