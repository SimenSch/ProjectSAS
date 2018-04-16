#include "medjournal.h"

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
