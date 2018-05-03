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
/*
 * Returns the hashed password of the selected user
 * Made by Anders Nøss Olsen(s315586)
 */

string LoginInterface::getPassword(string username){
    DbOperator db;
    QSqlQuery* statem=new QSqlQuery(db.mydb);
    statem->prepare("SELECT Password FROM User WHERE EMail = ?;");
    statem->bindValue(0, QString::fromStdString(username));
    if(statem->exec()){
        if(statem->next()){
            return statem->value(0).toString().toStdString();
        }
        else {
        return "ERROR";
        }
    }
    return "ERROR";
}



/*
 * Login function
 * Returns a value based on the outcome, where code 99 is a successful request, 2 is the code for when either fields are empty, and 1 if it failed
 * Made by Anders Nøss Olsen(s315586)
 */

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
    return 0;

}

/*
 * Checks whether the email is available for use, and gives a boolean value based on the outcome
 * Co-operative effort between Anders Nøss Olsen(s315586) and Simen Persch Andersen(s315593)
 */
bool LoginInterface::userAvailable(string eMail) {
    DbOperator db;
    QSqlQuery* check=new QSqlQuery(db.mydb);
    check->prepare("SELECT Count(EMail) FROM User WHERE EMail = ?;");
    check->bindValue(0, QString::fromStdString(eMail));
    if(check->exec()){
        check->next();
        if(check->value(0).toInt() > 0){
            return false;
        }
        else {
            return true;
        }
    }
    return false;


}
/*
 *  Creates a user with the selected input parameters
 * Made by Anders Nøss Olsen(s315586)
 */
int LoginInterface::createUser(string username, string password, string userType){
    DbOperator db;

    string pWord = hashing(password);
    QSqlQuery* create=new QSqlQuery(db.mydb);
    create->prepare("INSERT INTO User (EMail, Password, UserType) VALUES (?, ?, ?)");
    create->bindValue(0, QString::fromStdString(username));
    create->bindValue(1, QString::fromStdString(pWord));
    create->bindValue(2, QString::fromStdString(userType));
    if(create->exec()){
        return create->lastInsertId().toInt();
    } else {
        return 0;
    }

}
// s315586 & s315593
/* Gets the user ID of the selected username(email)
 * Co-operative effort between Anders Nøss Olsen(s315586) and Simen Persch Andersen(s315593)
 */
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

/*
 * Return the user type of the user.
 * Made by Anders Nøss Olsen(s315586)
 */

string LoginInterface::getUserType(int userID) {
    DbOperator db;
    QSqlQuery* qry=new QSqlQuery(db.mydb);
    qry->prepare("SELECT UserType from User WHERE UserID = :userid");
    qry->bindValue(":userid", userID);
    if(qry->exec()){
        qry->next();
        return qry->value(0).toString().toStdString();
    } else {
        return "NULL";
    }
}
/*
 * Returns the ownerID the selected user
 * Made by Anders Nøss Olsen(s315586)
 */

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

/*
 * Returns the petID of the entered pet name
 * Made by Simen Persch Andersen(s315586)|
 */

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
