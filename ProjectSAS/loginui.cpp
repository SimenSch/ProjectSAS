#include "loginui.h"

#include <QHBoxLayout>
#include <QSpacerItem>

LoginUI::LoginUI(QWidget *parent)
    : QWidget(parent)
{
    welcomeLabel = new QLabel(tr("Login"));
    userLabel = new QLabel(tr("E-mail:"));
    userEdit = new QLineEdit;
    passwordLabel = new QLabel(tr("Password:"));
    passwordEdit = new QLineEdit;


    QHBoxLayout *firstLayout = new QHBoxLayout;
    firstLayout->addWidget(welcomeLabel);
    firstLayout->addWidget(userLabel);
    firstLayout->addWidget(userEdit);
    firstLayout->addWidget(passwordLabel);
    firstLayout->addWidget(passwordEdit);

    QVBoxLayout *cellLayout = new QVBoxLayout;
    cellLayout->addLayout(firstLayout);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Login"));

}

LoginUI::~LoginUI() {}
