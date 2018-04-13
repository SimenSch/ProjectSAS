#ifndef OWNER_H
#define OWNER_H
#include <string>
#include <iostream>
using namespace std;


class Owner
{
public:
    Owner();
    int getownerID();
    void setownerID(int newownerID);
    string getsurname();
    void setsurname(string newsurname);
    string getfirstName();
    void setfirstName(string newfirstName);
    string getadress();
    void setfirstname(string newfirstame);
    string getaddress();
    void setaddress(string newaddress);
    string getcity();
    void setcity(string newcity);
    string getzip();
    void setzip(string newzip);
    string getdateOfBirth();
    void setdateOfBirth(string newdateofbirth);
    string getdepartment();
    void setdepartment(string newdepartment);
    string geteMail();
    void seteMail(string neweMail);
    void registerowner(string surname,string firstname,string address,string city, string zip, string dateofbirth, string email);
private:
    int ownerID;
    string surname;
    string firstName;
    string address;
    string city;
    string zip;
    string dateOfBirth;
    string department;
    string eMail;

};

#endif // OWNER_H
