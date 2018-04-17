#include "session.h"

Session::Session()
{

}
int Session::getsessionID(){
    return sessionID;
}
void Session::setsessionID(int newsessionID){
    sessionID= newsessionID;
}
int Session::getassistantID(){
    return assistantID;
}
void Session::setassistantID(int newassistantID){
    assistantID= newassistantID;
}
string Session::getsessionType(){
    return sessionType;
}
void Session::setsessionType(string newsessionType){
    sessionType= newsessionType;
}
string Session::getsessionDate(){
    return sessionDate;
}
void Session::setsessionDate(string newsessionDate){
    sessionDate= newsessionDate;
}
string Session::getsessionTime(){
    return sessionTime;
}
void Session::setsessionTime(string newsessionTime){
    sessionTime= newsessionTime;
}
string Session::getlocation(){
    return location;
}
void Session::setlocation(string newlocation){
    location= newlocation;
}
void Session::registersession(int assistant,string sessiontype,string sessiondate,string sessiontime,string location){
    setassistantID(assistant);

    regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z]$");
    regex birthcheck("^(?:(?:31(\\/|-|\\.)(?:0?[13578]|1[02]))\\1|(?:(?:29|30)(\\/|-|\\.)(?:0?[1,3-9]|1[0-2])\\2))(?:(?:1[6-9]|[2-9]\\d)?\\d{2})$|^(?:29(\\/|-|\\.)0?2\\3(?:(?:(?:1[6-9]|[2-9]\\d)?(?:0[48]|[2468][048]|[13579][26])|(?:(?:16|[2468][048]|[3579][26])00))))$|^(?:0?[1-9]|1\\d|2[0-8])(\\/|-|\\.)(?:(?:0?[1-9])|(?:1[0-2]))\\4(?:(?:1[6-9]|[2-9]\\d)?\\{2})$");
    regex timecheck("^([0-9]|0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$");
     try{
         if(regex_match(sessiontype,onlyalphabeticcheck)){
             setsessionType(sessiontype);
         }
     }
     catch(regex_error& e){
     }
     try{
         if(regex_match(sessiondate,birthcheck)){
             setsessionDate(sessiondate);
         }
     }
     catch(regex_error& e){

     }
    try{
        if(regex_match(sessiontime,timecheck)){
            setsessionTime(sessiontime);
        }
    }
    catch(regex_error& e){

    }
    try{

        if(regex_match(location,onlyalphabeticcheck)){
            setlocation(location);
        }
    }
    catch(regex_error& e){
    }
}
