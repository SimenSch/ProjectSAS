#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>;
#include <iostream>
using namespace std;


class Appointment
{
public:
    Appointment();
private:
    int orderID;
    int petID;
    int sessionID;
    int price;
};

#endif // APPOINTMENT_H
