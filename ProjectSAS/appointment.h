#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;


class Appointment
{
public:
    Appointment();
    int getorderID();
    void setorderID(int neworderID);
    int getpetID();
    void setpetID(int newpetID);
    int getsessionID();
    void setsessionID(int newsessionID);
    string getprice();
    void setprice(string newprice);
    void registerappointment(int petid,int sessionid, string newprice);
private:
    int orderID;
    int petID;
    int sessionID;
    string price;
};

#endif // APPOINTMENT_H
