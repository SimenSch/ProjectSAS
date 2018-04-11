#ifndef LOGINUI_H
#define LOGINUI_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QToolButton>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>

class LoginUI: public QWidget
{
     Q_OBJECT
public:
    LoginUI(QWidget *parent = 0);
    ~LoginUI();
private:
    QLabel *welcomeLabel;
    QLabel *userLabel;
    QLabel *passwordLabel;

    QLineEdit *userEdit;
    QLineEdit *passwordEdit;

    QPushButton *loginButton;
    QPushButton *registerButton;


};

#endif // LOGINUI_H
