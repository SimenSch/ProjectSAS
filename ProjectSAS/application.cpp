#include "application.h"
#include "qsqldatabase.h"
#include "ui_application.h"
#include "dboperator.h"
#include "logininterface.h"
#include "assistant.h"
#include "regularExpression.h"
#include "pet.h"
#include <string>
#include "user.h"
#include "owner.h"
#include <QPixmap>
#include <QImage>
#include <QMessageBox>
#include <QSqlDatabase>

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
    db.addDatabase();
    db.open();

    LoginInterface li;
    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99)
    {
        activeUser.setuserID(li.getUserID(ui->userNameEdit->text().toStdString()));
        if(li.getUserType(activeUser.getuserID()) == "Customer") {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
            ui->customerTab->setCurrentIndex(0);
            ui->activeUserLabel->setText(ui->userNameEdit->text());
        }
        else if(li.getUserType(activeUser.getuserID()) =="Employee") {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(1);
            ui->activeUserLabel->setText(ui->userNameEdit->text());
        }
        else {
            ui->errorLabel->setText("Error finding usertype");
            ui->errorLabel->show();
        }
    } else if (li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 2){
        ui->errorLabel->setText("Fields cannot be empty");
        ui->errorLabel->show();
    }
    else {
        ui->errorLabel->setText("No matching user/password");
        ui->errorLabel->show();
    }
    db.close();
}

void Application::on_switchUserButton_clicked() {
    db.close();
    ui->stackedWidget->setCurrentIndex(0);
    activeUser.setuserID(0);
    ui->userNameEdit->clear();
    ui->passwordEdit->clear();
}

void Application::loadPets()
{

    LoginInterface li;
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
    ui->stackedWidget->setCurrentIndex(3);
    ui->employeeKeyInput->hide();
    ui->employeeKeyLabel->hide();
    ui->invalidKeyLabel->hide();
}



void Application::on_registerButton_clicked()
{

    User usr;
    Owner ownr;
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

        ui->stackedWidget->setCurrentIndex(0);

    } else{
        cout << "Register IF failed" << endl;
    }

}

void Application::on_addPetToDBButton_clicked()
{
    LoginInterface li;
    Pet pet;
    pet.setname(ui->petNameEdit->text().toStdString());
    pet.setpetType(ui->typeCombobox->currentText().toStdString());
    pet.setrace(ui->raceEdit->text().toStdString());
    pet.setdateOfBirth(ui->petBirthEdit->text().toStdString());
    pet.setnotes(ui->petNotesEdit->toPlainText().toStdString());

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
        loadPets();
        QMessageBox msgBox;
        msgBox.setText("Pet successfully added");
        msgBox.exec();
    }

    db.close();

}

void Application::on_addPetButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Application::on_cancelPetAddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->mainStack->setCurrentIndex(0);

}

void Application::on_firstNameInput_textEdited()
{
    if(!(ui->firstNameInput->text().isEmpty())) ui->firstNameMsg->setText("");
    else ui->firstNameMsg->setText("*");
}



void Application::on_surNameInput_textEdited()
{
    if(!(ui->surNameInput->text().isEmpty())) ui->surNameMsg->setText("");
    else ui->surNameMsg->setText("*");

}

void Application::on_dateOfBirthInput_textEdited()
{
    if(!(ui->dateOfBirthInput->text().isEmpty())) ui->dateOfBirthMsg->setText("");
    else ui->dateOfBirthMsg->setText("*");
}

void Application::on_addressInput_textChanged()
{
    if(!(ui->addressInput->text().isEmpty())) ui->addressMsg->setText("");
    else ui->addressMsg->setText("*");
}

void Application::on_cityInput_textEdited()
{
    if(!(ui->cityInput->text().isEmpty())) ui->cityMsg->setText("");
    else ui->cityMsg->setText("*");
}

void Application::on_zipInput_textEdited()
{
    if(!(ui->zipInput->text().isEmpty())) ui->zipMsg->setText("");
    else ui->zipMsg->setText("*");
}

void Application::on_phoneinput_textEdited()
{
    if(!(ui->phoneinput->text().isEmpty())) ui->phoneMsg->setText("");
    else ui->phoneMsg->setText("*");
}

void Application::on_eMailInput_textEdited()
{
    if(!(ui->eMailInput->text().isEmpty())) ui->emailMsg->setText("");
    else ui->emailMsg->setText("*");
}

void Application::on_passwordInput_textEdited()
{
    if(!(ui->passwordInput->text().isEmpty())) ui->firstPasswordMsg->setText("");
    else ui->firstPasswordMsg->setText("*");
}

void Application::on_reEnterPasswordInput_textEdited()
{
    if(!(ui->reEnterPasswordInput->text().isEmpty())) ui->secondPasswordMsg->setText("");
    else ui->secondPasswordMsg->setText("*");
}

void Application::on_cancelUserChoiceButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Application::on_chooseUserTypeButton_clicked()
{
    if(ui->customerRadioButton->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(4);
    }
    else
    {
        if((ui->employeeKeyInput->isHidden())) {
            ui->employeeKeyLabel->show();
            ui->employeeKeyInput->show();
        }
        else if(ui->employeeKeyInput->text() == "sukimidiki")
        {
            ui->employeeKeyInput->hide();
            ui->employeeKeyLabel->hide();
            ui->invalidKeyLabel->hide();
            ui->stackedWidget->setCurrentIndex(5);
        }
        else
        {
            ui->invalidKeyLabel->show();
        }
    }
}

void Application::on_customerTab_currentChanged(int index)
{
    if(index == 1) {
        loadPets();
    }
}
