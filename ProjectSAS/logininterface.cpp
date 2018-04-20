#include "logininterface.h"
#include "dboperator.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <fstream>
#include <sys/stat.h>
#include <QtSql>
using namespace std;

LoginInterface::LoginInterface() {}

string LoginInterface::hashing(string word){
    hash<string> hashFunction;
    size_t temp = hashFunction(word);
    string returnable = to_string(temp);
    return returnable;
}

string LoginInterface::getPassword(string username){
    DbOperator db;
    QSqlQuery* statem=new QSqlQuery(db.mydb);
    statem->prepare("SELECT Password FROM User WHERE EMail = ?;");
    statem->bindValue(0, QString::fromStdString(username));

    if(statem->exec()){

        cout << " plz print dis sheeeet -> " << statem->value(0).toString().toStdString();
        if(statem->next()){
            cout << statem->value(0).toString().toStdString();
            return statem->value(0).toString().toStdString();
        }
    } else {
        return "";
    }
    return "";
}



int LoginInterface::loginAttempt(string username, string password){
    string pWord = hashing(password);
    if(getPassword(username).compare(pWord)){
        return 99;
    } else {
        return 1;
    }
    return 0;

}

int LoginInterface::createUser(string username, string password){
    DbOperator db;
    db.mydb.open();
    string pWord = hashing(password);
    QSqlQuery* create=new QSqlQuery(db.mydb);
    create->prepare("INSERT INTO User (EMail, Password, UserType) VALUES (?, ?, ?)");
    create->bindValue(0, QString::fromStdString(username));
    create->bindValue(1, QString::fromStdString(pWord));
    create->bindValue(2, "Customer");
    if(create->exec()){
        return create->lastInsertId().toInt();
    } else {
        cout << "Create User failed.";
    }
    return 0;

}

int LoginInterface::getUserID(string userName) {
    DbOperator db;
    int userID;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT UserID from User WHERE EMail = :username");
    qry->bindValue(":username", QString::fromStdString(userName));
    if(qry->exec()) {
        qry->next();
        cout << "Query 0 i getuserID: " << qry->value(0).toInt();
        userID = qry->value(0).toInt();
    }

    cout << "User ID: " << userID;

    return userID;
}

string LoginInterface::getUserType(int userID) {
    DbOperator db;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT UserType from User WHERE UserID = :userid");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        cout << "UserType: " << qry->value(0).toString().toStdString();
        return qry->value(0).toString().toStdString();
    } else {
        return "Get User Type failed";
    }

}

int LoginInterface::getOwnerID(int userID) {
    DbOperator db;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT UserID from User WHERE UserID = :userid");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toInt();
    } else {
        return 0;
    }
}
int LoginInterface::getPetIDAppointment(int userID) {
    DbOperator db;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT PetID from Pet WHERE OwnerID = (SELECT OwnerID from Owner where UserID=:userid)");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toInt();
    } else {
        return 0;
    }
}
int LoginInterface::getOrderIDAppointment(int userID) {
    DbOperator db;

    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT OrderID from Pet WHERE OwnerID = (SELECT OwnerID from Owner where UserID=:userid)");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toInt();
    } else {
        return 0;
    }
}
