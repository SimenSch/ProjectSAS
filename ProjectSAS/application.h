#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>

namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = 0);
    ~Application();
private slots:
    void on_loginButton_clicked();
    void on_switchUserButton_clicked();
    void on_loadPetsButton_clicked();
    void on_cancelRegisterButton_clicked();
    void on_newUserButton_clicked();

<<<<<<< HEAD
    void on_pushButton_2_clicked();
=======
    void on_registerButton_clicked();

    void on_addPetToDBButton_clicked();

    void on_addPetButton_clicked();

    void on_cancelPetAddButton_clicked();
>>>>>>> 2976d01c79f26748a75d41268c9dd08bf09332b5

private:
    Ui::Application *ui;
};

#endif // APPLICATION_H
