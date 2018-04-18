#ifndef LOGININTERFACE_H
#define LOGININTERFACE_H
#include <iostream>
#include <string>
#include <QtSql>
using namespace std;


class LoginInterface
{
public:
    LoginInterface();
    int loginAttempt(string username, string password);
    int createUser(string username, string password);
    string getPassword(string username);

    //bool fileExists(const string* file);
private:
    string username;
    string password;
    string hashedPassword;
    string hashedUsername;

    string hashing(string word);

};


#endif // LOGININTERFACE_H
