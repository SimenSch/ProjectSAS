#ifndef PET_H
#define PET_H
#include <string>;
#include <iostream>
using namespace std;


class Pet
{
public:
    Pet();
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
