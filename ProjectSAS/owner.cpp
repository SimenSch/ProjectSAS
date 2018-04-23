#include "owner.h"
#include <regex>
//written by Simen Schaufel S305491
Owner::Owner()
{

}
int Owner::getuserID(){
    return userID;
}
void Owner::setUserID(int newuserid){
    userID=newuserid;
}
int Owner::getownerID(){
    return ownerID;
}
void Owner::setownerID(int newownerID){
    ownerID=newownerID;
}
string Owner::getsurname(){
    return surname;
}
void Owner::setsurname(string newsurname){
    surname=newsurname;
}
string Owner::getfirstName(){
    return firstName;
}
void Owner::setfirstName(string newfirstName){
    firstName=newfirstName;
}
string Owner::getPhone(){
    return phone;
}
void Owner::setPhone(string newphone){
phone=newphone;
}
string Owner::getaddress(){
    return address;
}
void Owner::setaddress(string newaddress){
address=newaddress;
}
string Owner::getcity(){
    return city;
}
void Owner::setcity(string newcity){
    city=newcity;
}
string Owner::getzip(){
    return zip;
}
void Owner::setzip(string newzip){
    zip=newzip;
}
string Owner::getdateOfBirth(){
    return dateOfBirth;
}
void Owner::setdateOfBirth(string newdateofbirth){
dateOfBirth=newdateofbirth;
}
string Owner::getdepartment(){
    return department;
}
void Owner::setdepartment(string newdepartment){
department=newdepartment;
}
string Owner::geteMail(){
    return eMail;
}
void Owner::seteMail(string neweMail){
eMail=neweMail;
}

