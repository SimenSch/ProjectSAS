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
    explicit Application(QWidget *parent = 0);
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();
    void on_loadPetsButton_clicked();
    void on_cancelRegisterButton_clicked();
    void on_newUserButton_clicked();
    void on_registerButton_clicked();
    void on_addPetToDBButton_clicked();
    void on_addPetButton_clicked();
    void on_cancelPetAddButton_clicked();


private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
