#ifndef DBOPERATOR_H
#define DBOPERATOR_H
#include <iostream>
#include <QtSql>
#include <QtDebug>
using namespace std;

class DbOperator
{
public:
    DbOperator();
    void addDatabase();
    void checkDB();
    QSqlDatabase mydb;
};

#endif // DBOPERATOR_H
