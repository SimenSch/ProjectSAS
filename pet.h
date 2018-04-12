#ifndef PET_H
#define PET_H
#include <string>
#include <iostream>
using namespace std;


class Pet
{
public:
    Pet();
    int getpetID();
    void setpetID(int newpetID);
    int getownerID();
    void setownerID(int newownerID);
    string getname();
    void setname(string newname);
    string getpetType();
    void setpetType(string newpetType);
    string getrace();
    void setrace(string newrace);
    string getdateOfBirth();
    void setdateOfBirth(string newdateofbirth);
    string getnotes();
    void setnotes(string newnotes);
    int getmedJournalID();
    void setmedJournalID(int newmedJournalID);
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
