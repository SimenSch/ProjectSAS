#include "logininterface.h"
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
    QSqlQuery statem;
    statem.prepare("SELECT Password FROM Users WHERE Username = ?;");
    statem.bindValue(0, QString::fromStdString(username));

    if(statem.exec()){
        if(statem.next()){
            return statem.value(0).toString().toStdString();
        }
    } else {
        return "";
    }
    return "";
}



int LoginInterface::loginAttempt(string username, string password){
    string uName = hashing(username);
    string pWord = hashing(password);
    if(getPassword(uName) == pWord){
        return 99;
    } else {
        return 1;
    }
    return 0;

}

int LoginInterface::createUser(string username, string password){
    string pWord = hashing(password);
    QSqlQuery create;
    create.prepare("INSERT INTO Users (Username, Password) "
                   "VALUES (?, ?");
    create.bindValue(0, QString::fromStdString(username));
    create.bindValue(1, QString::fromStdString(pWord));
    if(create.exec()){
        QSqlQuery skra;
        return skra.exec("select @id:=id as id from class where id = last_insert_id();");
    }
    return 0;
}
