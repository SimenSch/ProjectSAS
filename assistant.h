#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>
#include <iostream>
using namespace std;


class Assistant
{
public:
    Assistant();
    int getassistantID();
    void setassistantID(int newassistantID);
    string getsurname();
    void setsurname(int newsurname);
    string getfirstname();
    void setfirstname(int newfirstame);
    string getaddress();
    void setaddress(string newaddress);
    string getcity();
    void setcity(string newcity);

    int getzip();

    void setzip(int newzip);

    string getdateOfBirth();
    void setdateOfBirth(string newdateofbirth);
    string getdepartment();
    void setdepartment(string newdepartment);
    string geteMail();
    void seteMail(string neweMail);

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
