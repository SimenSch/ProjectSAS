#ifndef VETVISITS_H
#define VETVISITS_H
#include <string>;
#include <iostream>
using namespace std;


class VetVisits
{
public:
    VetVisits();
private:
    int visitID;
    int perID;
    string appointmentDate;
    string appointmentTime;
    string doctor;
    string notes;

};

#endif // VETVISITS_H
