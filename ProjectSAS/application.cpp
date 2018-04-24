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
/*
 * Login button slot function
 * Checks whether the typed in user exists, and that the password matches the hashed password in the database.
 * Errors presented to the user whenever not at all or no fields are entered, if there are no users, and if something else unforeseen
 * occurs during the login.
 * Cooperative function made by Simen Persch and Anders Nøss
 */
void Application::on_loginButton_clicked() {
    LoginInterface li;

    if(li.loginAttempt(ui->userNameEdit->text().toStdString(), ui->passwordEdit->text().toStdString()) == 99){
        if(li.getUserID(ui->userNameEdit->text().toStdString()) > 0){
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
                showEmpAppoint();
                loadEmpInfo();
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
    } else {
        cout << "error getting userID" << endl;
        ui->errorLabel->setText("Error getting user info");
        ui->errorLabel->show();
    }
}
/*
 * On Switch User button slot function
 * Brings you back to the login interface
 * Made by Simen Persch
 */

void Application::on_switchUserButton_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
    activeUser.setuserID(0);
    ui->userNameEdit->clear();
    ui->passwordEdit->clear();
}

/*
 * Loads the currently logged in customer's pets into QSQLQueryModels which are presented in two seperate QTablewViews;
 * A short but concise, and one with all the data per record
 * Made by Simen Persch Andersen
 */

