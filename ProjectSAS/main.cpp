#include "loginui.h"
#include "logininterface.h"

#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginUI l;
    l.show();
    LoginInterface li;
    li.createUser("apekatt", "jungel");
    li.loginAttempt("apekatt", "jungel");

    return a.exec();
}
