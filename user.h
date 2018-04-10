#ifndef USER_H
#define USER_H
#include <string>;
#include <iostream>
using namespace std;


class User
{
public:
    User();
    int getuserID(){
        return userID;
    }
    void setuserID(int newuserID){
        userID=newuserID;
    }
    string geteMail(){
        return eMail;
    }
    void seteMail(string neweMail){
        eMail=neweMail;
    }
    string getpassword(){
        return password;
    }
    void setpassword(string newpassword){
        password = newpassword;
    }
    string getuserType(){
        return userType;
    }
    void setuserType(string newusertype){
        userType=newusertype;
    }
private:
    int userID;
    string eMail;
    string password;
    string userType;
};

#endif // USER_H
