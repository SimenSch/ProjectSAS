#ifndef VETVISITS_H
#define VETVISITS_H
#include <string>;
#include <iostream>
using namespace std;


class VetVisits
{
public:
    VetVisits();
    int getvisitID(){
        return visitID;
    }
    void setvisitID(int newvisitID){
        visitID=newvisitID;
    }
    int getperID(){
        return perID;
    }
    void setperID(int newperID){
        perID=newperID;
    }
    string getappointmentDate(){
        return appointmentDate;
    }
    void setappointmentDate(string newappointmentDate){
        appointmentDate=newappointmentDate;
    }
    string getappointmentTime(){
        return appointmentDate;
    }
    void setappointmentTime(string newappointmentTime){
        appointmentTime=newappointmentTime;
    }
    string getdoctor(){
        return doctor;
    }
    void setdoctor(string newdoctor){
        doctor=newdoctor;
    }
    string getnotes(){
        return notes;
    }
    void setnotes(string newdoctor){
        notes=newdoctor;
    }

private:
    int visitID;
    int perID;
    string appointmentDate;
    string appointmentTime;
    string doctor;
    string notes;

};

#endif // VETVISITS_H
