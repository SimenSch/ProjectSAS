
#include "application.h"
#include "qsqldatabase.h"
#include "dboperator.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Application w;
    w.show();

    /*
    LoginInterface li;
    DbOperator swag;
    li.createUser("apekatt", "jungel");
    li.loginAttempt("apekatt", "jungel");
    li.mydb = QSqlDatabase::addDatabase("QSQLITE");
    li.mydb.setDatabaseName("../Kennel.db");
    li.checkDB();
    */


    return a.exec();
}
