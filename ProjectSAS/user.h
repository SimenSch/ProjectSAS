#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;


class User
{
public:
    User();
    int getuserID();
    void setuserID(int newuserID);
    string geteMail();
    void seteMail(string neweMail);
    string getpassword();
    void setpassword(string newpassword);
    string getuserType();
    void setuserType(string newusertype);

private:
    int userID;
    string eMail;
    string password;
    string userType;
};

#endif // USER_H