void Application::loadPets(){
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

/*
 * Loads the data from the customer and presents it at the overview layout tab
 * Made by Simen Persch Andersen
 */
void Application::loadUserInfo() {
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
/*
 * Loads the data from the employee and presents it at the overview layout tab
 * Made by Simen Persch Andersen
 */
void Application::loadEmpInfo() {
    QSqlQuery* qry=new QSqlQuery(db.mydb);

    QSqlQueryModel* model=new QSqlQueryModel;

    qry->prepare("SELECT FirstName, Surname, Address, City, Zip, BirthDate, Department FROM Assistant WHERE UserID = :userid");
    qry->bindValue(":userid", activeUser.getuserID());
    qry->exec();

    model->setQuery(*qry);

    ui->firstNameInfoEmp->setText(model->record(0).value(0).toString());
    ui->surNameInfoEmp->setText(model->record(0).value(1).toString());
    ui->addressInfoEmp->setText(model->record(0).value(2).toString());
    ui->cityInfoEmp->setText(model->record(0).value(3).toString());
    ui->zipInfoEmp->setText(model->record(0).value(4).toString());
    ui->birthInfoEmp->setText(model->record(0).value(5).toString());
    ui->depInfoEmp->setText(model->record(0).value(6).toString());

}
/*
 * Loads the appointments set for the customers pets in an QSqlQueryModel set in two different QTableViews, depending on the tab the user browses;
 * One small and concise, and one that lists all info from the records
 * Made by Simen Persch Andersen
 */
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

/*
 * Loads all appointments in an QSqlQueryModel presented in a QTableVIew, sorted by begin date
 * Made by Simen Persch Andersen
 */
void Application::showEmpAppoint() {
    LoginInterface li;
    QSqlQuery* qry=new QSqlQuery(db.mydb);

    QSqlQueryModel* model=new QSqlQueryModel;

    qry->prepare("SELECT Owner.FirstName, Owner.Surname, Pet.Name, Appointment.BeginDate, Appointment.BeginTime, Appointment.EndDate, Appointment.EndTime, Appointment.Price FROM Owner, Pet, Appointment WHERE Owner.OwnerID = Pet.OwnerID AND Appointment.PetID = Pet.PetID ORDER BY Appointment.BeginDate");
    qry->bindValue(":ownerid", li.getOwnerID(activeUser.getuserID()));
    qry->exec();

    model->setQuery(*qry);
    model->setHeaderData(0, Qt::Horizontal, tr("Owner"));
    model->setHeaderData(1, Qt::Horizontal, tr("Owner"));
    model->setHeaderData(2, Qt::Horizontal, tr("Pet"));

    ui->appTableEmp->setModel(model);


}
/*
 * Cancel register customer button slot
 * Brings you back to the login interface
 * Made by Simen Persch Andersen
 */

void Application::on_cancelRegisterButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*
 * New user button slot
 * Brings you to an option menu where you may choose what type of user you would like to create.
 * Made by Simen Persch Andersen
 */

void Application::on_newUserButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->employeeKeyInput->hide();
    ui->employeeKeyLabel->hide();
    ui->invalidKeyLabel->hide();
}

// s315586
//checks if all inputfields are not empty in register user form.
bool Application::regChecker(){
    if(ui->firstNameInput->text().isEmpty() || ui->surNameInput->text().isEmpty() || ui->addressInput->text().isEmpty() ||
            ui->dateOfBirthInput->text().isEmpty() || ui->cityInput->text().isEmpty() || ui->zipInput->text().isEmpty() ||
            ui->eMailInput->text().isEmpty() || ui->passwordInput->text().isEmpty())
    { return false;
    } else {
    return true;
    }
}


// s315586 & s315593
/*
 * Register customer button slot
 * Registers a customer and user record if the needed criterias are met, like no duplicate email existing in the database, matching passwords uses, that all fields have an entry etc.
 * Co-operative effort by all group members
 */

void Application::on_registerButton_clicked(){
    User usr;
    Owner ownr;
    LoginInterface lgin;
    if(regChecker() == true)
    {
        if(lgin.userAvailable(ui->eMailInput->text().toStdString()))
        {
            if(ui->passwordInput->text().toStdString() == ui->reEnterPasswordInput->text().toStdString())
            {
            usr.seteMail(ui->eMailInput->text().toStdString());
            usr.setpassword(ui->passwordInput->text().toStdString());
            usr.setuserType("Customer");
            ownr.setzip(ui->zipInput->text().toStdString());
            ownr.setfirstName(ui->firstNameInput->text().toStdString());
            ownr.setsurname(ui->surNameInput->text().toStdString());
            ownr.setaddress(ui->addressInput->text().toStdString());
            ownr.setcity(ui->cityInput->text().toStdString());
            ownr.setdateOfBirth(ui->dateOfBirthInput->text().toStdString());
            ownr.seteMail(ui->eMailInput->text().toStdString());
            ownr.setPhone(ui->phoneinput->text().toStdString());

            int userid = lgin.createUser(usr.geteMail(), usr.getpassword(), "Customer");
            if(userid != 0) {
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
                clearInputFields();
                ui->stackedWidget->setCurrentIndex(0);

                QMessageBox msgBox;
                msgBox.setText("User successfully created");
                msgBox.exec();
                }
                else {
                    ui->generalMsg->setText("Error creating user. Please report this issue");
                    ui->generalMsg->show();
                }
            }
            else {
                ui->secondPasswordMsg->setText("Passwords do not match");
                ui->secondPasswordMsg->show();
            }
        }
        else
        {
            ui->generalMsg->setText("Email already in use");
        }
    } else {
        ui->generalMsg->setText("All fields must be filled out");
        ui->generalMsg->show();
    }
}

/*
 * Add order function which is called upon when the neccessary criterias are met by the add order button slot function
 * Made by Simen Persch Andersen
 */
void Application::addOrder(){

    QSqlQuery* qry=new QSqlQuery(db.mydb);
    LoginInterface li;

    qry->prepare("INSERT INTO Appointment (PetID, BeginDate, EndDate, BeginTime, EndTime, Price ) VALUES (:petid, :begindate, :enddate, :begintime, :endtime, :price )");
    qry->bindValue(":petid", li.getPetID(ui->petsComboBox->currentText().toStdString()));
    qry->bindValue(":begindate", ui->appFromEdit->date().toString());
    qry->bindValue(":enddate", ui->appToEdit->date().toString());
    qry->bindValue(":begintime", ui->appFromEdit->time().toString());
    qry->bindValue(":endtime", ui->appToEdit->time().toString());
    qry->bindValue(":price", ui->appPriceField->text());;
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
//simen schaufel s305491
//method to update selected pet(not integrated into the application).
void Application::updatePet(int petid, string name, string birthdate, string pettype, string race, string notes)
{
    Pet pet;
    pet.setname(name);
    pet.setpetType(pettype);
    pet.setrace(race);
    pet.setdateOfBirth(birthdate);
    pet.setnotes(notes);
    pet.setpetID(petid);


    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("UPDATE Pet SET Name=:name,BirthDate=:birthdate,PetType=:pettype,Race=:race,Notes=:notes WHERE PetID=:petid");
    qry->bindValue(":name", QString::fromStdString(pet.getname()));
    qry->bindValue(":birthdate", QString::fromStdString(pet.getdateOfBirth()));
    qry->bindValue(":pettype", QString::fromStdString(pet.getpetType()));
    qry->bindValue(":race", QString::fromStdString(pet.getrace()));
    qry->bindValue(":notes", QString::fromStdString(pet.getnotes()));
    qry->bindValue(":petid", pet.getpetID());
    if(qry->exec()){
        ui->stackedWidget->setCurrentIndex(1);
        ui->mainStack->setCurrentIndex(0);
        loadPets();
        QMessageBox msgBox;
        msgBox.setText("Pet successfully updated");
        msgBox.exec();
    }

}
//simen schaufel s305491
//updates user email and password, and changes Owner email to this email(not implemented)
void Application::updateUser(int userid, string email,string password)
{
    LoginInterface lgn;


    User usr;
    usr.setuserID(userid);
    usr.seteMail(email);
    string pword= lgn.hashing(password);
    usr.setpassword(pword);


    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("UPDATE User SET EMail=:email,Password=:password WHERE UserID=:userid");
    qry->bindValue(":password", QString::fromStdString(usr.getpassword()));
    qry->bindValue(":email", QString::fromStdString(usr.geteMail()));
    qry->bindValue(":userid", usr.getuserID());
    if(qry->exec()){

        QSqlQuery* sly=new QSqlQuery(db.mydb);
        sly->prepare("UPDATE Owner SET EMail=:email WHERE UserID=:userid");
        sly->bindValue(":email",QString::fromStdString(usr.geteMail()));
        sly->bindValue(":userid",usr.getuserID());
        if(sly->exec()){
            ui->stackedWidget->setCurrentIndex(1);
            ui->mainStack->setCurrentIndex(0);
            QMessageBox msgBox;
            msgBox.setText("User Successfully updated");
            msgBox.exec();
            }
     else{
        QMessageBox msgBox;
        msgBox.setText("User Unsuccessfully updated");
        msgBox.exec();
     }

   }
}
//simen schaufel s305491
//updates the owner info into the database(not implemented)
void Application::updateOwner(int ownerid, string name, string surname,string birthdate, string address, string city, string zip)
{
    Owner owner;

    owner.setdateOfBirth(birthdate);
    owner.setfirstName(name);
    owner.setsurname(surname);
    owner.setdateOfBirth(birthdate);
    owner.setaddress(address);
    owner.setownerID(ownerid);
    owner.setzip(zip);
    owner.setcity(city);


    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("UPDATE Owner SET FirstName=:name,Surname=:surname,BirthDate=:birthdate,Address=:address,City=:city,Zip=:zip WHERE OwnerID=:ownerid");
    qry->bindValue(":name", QString::fromStdString(owner.getfirstName()));
    qry->bindValue(":birthdate", QString::fromStdString(owner.getdateOfBirth()));
    qry->bindValue(":surname", QString::fromStdString(owner.getsurname()));
    qry->bindValue(":city", QString::fromStdString(owner.getcity()));
    qry->bindValue(":zip", QString::fromStdString(owner.getzip()));
    qry->bindValue(":address", QString::fromStdString(owner.getaddress()));
    qry->bindValue(":ownerid", owner.getownerID());
    if(qry->exec()){
        ui->stackedWidget->setCurrentIndex(1);
        ui->mainStack->setCurrentIndex(0);

        QMessageBox msgBox;
        msgBox.setText("Owner Successfully updated");
        msgBox.exec();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Owner Unsuccessfully updated");
        msgBox.exec();
    }

}


/*
 * Add pet to DB on button clicked slot function
 * Adds a pet to the database connected to the logged in customer, with the appropriate data
 */
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

/*
 * Brings you the "Add pet" layout
 * Made by Simen Persch Andersen
 */
void Application::on_addPetButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

/*
 * Cancels adding a pet to the customer
 * Brings you back to the pets overview
 * Made by Simen Persch Andersen
 */
void Application::on_cancelPetAddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->mainStack->setCurrentIndex(0);
}

/*
*Loads of on_textEdited() functions from create customer/employee user
* Made by Simen P. Andersen
*/

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

void Application::on_dateOfBirthInput_userDateChanged()
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

void Application::on_dateOfBirthInput_Emp_userDateChanged()
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
    if(!(ui->departmentComboBox->currentIndex() > -1)) ui->departmentMsg_Emp->setText("");
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

/*
* End on_textEdited() functions
*/

void Application::on_cancelUserChoiceButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*
 * Choose user type on clicked slot function
 * Brings you the customer register page if you so desire, and the employee register page if you enter the correct code necessary to do so.
 * Made by Simen Persch Andersen
 */
void Application::on_chooseUserTypeButton_clicked()
{
    if(ui->customerRadioButton->isChecked())
    {
        ui->stackedWidget->setCurrentIndex(4);
        ui->generalMsg->hide();
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
            ui->generalMsg_Emp->hide();
        }
        else
        {
            ui->invalidKeyLabel->show();
        }
    }
}
/*
 * Loads the appropriate data into their respective QTableViews based on the tab index
 * Made by Simen Persch Andersen
 */
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


