#ifndef OWNER_H
#define OWNER_H
#include <string>;
#include <iostream>
using namespace std;


class Owner
{
public:
    Owner();
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
