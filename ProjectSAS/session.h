#ifndef SESSION_H
#define SESSION_H
#include <string>;
#include <iostream>
using namespace std;


class Session
{
public:
    Session();
private:
    int sessionID;
    int assistantID;
    string sessiontType;
    string sessionDate;
    string sessionTime;
    string location;
};

#endif // SESSION_H
