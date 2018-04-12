#ifndef MEDJOURNAL_H
#define MEDJOURNAL_H
#include <string>
#include <iostream>
using namespace std;


class MedJournal
{
public:
    MedJournal();
    int getmedJournalID();
    void setmedJournalID(int newmedJournalID);
    int getpetID();
    void setpetID(int newpetID);
private:
    int medJournalID;
    int  petID;
};

#endif // MEDJOURNAL_H
