#include "application.h"
#include "qsqldatabase.h"
#include "ui_application.h"
#include "dboperator.h"
#include "logininterface.h"
#include "dboperator.h"
#include "assistant.h"
#include "pet.h"
#include <string>
#include "user.h"
#include "owner.h"
#include <QPixmap>
#include <QImage>
#include <QMessageBox>

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

    DbOperator db;
    db.addDatabase();
    db.open();


    LoginInterface li;
    cout << "login attempt return: " << li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString());
    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99)
    {
        activeUser.setuserID(li.getUserID(ui->userNameEdit->text().toStdString()));
        cout << "user type fra loginbutton clicked: " << li.getUserType(activeUser.getuserID()) << endl;
        if(li.getUserType(activeUser.getuserID()).compare("Customer")) {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
        }
        else if(li.getUserType(activeUser.getuserID()).compare("Employee")) {
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
    db.close();
}

void Application::on_switchUserButton_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void Application::on_loadPetsButton_clicked()
{

    LoginInterface li;
    DbOperator db;
    db.addDatabase();
    db.open();

    QSqlQueryModel * model=new QSqlQueryModel;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT Name, PetType, Race, BirthDate, Notes FROM Pet WHERE OwnerID = :ownerid");
    qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
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
    /*
    User usr;
    Owner ownr;
    DbOperator db;
    db.addDatabase();
    db.open();


    if(ui->passwordInput->text().toStdString() == ui->reEnterPasswordInput->text().toStdString()){
    usr.seteMail(ui->eMailInput->text().toStdString());
    usr.setpassword(ui->passwordInput->text().toStdString());
    usr.setuserType("Customer");
    LoginInterface lgin;
    ownr.setzip(ui->zipInput->text().toStdString());
    ownr.setfirstName(ui->firstNameInput->text().toStdString());
    ownr.setsurname(ui->surNameInput->text().toStdString());
    ownr.setaddress(ui->addressInput->text().toStdString());
    ownr.setcity(ui->cityInput->text().toStdString());
    ownr.setdateOfBirth(ui->dateOfBirthInput->text().toStdString());

    ownr.seteMail(ui->eMailInput->text().toStdString());
    ownr.setPhone(ui->phoneinput->text().toStdString());
    DbOperator db;
    int userid= lgin.createUser(usr.geteMail(),usr.getpassword());

    ownr.setUserID(userid);

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("INSERT INTO Owner (Surname, FirstName, Address, City, Zip, BirthDate,EMail,UserID) VALUES (:surname, :firstname, :address, :city, :zip, :birthdate, :email, :userid)");
    qry->bindValue(":surname", QString::fromStdString(ownr.getsurname()));
    qry->bindValue(":firstname", QString::fromStdString(ownr.getfirstName()));
    qry->bindValue(":address", QString::fromStdString(ownr.getaddress()));
    qry->bindValue(":city", QString::fromStdString(ownr.getcity()));
    qry->bindValue(":zip", QString::fromStdString(ownr.getzip()));
    qry->bindValue(":birthdate", QString::fromStdString(ownr.getdateOfBirth()));
    qry->bindValue(":email", QString::fromStdString(ownr.geteMail()));
    qry->bindValue(":userid", ownr.getuserID());
    qry->exec();

    db.close();
<<<<<<< HEAD
    ui->stackedWidget->setCurrentIndex(0);
=======
>>>>>>> 64218730126cdca1061cbf1663c144397eb2e66b
    }
    else{

    }
    */
}

void Application::on_addPetToDBButton_clicked()
{
    LoginInterface li;
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

    qry->prepare("INSERT INTO Pet (Name, OwnerID, BirthDate, PetType, Race, Notes) VALUES (:name, :ownerid, :birthdate, :pettype, :race, :notes)");
    qry->bindValue(":name", QString::fromStdString(pet.getname()));
    qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
    qry->bindValue(":birthdate", QString::fromStdString(pet.getdateOfBirth()));
    qry->bindValue(":pettype", QString::fromStdString(pet.getpetType()));
    qry->bindValue(":race", QString::fromStdString(pet.getrace()));
    qry->bindValue(":notes", QString::fromStdString(pet.getnotes()));
    if(qry->exec()){
        ui->stackedWidget->setCurrentIndex(1);
        ui->mainStack->setCurrentIndex(0);
        QMessageBox msgBox;
        msgBox.setText("Pet successfully added");
        msgBox.exec();
    }

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
