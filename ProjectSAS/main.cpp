
#include "application.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
    LoginUI l;
    l.show();
    LoginInterface li;
    li.createUser("bapekatt", "jungel");
    li.loginAttempt("apekatt", "jungel");
    li.mydb = QSqlDatabase::addDatabase("QSQLITE");
        li.mydb.setDatabaseName("../Kennel.db");
    li.checkDB();
=======
    Application w;
    w.show();
>>>>>>> e4dd08b803efa7e1df98b5b3f7f800a984deeb97

    return a.exec();
}
