#include "application.h"
#include "ui_application.h"
#include "logininterface.h"

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->wrongUserLabel->hide();
}

Application::~Application()
{
    delete ui;
}

void Application::on_loginButton_clicked() {
    if(ui->userNameEdit->text().toStdString() == "user") {
        ui->stackedWidget->setCurrentIndex(1);
        ui->wrongUserLabel->hide();
    }
    else if(ui->userNameEdit->text().toStdString() == "employee") {
        ui->stackedWidget->setCurrentIndex(2);
        ui->wrongUserLabel->hide();
    }
    else {
        ui->wrongUserLabel->show();
    }
}


