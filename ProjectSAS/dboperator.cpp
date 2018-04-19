#include "dboperator.h"
#include <QtSql>
#include <QtDebug>
#include <QMessageBox>

DbOperator::DbOperator(){}

void DbOperator::checkDB() {
    QMessageBox msgBox;

    string msg = "";

    if(!mydb.open()) {
        msg += "Feilet: u mom gay";
    } else {
        msg += "Ja: ur ancestors incestors";
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
