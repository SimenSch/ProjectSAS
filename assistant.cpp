#include "assistant.h"

Assistant::Assistant(){}

    int Assistant::getassistantID(){
        return assistantID;
    }
    void Assistant::setassistantID(int newassistantID){
        assistantID = newassistantID;
    }
    string Assistant::getsurname(){
        return surname;
    }
    void Assistant::setsurname(int newsurname){
        surname=newsurname;
    }
    string Assistant::getfirstname(){
        return firstname;
    }
    void Assistant::setfirstname(int newfirstame){
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
    int Assistant::getzip(){
        return zip;
    }
    void Assistant::setzip(int newzip){
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

