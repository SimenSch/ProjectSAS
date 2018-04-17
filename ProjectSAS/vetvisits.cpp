#include "vetvisits.h"

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
void VetVisits::registervetvisits(int petid, string appointmentdate, string appointmenttime,string newdoctor){
    regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z]$");
    regex birthcheck("^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/|-|\\.)(?:0?[1,3-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29(\\/|-|\\.)0?2\\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])(\\/|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\{2})$");
    regex timecheck("^([0-9]|0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$");
    setpetID(petid);
    try{
        if(regex_match(appointmentdate,birthcheck)){
            setappointmentDate(appointmentdate);
        }
    }
    catch(regex_error& e){

    }
   try{
       if(regex_match(appointmenttime,timecheck)){
           setappointmentTime(appointmenttime);
       }
   }
   catch(regex_error& e){

   }
   try{

       if(regex_match(newdoctor,onlyalphabeticcheck)){
           setdoctor(newdoctor);
       }
   }
   catch(regex_error& e){
   }
}