/*
 * Clears all input fields and error messages in the register customer and employee pages
 * Co-operative effort between Anders Nøss Olsen and Simen Persch Andersen
 */

void Application::clearInputFields(){
    if(ui->stackedWidget->currentIndex() == 4) {
        ui->firstNameInput->clear();
        ui->surNameInput->clear();
        ui->addressInput->clear();
        ui->dateOfBirthInput->clear();
        ui->cityInput->clear();
        ui->zipInput->clear();
        ui->eMailInput->clear();
        ui->phoneinput->clear();
        ui->passwordInput->clear();
        ui->reEnterPasswordInput->clear();

        ui->firstNameMsg->setText("*");
        ui->firstNameMsg->show();
        ui->surNameMsg->setText("*");
        ui->surNameMsg->show();
        ui->addressMsg->setText("*");
        ui->addressMsg->show();
        ui->dateOfBirthMsg->setText("*");
        ui->dateOfBirthMsg->show();
        ui->cityMsg->setText("*");
        ui->cityMsg->show();
        ui->zipMsg->setText("*");
        ui->zipMsg->show();
        ui->emailMsg->setText("*");
        ui->emailMsg->show();
        ui->phoneMsg->setText("*");
        ui->phoneMsg->show();
        ui->firstPasswordMsg->setText("*");
        ui->firstPasswordMsg->show();
        ui->secondPasswordMsg->setText("*");
        ui->secondPasswordMsg->show();

        ui->generalMsg->hide();
    }
    else {
        ui->firstNameInput_Emp->clear();
        ui->surNameInput_Emp->clear();
        ui->addressInput_Emp->clear();
        ui->dateOfBirthInput_Emp->clear();
        ui->cityInput_Emp->clear();
        ui->zipInput_Emp->clear();
        ui->eMailInput_Emp->clear();
        ui->phoneinput_Emp->clear();
        ui->passwordInput_Emp->clear();
        ui->reEnterPasswordInput_Emp->clear();

        ui->firstNameMsg_Emp->setText("*");
        ui->firstNameMsg_Emp->show();
        ui->surNameMsg_Emp->setText("*");
        ui->surNameMsg_Emp->show();
        ui->addressMsg_Emp->setText("*");
        ui->addressMsg_Emp->show();
        ui->dateOfBirthMsg_Emp->setText("*");
        ui->dateOfBirthMsg_Emp->show();
        ui->cityMsg_Emp->setText("*");
        ui->cityMsg_Emp->show();
        ui->zipMsg_Emp->setText("*");
        ui->zipMsg_Emp->show();
        ui->emailMsg_Emp->setText("*");
        ui->emailMsg_Emp->show();
        ui->phoneMsg_Emp->setText("*");
        ui->phoneMsg_Emp->show();
        ui->firstPasswordMsg_Emp->setText("*");
        ui->firstPasswordMsg_Emp->show();
        ui->secondPasswordMsg_Emp->setText("*");
        ui->secondPasswordMsg_Emp->show();

        ui->generalMsg->show();
    }
}

