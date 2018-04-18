#include "pet.h"

Pet::Pet()
{

}
int Pet::getpetID(){
    return petID;
}
void Pet::setpetID(int newpetID){
    petID =newpetID;
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
// ownerid and mID is copied from the owner and the medjournal in question.
void Pet::registerpet(int owner,string name, string race,string dateofbrith,string newnotes, int mID){
    regex onlyalphabeticcheck("^[a-zæøåÆØÅA-Z\\.]$");
    regex notecheck("^[a-zæøåÆØÅA-Z0-9\\.]$");
    regex birthcheck("^[0-9]{2}[0-9]{2}[0-9]{4}$");
    setownerID(owner);
    setmedJournalID(mID);
    try{
        if(regex_match(name,onlyalphabeticcheck)){
            setname(name);
        }
    }
    catch(regex_error& e){
    }
    try{
        if(regex_match(race,onlyalphabeticcheck)){
            setrace(race);
        }
    }
    catch(regex_error& e){
    }
    try{
        if(regex_match(dateofbrith,birthcheck)){
            setdateOfBirth(dateofbrith);
        }
    }
    catch(regex_error& e){
    }
    try{
        if(regex_match(newnotes,notecheck)){
            setnotes(newnotes);
        }
    }
    catch(regex_error& e){
    }
}
