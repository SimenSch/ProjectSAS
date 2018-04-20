#include "owner.h"
#include <regex>
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
//full registration with validation when registering as a new owner (simen schaufel)
void Owner::registerowner(string surname,string firstname,string address,string city, string zip, string dateofbirth, string email){
   regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z]$");
   regex addresscheck("^[a-zæøåÆØÅA-Z+0-9]{2,20}$");
   regex zipcheck("^[0-9]{4}$");
   regex birthcheck("^[0-9]{2}[0-9]{2}[0-9]{4}$");
   regex emailcheck("^(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*)@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\\])$");
    try{
        if(regex_match(surname,onlyalphabeticcheck)){
            setsurname(surname);
        }
    }
    catch(regex_error& e){
        cout<<"please type in a valid surname";
    }
    try{
        if(regex_match(firstname,onlyalphabeticcheck)){
            setfirstName(firstname);
        }
    }
    catch(regex_error& e){
        cout<<"please type in a valid first name";
    }
   try{
       if(regex_match(address,addresscheck)){
           setaddress(address);
       }
   }
   catch(regex_error& e){
       cout<<"please type in a valid first name";
   }
   try{

       if(regex_match(city,onlyalphabeticcheck)){
           setcity(city);
       }
   }
   catch(regex_error& e){
       cout<<"please type in a valid first name";
   }
   try{

       if(regex_match(zip,zipcheck)){
           setzip(zip);
       }
   }
   catch(regex_error& e){
       cout<<"please type in a valid zip code";
   }
   try{

       if(regex_match(dateofbirth,birthcheck)){
           setdateOfBirth(dateofbirth);
       }
   }
   catch(regex_error& e){
       cout<<"please type in a valid zip code";
   }
   try{

       if(regex_match(email,emailcheck)){
          seteMail(email);
       }
   }
   catch(regex_error& e){
       cout<<"please type in a valid zip code";
   }



}
