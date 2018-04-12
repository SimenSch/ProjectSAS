#ifndef LOGINUI_H
#define LOGINUI_H

#include "mainui.h"

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QToolButton>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

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

    QHBoxLayout *buttonsLayout;
    QHBoxLayout *mainLayout;
    QVBoxLayout *cellLayout;
private slots:
    void on_LoginClick();


};

#endif // LOGINUI_H
