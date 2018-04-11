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
    string hashedUsername = hashing(username);
    string hashedPassword = hashing(password);

    int loginAttempt = 0;

    while (loginAttempt < 5){
        string search = hashedUsername;
        search.append(", ");
        search.append(hashedPassword);

        ifstream myFile;
        myFile.open ("notLogin.txt");
        if(myFile.fail()){
            cout << "login file failed";
            exit(1);
        }

        bool isFound=0;
        while(!myFile.eof())
        {
            string temp = "";
            getline(myFile,temp);
            for(int i=0;i<search.size();i++)
            {
                if(temp[i]==search[i])
                    isFound = 1;
                else {
                    isFound =0;
                    break;
                }
            }
            if(isFound)
            {
                cout << "Password is: ";
                for(int i = search.size()+1;i<temp.size();i++)
                    cout << temp[i];
                break;
            }
        }
        if(myFile.eof()&&(!isFound))
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
        myFile.close();
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
    } else {
    cout << "Welcome, you are now logged in.\n";
    }
}

/*
bool fileExists(const string* notLogin) {
    struct stat buf;
    return (stat(notLogin, &buf) == 0);
}
*/
void LoginInterface::createUser(string username, string password){
        ofstream myFile;
        myFile.open ("notLogin.txt");
        if(myFile.fail()){
            cout << "login file failed";
            exit(1);
        }
        string hashUsername = hashing(username);
        string hashPassword = hashing(password);
        myFile << hashUsername << ", " << hashPassword << " /n";
        myFile.close();
}
