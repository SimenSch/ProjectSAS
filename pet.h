#ifndef PET_H
#define PET_H
#include <string>;
#include <iostream>
using namespace std;


class Pet
{
public:
    Pet();
    int getpetID(){
        return petID;
    }
    void setpetID(int newpetID){

    }
    int getownerID(){
        return ownerID;
    }
    void setownerID(int newownerID){
        ownerID=newownerID;
    }
    string getname(){
        return name;
    }
    void setname(string newname){
        name=newname;
    }
    string getpetType(){
        return petType;
    }
    void setpetType(string newpetType){
        petType=newpetType;
    }
    int getrace(){
        return race;
    }
    void setpetID(int newrace){
        race=newrace;
    }
    string getdateOfBirth(){
        return dateOfBirth;
    }
    void setdateOfBirth(string newdateofbirth){
    dateOfBirth=newdateofbirth;
    }
    string getnotes(){
        return notes;
    }
    void setnotes(string newnotes){
    notes=newnotes;
    }
    int getmedJournalID(){
        return medJournalID;
    }
    void setmedJournalID(int newmedJournalID){
    medJournalID=newmedJournalID;
    }
private:
    int petID;
    int ownerID;
    string name;
    string petType;
    string race;
    string dateOfBirth;
    string notes;
    int medJournalID;

};

#endif // PET_H
