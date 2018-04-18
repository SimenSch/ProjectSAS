#ifndef MEDJOURNAL_H
#define MEDJOURNAL_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;


class MedJournal
{
public:
    MedJournal();
    int getmedJournalID();
    void setmedJournalID(int newmedJournalID);
    int getpetID();
    void setpetID(int newpetID);
    string getnotes();
    void setnotes(string newnote);
    void registermedjournal(int pID, string newnote);
private:
    int medJournalID;
    int  petID;
    string notes;
};

#endif // MEDJOURNAL_H
