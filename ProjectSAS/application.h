#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>
#include "user.h"
#include "dboperator.h"

namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    DbOperator db;
    User activeUser;
    void addOrder();
    void clearInputFields();
    void showCustAppoint();
    void showEmpAppoint();
    void calcAppPrice();
    bool regChecker();
    void updateOwner(int ownerid, string name, string surname,string birthdate, string address, string city, string zip);
    void updateUser(int userid, string email,string password);
    void updatePet(int petid, string name, string birthdate, string pettype, string race, string notes);
    explicit Application(QWidget *parent = 0);
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();
    void loadPets();
    void loadUserInfo();
    void loadEmpInfo();
    void on_cancelRegisterButton_clicked();
    void on_newUserButton_clicked();
    void on_registerButton_clicked();
    void on_addPetToDBButton_clicked();
    void on_addPetButton_clicked();
    void on_cancelPetAddButton_clicked();


    //On text edited input fields customer user creation
    void on_firstNameInput_textEdited();
    void on_surNameInput_textEdited();
    void on_dateOfBirthInput_userDateChanged();
    void on_addressInput_textEdited();
    void on_cityInput_textEdited();
    void on_zipInput_textEdited();
    void on_phoneinput_textEdited();
    void on_eMailInput_textEdited();
    void on_passwordInput_textEdited();
    void on_reEnterPasswordInput_textEdited();

    //On text edited input fields employee user creation
    void on_firstNameInput_Emp_textEdited();
    void on_surNameInput_Emp_textEdited();
    void on_dateOfBirthInput_Emp_userDateChanged();
    void on_addressInput_Emp_textEdited();
    void on_cityInput_Emp_textEdited();
    void on_zipInput_Emp_textEdited();
    void on_phoneinput_Emp_textEdited();
    void on_departmentComboBox_currentIndexChanged();
    void on_eMailInput_Emp_textEdited();
    void on_passwordInput_Emp_textEdited();
    void on_reEnterPasswordInput_Emp_textEdited();

    void on_cancelUserChoiceButton_clicked();
    void on_chooseUserTypeButton_clicked();
    void on_customerTab_currentChanged(int index);
    void on_viewPetsButton_clicked();
    void on_viewAppButton_clicked();
    void on_passwordEdit_returnPressed();
    void on_userNameEdit_returnPressed();
    void on_addAppButton_clicked();
    void on_orderAppButton_clicked();
    void on_appFromEdit_dateChanged();
    void on_appToEdit_dateChanged();
    void on_registerButton_Emp_clicked();
    void on_cancelRegisterButton_Emp_clicked();


    void on_cancelAppButton_clicked();

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
