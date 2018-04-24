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

    bool userAvailable(string eMail);
    int loginAttempt(string username, string password);
    int createUser(string username, string password, string userType);
    int getPetID(string petName);
    int getUserID(string userName);
    string getUserType(int userID);
    string getPassword(string username);
    int getOwnerID(int userID);
    string hashing(string word);
    //bool fileExists(const string* file);
private:
    string username;
    string password;
    string hashedPassword;
    string hashedUsername;


};


#endif // LOGININTERFACE_H
