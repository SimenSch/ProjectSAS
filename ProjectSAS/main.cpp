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
    li.createUser("bapekatt", "jungel");
    li.loginAttempt("apekatt", "jungel");
    li.mydb = QSqlDatabase::addDatabase("QSQLITE");
        li.mydb.setDatabaseName("../Kennel.db");
    li.checkDB();

    return a.exec();
}
