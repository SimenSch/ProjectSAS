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
#include <QtDebug>
#include <QMessageBox>
using namespace std;

LoginInterface::LoginInterface() {
}


void LoginInterface::checkDB() {
        QMessageBox msgBox;

        string msg = "";

        if(!mydb.open()) {
            msg += "Nei.. Feilet";
        } else {
            msg += "Jaa!! :DDDD";
        }

        msgBox.setText(QString::fromStdString(msg));

        msgBox.exec();
    }

string LoginInterface::hashing(string word){
    hash<string> hashFunction;
    size_t temp = hashFunction(word);
    string returnable = to_string(temp);
    return returnable;
}


bool LoginInterface::loginAttempt(string username, string password){
    string search = hashing(username);
    search.append(", ");
    search.append(hashing(password));
    ifstream myFile;
    myFile.open("notLogin.txt");
        if(myFile.fail()){
            cout << "Login attempt: login file failed" << endl;
            return false;
        }
        bool isFound=0;
        while(!myFile.eof() && isFound == 0){
            string line;
            getline(myFile,line);
            if (line == search){
                cout << "Getline: Login credentials found" << endl;
                isFound = 1;
            }
        }
        if(isFound){
            cout << "isFound: Password is found " << endl;
            return true;
        }
        if(myFile.eof()&&(!isFound)){
            cout << "If Myfile.eof && !isFound: Invalid login attempt. Please try again. " << endl;
            return false;
        }
    myFile.close();
    return false;
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
