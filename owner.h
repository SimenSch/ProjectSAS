#ifndef OWNER_H
#define OWNER_H
#include <string>;
#include <iostream>
using namespace std;


class Owner
{
public:
    Owner();
    int getownerID(){
        return ownerID;
    }
    void setownerID(int newownerID){
        ownerID=newownerID;
    }
    string getsurname(){
        return surname;
    }
    void setsurname(string newsurname){
        surname=newsurname;
    }
    string getfirstName(){
        return firstName;
    }
    void setfirstName(string newfirstName){
        firstName=newfirstName;
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
    int ownerID;
    string surname;
    string firstName;
    string address;
    string city;
    int zip;
    string dateOfBirth;
    string department;
    string eMail;

};

#endif // OWNER_H
