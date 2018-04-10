#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>;
#include <iostream>
using namespace std;


class Assistant
{
public:
    Assistant();
    int getassistantID(){
        return assistantID;
    }
    void setassistantID(int newassistantID){
        assistantID = newassistantID;
    }
    string getsurname(){
        return surname;
    }
    void setsurname(int newsurname){
        surname=newsurname;
    }
    string getfirstname(){
        return firstname;
    }
    void setfirstname(int newfirstame){
        firstname=newfirstame;
    }
    string getadress(){
        return firstname;
    }
    void setfirstname(string newfirstame){
        firstname=newfirstame;
    }
    string getaddress(){
        return address;
    }
    void setaddress(string newaddress){
    address=newaddress;
    }
    string getcity(){
        return city;
    }
    void setcity(string newcity){
        city=newcity;
    }
    int getzip(){
        return zip;
    }
    void setzip(int newzip){
        zip=newzip;
    }
    string getdateOfBirth(){
        return dateOfBirth;
    }
    void setdateOfBirth(string newdateofbirth){
    dateOfBirth=newdateofbirth;
    }
    string getdepartment(){
        return department;
    }
    void setdepartment(string newdepartment){
    department=newdepartment;
    }
    string geteMail(){
        return eMail;
    }
    void seteMail(string neweMail){
    eMail=newdepartment;
    }

private:
    int assistantID;
    string surname;
    string firstname;
    string address;
    string city;
    int zip;
    string dateOfBirth;
    string department;
    string eMail;

};

#endif // ASSISTANT_H
