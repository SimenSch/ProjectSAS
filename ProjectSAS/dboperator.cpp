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
