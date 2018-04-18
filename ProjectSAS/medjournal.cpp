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
void MedJournal::setnotes(string newnote){
    notes=newnote;
}
void MedJournal::registermedjournal(int pID,string newnote){
    regex notecheck("^[a-zæøåÆØÅA-Z0-9\\.]$");

    try{
        if(regex_match(newnote,notecheck)){
            setpetID(pID);
            setnotes(newnote);
        }

    }
    catch(regex_error& e){

    }



}
