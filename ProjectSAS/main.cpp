#include "logininterface.h"
#include "application.h"
#include "qsqldatabase.h"
#include "dboperator.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Application w;
    w.show();

    LoginInterface li;
    DbOperator swag;
    li.createUser("apekatt", "jungel");
    li.loginAttempt("apekatt", "jungel");
    swag.mydb = QSqlDatabase::addDatabase("QSQLITE");
    swag.mydb.setDatabaseName("../Kennel.db");
    swag.checkDB();

    return a.exec();
}
