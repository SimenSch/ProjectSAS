#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>
#include <iostream>
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
    int getprice();
    void setprice(int newprice);

private:
    int orderID;
    int petID;
    int sessionID;
    int price;
};

#endif // APPOINTMENT_H
