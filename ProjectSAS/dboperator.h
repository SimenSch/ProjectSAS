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
    void open();
    void close();
    bool isOpen();
};

#endif // DBOPERATOR_H
