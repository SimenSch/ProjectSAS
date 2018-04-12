#include "logininterface.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <fstream>
#include <sys/stat.h>
using namespace std;

LoginInterface::LoginInterface() {}

string LoginInterface::hashing(string word){
    hash<string> hashFunction;
    size_t temp = hashFunction(word);
    string returnable = to_string(temp);
    return returnable;
}


void LoginInterface::loginAttempt(string username, string password){
    string search = hashing(username);
    search.append(", ");
    search.append(hashing(password));
    int loginAttempt = 0;
    ifstream myFile;
    myFile.open("notLogin.txt");
    while (loginAttempt < 5){
        if(myFile.fail()){
            cout << "Login attempt: login file failed" << endl;
            exit(1);
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
            break;
        }
        if(myFile.eof()&&(!isFound)){
            cout << "If Myfile.eof && !isFound: Invalid login attempt. Please try again. " << endl;
            loginAttempt++;
        }
    }
    myFile.close();
    if (loginAttempt == 5)
    {
        cout << "Too many login attempts! The program will now terminate.";
        exit (666);
    } else {
    cout << "Welcome, you are now logged in.\n";
    }
}

void LoginInterface::createUser(string username, string password){
    ofstream myFile;
    myFile.open ("notLogin.txt", ofstream::app);
    if(myFile.is_open()){
        cout << "Create user, opening successful" << endl;
        string hashUsername = hashing(username);
        string hashPassword = hashing(password);
        string inputText = hashUsername;
        inputText.append(", ");
        inputText.append(hashPassword);
        myFile << inputText << endl;
        myFile.flush();
        myFile.close();
    } else {
        cout << "Failure to open file.";
    }
}
