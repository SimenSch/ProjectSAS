#ifndef VETVISITS_H
#define VETVISITS_H
#include <string>
#include <iostream>
using namespace std;


class VetVisits
{
public:
    VetVisits();
    int getvisitID();
    void setvisitID(int newvisitID);
    int getperID();
    void setperID(int newperID);
    string getappointmentDate();
    void setappointmentDate(string newappointmentDate);
    string getappointmentTime();
    void setappointmentTime(string newappointmentTime);
    string getdoctor();
    void setdoctor(string newdoctor);
    string getnotes();
    void setnotes(string newdoctor);
private:
    int visitID;
    int perID;
    string appointmentDate;
    string appointmentTime;
    string doctor;
    string notes;

};

#endif // VETVISITS_H
