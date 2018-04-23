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
    void addAssistant();
    explicit Application(QWidget *parent = 0);
    bool regChecker();
    void clearInputFields();
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();
    void loadPets();
    void loadUserInfo();
    void on_cancelRegisterButton_clicked();
    void on_newUserButton_clicked();
    void on_registerButton_clicked();
    void on_addPetToDBButton_clicked();
    void on_addPetButton_clicked();
    void on_cancelPetAddButton_clicked();


    void on_firstNameInput_textEdited();

    void on_surNameInput_textEdited();

    void on_dateOfBirthInput_textEdited();

    void on_addressInput_textChanged();

    void on_cityInput_textEdited();

    void on_zipInput_textEdited();

    void on_phoneinput_textEdited();

    void on_eMailInput_textEdited();

    void on_passwordInput_textEdited();

    void on_reEnterPasswordInput_textEdited();

    void on_cancelUserChoiceButton_clicked();

    void on_chooseUserTypeButton_clicked();

    void on_customerTab_currentChanged(int index);

    void on_viewPetsButton_clicked();

    void on_viewAppButton_clicked();

    void on_passwordEdit_returnPressed();

    void on_userNameEdit_returnPressed();

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
