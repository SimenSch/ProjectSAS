#include "medjournal.h"
//written by simen schaufel s305491
MedJournal::MedJournal(){}

int MedJournal::getmedJournalID(){
    return medJournalID;
}
void MedJournal::setmedJournalID(int newmedJournalID){
    medJournalID = newmedJournalID;
}
int MedJournal::getpetID(){
    return petID;
}
void MedJournal::setpetID(int newpetID){
    petID = newpetID;
}
void MedJournal::setnotes(string newnote){
    notes=newnote;
}
