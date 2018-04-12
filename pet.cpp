#include "pet.h"

Pet::Pet()
{

}
int Pet::getpetID(){
    return petID;
}
void Pet::setpetID(int newpetID){

}
int Pet::getownerID(){
    return ownerID;
}
void Pet::setownerID(int newownerID){
    ownerID=newownerID;
}
string Pet::getname(){
    return name;
}
void Pet::setname(string newname){
    name=newname;
}
string Pet::getpetType(){
    return petType;
}
void Pet::setpetType(string newpetType){
    petType=newpetType;
}
string Pet::getrace(){
    return race;
}
void Pet::setrace(string newrace){
    race=newrace;
}
string Pet::getdateOfBirth(){
    return dateOfBirth;
}
void Pet::setdateOfBirth(string newdateofbirth){
dateOfBirth=newdateofbirth;
}
string Pet::getnotes(){
    return notes;
}
void Pet::setnotes(string newnotes){
notes=newnotes;
}
int Pet::getmedJournalID(){
    return medJournalID;
}
void Pet::setmedJournalID(int newmedJournalID){
medJournalID=newmedJournalID;
}
