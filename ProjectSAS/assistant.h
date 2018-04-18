#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;


class Assistant
{
public:
    Assistant();
    int getassistantID();
    void setassistantID(int newassistantID);
    string getsurname();
    void setsurname(string newsurname);
    string getfirstname();
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
    void registerassistant(string surname,string firstname,string address,string city, string zip, string dateofbirth, string department, string email);

private:
    int assistantID;
    string surname;
    string firstname;
    string address;
    string city;
    string zip;
    string dateOfBirth;
    string department;
    string eMail;

};

#endif // ASSISTANT_H
