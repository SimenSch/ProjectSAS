#ifndef MEDJOURNAL_H
#define MEDJOURNAL_H
#include <string>;
#include <iostream>
using namespace std;


class MedJournal
{
public:
    MedJournal();
    int getmedJournalID(){
        return medJournalID;
    }
    void setmedJournalID(int newmedJournalID){
        medJournalID = newmedJournalID;
    }
private:
    int medJournalID;
    int  petID;
};

#endif // MEDJOURNAL_H
