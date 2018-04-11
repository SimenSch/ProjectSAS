#include "loginui.h"

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

    QHBoxLayout *buttonsLayout = new QHBoxLayout;

    loginButton = new QPushButton(tr("Login"));
    registerButton = new QPushButton(tr("Login"));

    buttonsLayout->addWidget(loginButton);
    buttonsLayout->addWidget(registerButton);


    QVBoxLayout *cellLayout = new QVBoxLayout;
    cellLayout->addLayout(loginLabelLayout);
    cellLayout->addLayout(inputFieldsLayout);
    cellLayout->addLayout(buttonsLayout);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Login"));

}

LoginUI::~LoginUI() {}
