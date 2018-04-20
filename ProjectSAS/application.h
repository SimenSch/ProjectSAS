#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>
#include "user.h"

namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    User activeUser;
    explicit Application(QWidget *parent = 0);
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();
    void loadPets();
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

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
