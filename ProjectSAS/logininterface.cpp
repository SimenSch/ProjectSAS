#include "logininterface.h"
#include "dboperator.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <sys/stat.h>
#include <QtSql>
using namespace std;

LoginInterface::LoginInterface() {}
// s315586
//returns a hashed password
string LoginInterface::hashing(string word){
    hash<string> hashFunction;
    size_t temp = hashFunction(word);
    string returnable = to_string(temp);
    return returnable;
}
// s315586
//uses Qsql to get the hashed password to check the database password in method: loginAttempt().
string LoginInterface::getPassword(string username){
    DbOperator db;
    QSqlQuery* statem=new QSqlQuery(db.mydb);
    statem->prepare("SELECT Password FROM User WHERE EMail = ?;");
    statem->bindValue(0, QString::fromStdString(username));
    if(statem->exec()){
        if(statem->next()){
            return statem->value(0).toString().toStdString();
        }
    } else {
        cout << "GetPassword statement failed" << endl;
        return "";
    }
    cout << "GetPassword IF statement failed, major fuckups." << endl;
    return "";
}


// s315586
//checks if the input fields at the login is filled and if the password matches with the getPassword() method.
int LoginInterface::loginAttempt(string username, string password){
    if(username.empty()){
        return 2;
    } else if(password.empty()){
        return 2;
    }
    string pWord = hashing(password);
    if(getPassword(username) == pWord){
        return 99;
    } else {
        cout << "Login attempt failed: " << endl;
        return 1;
    }
    cout << "Login Attempt IF statement failed. Shits fucked yo." << endl;
    return 0;

}
// s315586
// this method if the username selected is available in the database.
int LoginInterface::createUser(string username, string password){
    DbOperator db;
    db.mydb.open();
    QSqlQuery* check=new QSqlQuery(db.mydb);
    check->prepare("SELECT EMail FROM User WHERE EMail = ?;");
    check->bindValue(0, QString::fromStdString(username));
    if(check->exec()){
        check->next();
        string checking = check->value(0).toString().toStdString();
        if( checking == username){
            cout << "username not available" << endl;
            return 0;
        }
    }
    string pWord = hashing(password);
    QSqlQuery* create=new QSqlQuery(db.mydb);
    create->prepare("INSERT INTO User (EMail, Password, UserType) VALUES (?, ?, ?)");
    create->bindValue(0, QString::fromStdString(username));
    create->bindValue(1, QString::fromStdString(pWord));
    create->bindValue(2, "Customer");
    if(create->exec()){
        return create->lastInsertId().toInt();
    } else {
        cout << "Create User failed." << endl;
    }
    cout << "CreateUser IF statement failed, u done fucked up" << endl;
    return 0;

}
// s315586 & s315593
int LoginInterface::getUserID(string userName) {
    DbOperator db;
    QSqlQuery* qry=new QSqlQuery(db.mydb);

    qry->prepare("SELECT UserID from User WHERE EMail = :username");
    qry->bindValue(":username", QString::fromStdString(userName));
    if(qry->exec()) {
        qry->next();
        return qry->value(0).toInt();
    } else {
        return 0;
    }

}
// s315586 & s315593
//retrieves usertype from database.
string LoginInterface::getUserType(int userID) {
    DbOperator db;
    QSqlQuery* qry=new QSqlQuery(db.mydb);
    qry->prepare("SELECT UserType from User WHERE UserID = :userid");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toStdString();
    } else {
        return "Get User Type failed";
    }
    cout << "GetUserType IF statement failed, what have you done??" << endl;
    return "NULL";
}
// s315586 & s315593
//retrieves ownerID from database
int LoginInterface::getOwnerID(int userID) {
    DbOperator db;
    QSqlQuery* qry=new QSqlQuery(db.mydb);
    qry->prepare("SELECT OwnerID from Owner WHERE UserID = :userid");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toInt();
    } else {
        cout << "Get Owner ID failed: " << endl;
        return 0;
    }
    cout << "GetOwnerID IF statement failed, shit has happend" << endl;
    return 0;
}
//s305491
//returns PetID from database
int LoginInterface::getPetID(string petName) {

    DbOperator db;

    QSqlQuery* qry=new QSqlQuery(db.mydb);
    qry->prepare("SELECT PetID from Pet WHERE Name = :petname");
    qry->bindValue(":petname", QString::fromStdString(petName));
    if(qry->exec()){
        qry->next();
        return qry->value(0).toInt();
    } else {
        return 0;
    }
}
