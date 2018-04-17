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
    cout << uName << " <-uN pN-> " << pWord;
    if(getPassword(uName) == pWord){
        return 99;
    } else {
        return 1;
    }
    return 0;
}

bool LoginInterface::createUser(string username, string password){
    fstream myFile;
    myFile.open("notLogin.txt");
    if(myFile.is_open()){
        cout << "Create user, opening successful" << endl;
        string hashUsername = hashing(username);
        string hashPassword = hashing(password);
        string inputText = hashUsername;
        inputText.append(", ");
        inputText.append(hashPassword);
        while(!myFile.eof()){
            string uNameCheck;
            getline(myFile, uNameCheck);
            if(uNameCheck == inputText){
                cout << "Username already registered" << endl;
                return false;
            }
        }
        myFile.close();
        myFile.open("notLogin.txt", ofstream::app);
        myFile << inputText << endl;
        myFile.flush();
        myFile.close();
    } else {
        cout << "Failure to open file.";
    }
    return true;
}
