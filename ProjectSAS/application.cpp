#include "application.h"
#include "ui_application.h"
#include "logininterface.h"
#include <string>

#include <QPixmap>
#include <QImage>

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->wrongUserLabel->hide();
    QImage sasPic("sas.jpg");
    ui->sasPicLabel->setPixmap(QPixmap::fromImage(sasPic));
    string penis = "Hei hei \n hvordan går det";
}

Application::~Application()
{
    delete ui;
}

void Application::on_loginButton_clicked() {
    if(ui->userNameEdit->text().toStdString() == "user") {
        ui->stackedWidget->setCurrentIndex(1);
        ui->mainStack->setCurrentIndex(0);
        ui->userLabel->setText(ui->userNameEdit->text());
        ui->wrongUserLabel->hide();
    }
    else if(ui->userNameEdit->text().toStdString() == "employee") {
        ui->stackedWidget->setCurrentIndex(1);
        ui->mainStack->setCurrentIndex(1);
        ui->userLabel->setText(ui->userNameEdit->text());
        ui->wrongUserLabel->hide();
    }
    else {
        ui->wrongUserLabel->show();
    }
}

void Application::on_switchUserButton_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}


