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
void Session::setsessionID(string newsessionDate){
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