/*
 * On click slot function which brings you the "New Appointment" order interface, and presents your pets in the Pet QComboBox
 * Made by Simen Persch Andersen
 */
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

    ui->orderError->hide();
    ui->timeStampErrorLabel->hide();
    ui->petErrorLabel->hide();

}

/*
 * Order appointment button click slot function which checks for correct input, and calls upon the addOrder() function if they are.
 * Errors are presented if not
 * Made by Simen Persch Andersen
 */

void Application::on_orderAppButton_clicked()
{
    bool allOk = true;
    if(!(ui->petsComboBox->currentIndex() > -1))
    {
        ui->petErrorLabel->setText("A pet must be chosen");
        ui->petErrorLabel->show();
        allOk = false;
    }
    if(ui->appFromEdit->dateTime() < QDateTime::currentDateTime()) {
        ui->timeStampErrorLabel->setText("Appointment must be ahead of time");
        ui->timeStampErrorLabel->show();
        allOk = false;
    }
    if(ui->appFromEdit->dateTime() >= ui->appToEdit->dateTime()) {
        ui->timeStampErrorLabel->setText("Invalid timespan");
        ui->timeStampErrorLabel->show();
        allOk = false;
    }
    if(allOk) {
        ui->orderError->hide();
        ui->timeStampErrorLabel->hide();
        ui->petErrorLabel->hide();
        addOrder();
    }
    else{
        ui->orderError->setText("Invalid order");
    }

}

