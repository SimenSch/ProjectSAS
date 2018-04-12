#ifndef LOGININTERFACE_H
#define LOGININTERFACE_H
#include <iostream>
#include <string>
using namespace std;


class LoginInterface
{
public:
    LoginInterface();
    void loginAttempt(string username, string password);
    void createUser(string username, string password);
    //bool fileExists(const string* file);
private:
    string username;
    string password;
    string hashedPassword;
    string hashedUsername;


    string hashing(string word);

};


#endif // LOGININTERFACE_H
