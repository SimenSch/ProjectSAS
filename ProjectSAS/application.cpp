#include "application.h"
#include "qsqldatabase.h"
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



void Application::on_loadPetsButton_clicked()
{

    LoginInterface li;

    li.mydb = QSqlDatabase::addDatabase("QSQLITE");
    li.mydb.setDatabaseName("../Kennel.db");

    QSqlQueryModel * model=new QSqlQueryModel;

    QSqlQuery* qry=new QSqlQuery(li.mydb);

    li.mydb.open();

    qry->prepare("SELECT * FROM Pets");
    qry->exec();
    model->setQuery(*qry);
    ui->petTableView->setModel(model);


}
