#include "application.h"
#include "qsqldatabase.h"
#include "ui_application.h"
#include "dboperator.h"
#include "logininterface.h"
#include "dboperator.h"
#include "assistant.h"
#include "pet.h"
#include <string>

#include <QPixmap>
#include <QImage>

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->errorLabel->hide();
}

Application::~Application()
{
    delete ui;
}

void Application::on_loginButton_clicked() {


    LoginInterface li;
    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99)
    {
        activeUser.setuserID(li.getUserID(ui->userNameEdit->text().toStdString()));
        if(li.getUserType(activeUser.getuserID()) == "Customer") {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
        }
        else if(li.getUserType(activeUser.getuserID()) == "Employee") {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(1);
        }
        else {
            ui->errorLabel->setText("Error finding usertype");
            ui->errorLabel->show();
        }
    }
    else {
        ui->errorLabel->setText("No matching user/password");
        ui->errorLabel->show();
    }
}

void Application::on_switchUserButton_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void Application::on_loadPetsButton_clicked()
{

    DbOperator db;
    db.addDatabase();
    db.open();

    QSqlQueryModel * model=new QSqlQueryModel;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT Name, PetType, Race, BirthDate, Notes FROM Pet");
    qry->exec();
    model->setQuery(*qry);
    ui->petTableView->setModel(model);
    qDebug() << (model->rowCount());

    db.close();
}

void Application::on_cancelRegisterButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Application::on_newUserButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Application::on_registerButton_clicked()
{

}

void Application::on_addPetToDBButton_clicked()
{
    Pet pet;
    pet.setname(ui->petNameEdit->text().toStdString());
    pet.setpetType(ui->typeCombobox->currentText().toStdString());
    pet.setrace(ui->raceEdit->text().toStdString());
    pet.setdateOfBirth(ui->petBirthEdit->text().toStdString());
    pet.setnotes(ui->petNotesEdit->text().toStdString());

    DbOperator db;
    db.addDatabase();
    db.open();

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("INSERT INTO Pet (Name, OwnerID, BirthDate, PetType, Race, Notes) VALUES (:name, 1, :birthdate, :pettype, :race, :notes)");
    qry->bindValue(":name", QString::fromStdString(pet.getname()));
    qry->bindValue(":birthdate", QString::fromStdString(pet.getdateOfBirth()));
    qry->bindValue(":pettype", QString::fromStdString(pet.getpetType()));
    qry->bindValue(":race", QString::fromStdString(pet.getrace()));
    qry->bindValue(":notes", QString::fromStdString(pet.getnotes()));
    qry->exec();

    db.close();

}

void Application::on_addPetButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Application::on_cancelPetAddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->mainStack->setCurrentIndex(0);
}
