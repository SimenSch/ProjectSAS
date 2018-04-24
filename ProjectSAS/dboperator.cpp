#include "dboperator.h"
#include <QtSql>
#include <QtDebug>
#include <QMessageBox>

DbOperator::DbOperator(){}
//checks if the application has connectino to the database
void DbOperator::checkDB() {
    QMessageBox msgBox;

    string msg = "";

    if(!mydb.open()) {
        msg += "Database connectino failed";
    } else {
        msg += "Success";
    }
    msgBox.setText(QString::fromStdString(msg));
    msgBox.exec();
}

void DbOperator::addDatabase() {
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("../Kennel.db");
}

void DbOperator::open() { mydb.open(); }

void DbOperator::close() {
    mydb.close();
    QSqlDatabase::removeDatabase("QSQLITE");
}
