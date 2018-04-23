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
#include "order.h"

Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->errorLabel->hide();
    db.addDatabase();
    db.open();
}

Application::~Application()
{
    delete ui;
    db.close();
}

void Application::on_loginButton_clicked() {


    LoginInterface li;
    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99)
    {
        activeUser.setuserID(li.getUserID(ui->userNameEdit->text().toStdString()));
        if(li.getUserType(activeUser.getuserID()) == "Customer") {
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
            ui->customerTab->setCurrentIndex(0);
            ui->activeUserLabel->setText(ui->userNameEdit->text());
            loadPets();
            showCustAppoint();
            loadUserInfo();
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
}

void Application::on_switchUserButton_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
    activeUser.setuserID(0);
    ui->userNameEdit->clear();
    ui->passwordEdit->clear();
}

void Application::loadPets()
{

    LoginInterface li;

    QSqlQueryModel * model=new QSqlQueryModel;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    if(ui->customerTab->currentIndex() == 1)
    {
        qry->prepare("SELECT Name, PetType, Race, BirthDate, Notes FROM Pet WHERE OwnerID = :ownerid");
    }
    else {
        qry->prepare("SELECT Name, PetType, Race FROM Pet WHERE OwnerID = :ownerid");
    }
    qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
    qry->exec();
    model->setQuery(*qry);
    if(ui->customerTab->currentIndex() == 1)
    {
        ui->petTableView->setModel(model);
        ui->petTableView->setColumnWidth(4, 230);
        ui->petTableView->setRowHeight(1,50);
        ui->petTableView->columnAt(1);
    }
    else {
        ui->petTableOverview->setModel(model);
    }

}

void Application::loadUserInfo()
{

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    QSqlQueryModel* model=new QSqlQueryModel;

    qry->prepare("SELECT FirstName, Surname, Address, City, Zip FROM Owner WHERE UserID = :userid");
    qry->bindValue(":userid", activeUser.getuserID());
    qry->exec();

    model->setQuery(*qry);

    ui->firstNameInfoCustomer->setText(model->record(0).value(0).toString());
    ui->surNameInfoCustomer->setText(model->record(0).value(1).toString());
    ui->addressInfoCustomer->setText(model->record(0).value(2).toString());
    ui->cityInfoCustomer->setText(model->record(0).value(3).toString());
    ui->zipInfoCustomer->setText(model->record(0).value(4).toString());


}

void Application::showCustAppoint() {
   LoginInterface li;
   QSqlQuery* qry=new QSqlQuery(db.mydb);

   QSqlQueryModel* model=new QSqlQueryModel;

   if(ui->customerTab->currentIndex() == 2)
   {
       qry->prepare("SELECT Pet.Name, Appointment.BeginDate, Appointment.BeginTime, Appointment.EndDate, Appointment.EndTime, Appointment.Price FROM Pet, Appointment WHERE Appointment.PetID = Pet.PetID AND Pet.OwnerID = :ownerid");
   }
   else {
       qry->prepare("SELECT Pet.Name, Appointment.BeginDate, Appointment.EndDate FROM Pet, Appointment WHERE Appointment.PetID = Pet.PetID AND Pet.OwnerID = :ownerid");
   }

   qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
   qry->exec();

   model->setQuery(*qry);

   if(ui->customerTab->currentIndex() == 2) {
       ui->appTableView->setModel(model);
   }
   else {
       ui->appTableOverview->setModel(model);
       ui->appTableOverview->setColumnWidth(0, 65);
       ui->appTableOverview->setColumnWidth(1, 120);
       ui->appTableOverview->setColumnWidth(2, 120);
   }
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


    ui->stackedWidget->setCurrentIndex(0);

    }
    else{
        // fuck you mama
    }

}
    void Application::addAssistant(){
    User usr;
    Assistant ownr;
    DbOperator db;
    db.addDatabase();
    db.open();



    if(ui->passwordInput->text().toStdString() == ui->reEnterPasswordInput->text().toStdString()){
    usr.seteMail(ui->eMailInput->text().toStdString());
    usr.setpassword(ui->passwordInput->text().toStdString());
    usr.setuserType("assistant");
    LoginInterface lgin;
    ownr.setzip(ui->zipInput->text().toStdString());
    ownr.setfirstname(ui->firstNameInput->text().toStdString());
    ownr.setsurname(ui->surNameInput->text().toStdString());
    ownr.setaddress(ui->addressInput->text().toStdString());
    ownr.setcity(ui->cityInput->text().toStdString());
    ownr.setdateOfBirth(ui->dateOfBirthInput->text().toStdString());

    ownr.seteMail(ui->eMailInput->text().toStdString());
    DbOperator db;
    int userid= lgin.createUser(usr.geteMail(),usr.getpassword());

    ownr.setassistantID(userid);

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("INSERT INTO Assistant (Surname, FirstName, Address, City, Zip, BirthDate,Department,EMail,UserID) VALUES (:surname, :firstname, :address, :city, :zip, :birthdate,:department, :email, :userid)");
    qry->bindValue(":surname", QString::fromStdString(ownr.getsurname()));
    qry->bindValue(":firstname", QString::fromStdString(ownr.getfirstname()));
    qry->bindValue(":address", QString::fromStdString(ownr.getaddress()));
    qry->bindValue(":city", QString::fromStdString(ownr.getcity()));
    qry->bindValue(":zip", QString::fromStdString(ownr.getzip()));
    qry->bindValue(":birthdate", QString::fromStdString(ownr.getdateOfBirth()));
    qry->bindValue(":department", QString::fromStdString(ownr.getdepartment()));
    qry->bindValue(":email", QString::fromStdString(ownr.geteMail()));
    qry->bindValue(":userid", ownr.getassistantID());
    qry->exec();

    db.close();

    ui->stackedWidget->setCurrentIndex(0);

    }
    else{
        // fuck you mama
    }
}

