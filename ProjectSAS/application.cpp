#include "application.h"
#include "qsqldatabase.h"
#include "ui_application.h"
#include "dboperator.h"
#include "logininterface.h"
#include "dboperator.h"
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
}

Application::~Application()
{
    delete ui;
}

void Application::on_loginButton_clicked() {
    LoginInterface li;
    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99) {
        ui->stackedWidget->setCurrentIndex(1);
    }

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

void Application::on_loadPetsButton_clicked()
{

    DbOperator db;


    db.mydb = QSqlDatabase::addDatabase("QSQLITE");
    db.mydb.setDatabaseName("../Kennel.db");

    QSqlQueryModel * model=new QSqlQueryModel;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    db.mydb.open();

    qry->prepare("SELECT * FROM Pet");
    qry->exec();
    model->setQuery(*qry);
    ui->petTableView->setModel(model);

    db.mydb.close();
    qDebug() << (model->rowCount());


}

void Application::on_cancelRegisterButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Application::on_newUserButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Application::registerButton()
{
    ui->firstNameInput->text().toStdString();
    ui->surNameInput->text().toStdString();
    ui->zipInput->text().toStdString();
    ui->cityInput->text().toStdString();
    ui->phoneinput
}
