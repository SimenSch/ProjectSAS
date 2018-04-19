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
void User::registeruser(string email,string password,string usertype){
    regex passwordcheck("^[a-zæøåÆØÅA-Z]{4,10}[0-9]{2,5}$");
    regex emailcheck("^(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*)@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\\])$");
     try{
         if(regex_match(email,emailcheck)){
             seteMail(email);
         }
     }
     catch(regex_error& e){

     }
     try{
         if(regex_match(password,passwordcheck)){
             setpassword(password);
         }
     }
     catch(regex_error& e){

     }
    if(usertype=="admin"||usertype=="owner"||usertype=="assistant"){
        setuserType(usertype);
    }
    else{

    }


}
