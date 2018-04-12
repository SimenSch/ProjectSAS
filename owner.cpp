#include "owner.h"

Owner::Owner()
{

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
int Owner::getzip(){
    return zip;
}
void Owner::setzip(int newzip){
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
