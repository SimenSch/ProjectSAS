#ifndef SESSION_H
#define SESSION_H
#include <string>
#include <iostream>
#include <regex>

using namespace std;


class Session
{
public:
    Session();
    int getsessionID();
    void setsessionID(int newsessionID);
    int getassistantID();
    void setassistantID(int newassistantID);
    string getsessionType();
    void setsessionType(string newsessionType);
    string getsessionDate();
    void setsessionDate(string newsessionDate);
    string getsessionTime();
    void setsessionTime(string newsessionTime);
    string getlocation();
    void setlocation(string newlocation);
    void registersession(int assistant,string sessiontype,string newsessiondate,string sessiontime,string location);
private:
    int sessionID;
    int assistantID;
    string sessionType;
    string sessionDate;
    string sessionTime;
    string location;
};

#endif // SESSION_H
