#include "assistant.h"

Assistant::Assistant()
{

}
int Assistant::getassistantID(){
    return assistantID;
}
void Assistant::setassistantID(int newassistantID){
    assistantID = newassistantID;
}
int Assistant::getUserID(){
    return userID;
}
void Assistant::setUserID(int newassistantID){
    userID = newassistantID;
}
string Assistant::getsurname(){
    return surname;
}
void Assistant::setsurname(string newsurname){
    surname=newsurname;
}
string Assistant::getPhone(){
    return phone;
}
void Assistant::setPhone(string newPhone){
    phone=newPhone;
}
string Assistant::getFirstName(){
    return firstname;
}

void Assistant::setFirstName(string newfirstame){
    firstname=newfirstame;
}

string Assistant::getaddress(){
    return address;
}
void Assistant::setaddress(string newaddress){
address=newaddress;
}
string Assistant::getcity(){
    return city;
}
void Assistant::setcity(string newcity){
    city=newcity;
}
string Assistant::getzip(){
    return zip;
}
void Assistant::setzip(string newzip){
    zip=newzip;
}
string Assistant::getdateOfBirth(){
    return dateOfBirth;
}
void Assistant::setdateOfBirth(string newdateofbirth){
dateOfBirth=newdateofbirth;
}
string Assistant::getdepartment(){
    return department;
}
void Assistant::setdepartment(string newdepartment){
department=newdepartment;
}
string Assistant::geteMail(){
    return eMail;
}
void Assistant::seteMail(string neweMail){
eMail=neweMail;
}
void Assistant::registerassistant(string surname,string firstname,string address,string city, string zip, string dateofbirth, string department, string email){
   regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z]$");
   regex addresscheck("^[a-zæøåÆØÅA-Z+0-9]{2,20}$");
   regex zipcheck("^[0-9]{4}$");
   regex birthcheck("^[0-9]{2}[0-9]{2}[0-9]{4}$");
   //max 9 departments
   regex departmentcheck("^[1-9]{1}$");
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
            setFirstName(firstname);
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

       if(regex_match(department,departmentcheck)){
          seteMail(email);
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