/*
 * Two on_DateChanged function which recalculates the order price whenever changed
 * Made by Simen Persch Andersen
 */
void Application::on_appFromEdit_dateChanged()
{
    calcAppPrice();
}

void Application::on_appToEdit_dateChanged()
{
    calcAppPrice();
}

/*
 * Calculates the Appointment price based on a constant integer value
 * Made by Simen Persch Andersen
 */
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

/*
 * Register employee on button click slot function
 * Functions very similarily to the customer creation function, adds the user to the "Assistant" table instead of "Customer", and usertype as "Employee"
 * Co-operative effort between all group members
 */
void Application::on_registerButton_Emp_clicked()
{
    User usr;
    LoginInterface li;

    if(li.userAvailable(ui->eMailInput_Emp->text().toStdString()))
    {

        if(ui->passwordInput_Emp->text().toStdString() == ui->reEnterPasswordInput_Emp->text().toStdString()){
            usr.seteMail(ui->eMailInput_Emp->text().toStdString());
            usr.setpassword(ui->passwordInput_Emp->text().toStdString());
            usr.setuserType("Employee");
            LoginInterface lgin;
            int userid = lgin.createUser(usr.geteMail(), usr.getpassword(), "Employee");

            if(userid != 0) {


                QSqlQuery* qry=new QSqlQuery(db.mydb);

                qry->prepare("INSERT INTO Assistant (Surname, FirstName, Address, City, Zip, BirthDate, EMail, Department, UserID) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
                qry->bindValue(0, ui->surNameInput_Emp->text());
                qry->bindValue(1, ui->firstNameInput_Emp->text());
                qry->bindValue(2, ui->addressInput_Emp->text());
                qry->bindValue(3, ui->cityInput_Emp->text());
                qry->bindValue(4, ui->zipInput_Emp->text());
                qry->bindValue(5, ui->dateOfBirthInput_Emp->text());
                qry->bindValue(6, ui->eMailInput_Emp->text());
                qry->bindValue(7, ui->departmentComboBox->currentText());
                qry->bindValue(8, userid);
                qry->exec();
                clearInputFields();

                ui->stackedWidget->setCurrentIndex(0);

                QMessageBox msgBox;
                msgBox.setText("User succesfully created");
                msgBox.exec();
            }
            else {
                ui->generalMsg_Emp->setText("Something went wrong with the SQL query. Please report this issue.");
            }

        }
        else {
            ui->secondPasswordMsg_Emp->setText("Passwords do not match");
            ui->secondPasswordMsg_Emp->show();
        }
    }
    else {
        ui->generalMsg_Emp->setText("Email already in use");
        ui->generalMsg_Emp->show();
    }
}

void Application::on_cancelRegisterButton_Emp_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

