#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>;
#include <iostream>
using namespace std;


class Appointment
{
public:
    Appointment();
    int getorderID(){
        return orderID;

    }
    void setorderID(int neworderID){
        orderID=neworderID;
    }
    int getpetID(){
        return petID;

    }
    void setpetID(int newpetID){
        petID=newpetID;
    }

    int getsessionID(){
        return sessionID;

    }
    void setsessionID(int newsessionID){
        sessionID=newsessionID;
    }
    int getprice(){
        return price;

    }
    void setprice(int newprice){
        price=newprice;
    }

private:
    int orderID;
    int petID;
    int sessionID;
    int price;
};

#endif // APPOINTMENT_H
