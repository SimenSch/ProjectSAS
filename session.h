<<<<<<< HEAD
#ifndef SESSION_H
#define SESSION_H
#include <string>
#include <iostream>
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
    void setsessionID(string newsessionDate);
    string getsessionTime();
    void setsessionTime(string newsessionTime);
    string getlocation();
    void setlocation(string newlocation);
private:
    int sessionID;
    int assistantID;
    string sessionType;
    string sessionDate;
    string sessionTime;
    string location;
};

#endif // SESSION_H
=======
#ifndef SESSION_H
#define SESSION_H
#include <string>;
#include <iostream>
using namespace std;


class Session
{
public:
    Session();
    int getsessionID(){
        return sessionID;
    }
    void setsessionID(int newsessionID){
        sessionID= newsessionID;
    }
    int getassistantID(){
        return assistantID;
    }
    void setsessionID(int newassistantID){
        assistantID= newassistantID;
    }
    int getsessionType(){
        return sessiontType;
    }
    void setsessionType(string newsessionType){
        sessionType= newsessionType;
    }
    int getsessionDate(){
        return sessionDate;
    }
    void setsessionID(string newsessionDate){
        sessionDate= newsessionDate;
    }
    string getsessionTime(){
        return sessionTime;
    }
    void setsessionTime(string newsessionTime){
        sessionTime= newsessionTime;
    }


    string getlocation(){
        return location;
    }
    void setlocation(string newlocation){
        location= newlocation;
    }
private:
    int sessionID;
    int assistantID;
    string sessiontType;
    string sessionDate;
    string sessionTime;
    string location;
};

#endif // SESSION_H
>>>>>>> master
