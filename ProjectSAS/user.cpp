#include "user.h"

User::User()
{

}

int User::getuserID(){
    return userID;
}
void User::setuserID(int newuserID){
    userID=newuserID;
}
string User::geteMail(){
    return eMail;
}
void User::seteMail(string neweMail){
    eMail=neweMail;
}
string User::getpassword(){
    return password;
}
void User::setpassword(string newpassword){
    password = newpassword;
}
string User::getuserType(){
    return userType;
}
void User::setuserType(string newusertype){
    userType=newusertype;
}
