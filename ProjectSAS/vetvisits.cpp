#include "vetvisits.h"
//written by Simen Schaufel
VetVisits::VetVisits()
{

}
int VetVisits::getvisitID(){
    return visitID;
}
void VetVisits::setvisitID(int newvisitID){
    visitID=newvisitID;
}
int VetVisits::getpetID(){
    return petID;
}
void VetVisits::setpetID(int newpetID){
    petID=newpetID;
}
string VetVisits::getappointmentDate(){
    return appointmentDate;
}
void VetVisits::setappointmentDate(string newappointmentDate){
    appointmentDate=newappointmentDate;
}
string VetVisits::getappointmentTime(){
    return appointmentDate;
}
void VetVisits::setappointmentTime(string newappointmentTime){
    appointmentTime=newappointmentTime;
}
string VetVisits::getdoctor(){
    return doctor;
}
void VetVisits::setdoctor(string newdoctor){
    doctor=newdoctor;
}
string VetVisits::getnotes(){
    return notes;
}
void VetVisits::setnotes(string newdoctor){
    notes=newdoctor;
}
