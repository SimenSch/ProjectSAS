#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>;
#include <iostream>;
using namespace std;


class Assistant
{
public:
    Assistant();
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