void Application::addOrder(){

    QSqlQuery* qry=new QSqlQuery(db.mydb);
    LoginInterface li;

    qry->prepare("INSERT INTO Appointment (PetID, BeginDate, EndDate, BeginTime, EndTime, Price ) VALUES (:petid, :begindate, :enddate, :begintime, :endtime, :price )");
    qry->bindValue(":petid", li.getPetID(ui->petsComboBox->currentText().toStdString()));
    qry->bindValue(":begindate", ui->appFromEdit->date().toString());
    qry->bindValue(":enddate", ui->appToEdit->date().toString());
    qry->bindValue(":begintime", ui->appFromEdit->time().toString());
    qry->bindValue(":endtime", ui->appToEdit->time().toString());
    qry->bindValue(":price", ui->appPriceField->text());
    cout << "Order is being run" << endl;
    if(qry->exec()){
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
            ui->customerTab->setCurrentIndex(2);

            showCustAppoint();

            QMessageBox msgBox;
            msgBox.setText("Order successfully added");
            msgBox.exec();
    }
    else {
        ui->orderError->setText("Something went wrong with SQLQuery");
        ui->orderError->show();
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

//
//Loads of on_textEdited() functions from create customer/employee user
//Made by Simen P. Andersen
//

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

void Application::on_addressInput_textEdited()
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

void Application::on_firstNameInput_Emp_textEdited()
{
    if(!(ui->firstNameInput_Emp->text().isEmpty())) ui->firstNameMsg_Emp->setText("");
    else ui->firstNameMsg_Emp->setText("*");
}



void Application::on_surNameInput_Emp_textEdited()
{
    if(!(ui->surNameInput_Emp->text().isEmpty())) ui->surNameMsg_Emp->setText("");
    else ui->surNameMsg_Emp->setText("*");

}

void Application::on_dateOfBirthInput_Emp_textEdited()
{
    if(!(ui->dateOfBirthInput_Emp->text().isEmpty())) ui->dateOfBirthMsg_Emp->setText("");
    else ui->dateOfBirthMsg_Emp->setText("*");
}

void Application::on_addressInput_Emp_textEdited()
{
    if(!(ui->addressInput_Emp->text().isEmpty())) ui->addressMsg_Emp->setText("");
    else ui->addressMsg_Emp->setText("*");
}

void Application::on_cityInput_Emp_textEdited()
{
    if(!(ui->cityInput_Emp->text().isEmpty())) ui->cityMsg_Emp->setText("");
    else ui->cityMsg_Emp->setText("*");
}

void Application::on_zipInput_Emp_textEdited()
{
    if(!(ui->zipInput_Emp->text().isEmpty())) ui->zipMsg_Emp->setText("");
    else ui->zipMsg_Emp->setText("*");
}

void Application::on_phoneinput_Emp_textEdited()
{
    if(!(ui->phoneinput_Emp->text().isEmpty())) ui->phoneMsg_Emp->setText("");
    else ui->phoneMsg_Emp->setText("*");
}

void Application::on_departmentComboBox_currentIndexChanged()
{
    if(!ui->departmentComboBox->currentIndex() > -1) ui->departmentMsg_Emp->setText("");
    else ui->departmentMsg_Emp->setText("*");

}

void Application::on_eMailInput_Emp_textEdited()
{
    if(!(ui->eMailInput_Emp->text().isEmpty())) ui->emailMsg_Emp->setText("");
    else ui->emailMsg_Emp->setText("*");
}

void Application::on_passwordInput_Emp_textEdited()
{
    if(!(ui->passwordInput_Emp->text().isEmpty())) ui->firstPasswordMsg_Emp->setText("");
    else ui->firstPasswordMsg_Emp->setText("*");
}

void Application::on_reEnterPasswordInput_Emp_textEdited()
{
    if(!(ui->reEnterPasswordInput_Emp->text().isEmpty())) ui->secondPasswordMsg_Emp->setText("");
    else ui->secondPasswordMsg_Emp->setText("*");
}

//
//End on_textEdited() functions
//

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
        else if(ui->employeeKeyInput->text() == "TopSecretCode")
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
    if(index == 0) {
        loadPets();
        showCustAppoint();
    }
    if(index == 1) {
        loadPets();
    }
    else if(index == 2) {
        showCustAppoint();
    }
}

void Application::on_viewPetsButton_clicked()
{
    ui->customerTab->setCurrentIndex(1);
}

void Application::on_viewAppButton_clicked()
{
    ui->customerTab->setCurrentIndex(2);
}

void Application::on_passwordEdit_returnPressed()
{
    on_loginButton_clicked();
}

void Application::on_userNameEdit_returnPressed()
{
    on_loginButton_clicked();
}

void Application::on_addAppButton_clicked()
{
    QSqlQuery* qry=new QSqlQuery;
    QSqlQueryModel* model= new QSqlQueryModel;
    LoginInterface li;

    qry->prepare("SELECT Name FROM Pet WHERE OwnerID = :ownerid");
    qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
    qry->exec();

    model->setQuery(*qry);

    QStringList* list = new QStringList;


    for(int i = 0; i < model->rowCount(); i++)
    {
        list->append(model->record(i).value(0).toString());
    }

    ui->petsComboBox->addItems(*list);
    ui->stackedWidget->setCurrentIndex(6);

    ui->petChosenError->hide();
    ui->timeFrameError->hide();
    ui->orderError->hide();


}

void Application::on_orderAppButton_clicked()
{
    bool allOk = true;
    if(!(ui->petsComboBox->currentIndex() > -1))
    {
        ui->petChosenError->setText("A pet must be chosen");
        ui->petChosenError->show();
        allOk = false;
    }
    if(ui->appFromEdit->dateTime() >= ui->appToEdit->dateTime()) {
        ui->timeFrameError->setText("Invalid timespan");
        ui->timeFrameError->show();
        allOk = false;
    }
    if(allOk) {
        ui->petChosenError->hide();
        ui->timeFrameError->hide();
        ui->orderError->hide();
        addOrder();
    }
    else{
        ui->orderError->setText("Invalid order");
    }

}

void Application::on_appFromEdit_dateChanged()
{
    calcAppPrice();
}

void Application::on_appToEdit_dateChanged()
{
    calcAppPrice();
}

void Application::calcAppPrice()
{
    const int pricePerDay = 1200;
    if(ui->appFromEdit->date() < ui->appToEdit->date())
    {
       QString price = QString::number(ui->appFromEdit->date().daysTo(ui->appToEdit->date()) * pricePerDay);
       ui->appPriceField->setText(price + " kr.");
    }
    else
    {
        ui->appPriceField->setText("0 kr.");
    }
}


void Application::on_registerButton_Emp_clicked()
{
    User usr;
    Owner ownr;

    if(ui->passwordInput_Emp->text().toStdString() == ui->reEnterPasswordInput_Emp->text().toStdString()){
    usr.seteMail(ui->eMailInput_Emp->text().toStdString());
    usr.setpassword(ui->passwordInput_Emp->text().toStdString());
    usr.setuserType("Employee");
    LoginInterface lgin;
    ownr.setzip(ui->zipInput_Emp->text().toStdString());
    ownr.setfirstName(ui->firstNameInput_Emp->text().toStdString());
    ownr.setsurname(ui->surNameInput_Emp->text().toStdString());
    ownr.setaddress(ui->addressInput_Emp->text().toStdString());
    ownr.setcity(ui->cityInput_Emp->text().toStdString());
    ownr.setdateOfBirth(ui->dateOfBirthInput_Emp->text().toStdString());

    ownr.seteMail(ui->eMailInput_Emp->text().toStdString());
    ownr.setPhone(ui->phoneinput_Emp->text().toStdString());
    int userid= lgin.createUser(usr.geteMail(),usr.getpassword());

    ownr.setUserID(userid);

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("INSERT INTO Assistant (Surname, FirstName, Address, City, Zip, BirthDate,EMail,UserID) VALUES (:surname, :firstname, :address, :city, :zip, :birthdate, :email, :userid)");
    qry->bindValue(":surname", QString::fromStdString(ownr.getsurname()));
    qry->bindValue(":firstname", QString::fromStdString(ownr.getfirstName()));
    qry->bindValue(":address", QString::fromStdString(ownr.getaddress()));
    qry->bindValue(":city", QString::fromStdString(ownr.getcity()));
    qry->bindValue(":zip", QString::fromStdString(ownr.getzip()));
    qry->bindValue(":birthdate", QString::fromStdString(ownr.getdateOfBirth()));
    qry->bindValue(":email", QString::fromStdString(ownr.geteMail()));
    qry->bindValue(":userid", ownr.getuserID());
    qry->exec();


    ui->stackedWidget->setCurrentIndex(0);
    }
    else {
        //passwords do not match
    }


}

void Application::on_cancelRegisterButton_Emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

