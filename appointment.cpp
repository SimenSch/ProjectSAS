#include "appointment.h"

Appointment::Appointment()
{

}
int Appointment::getorderID(){
    return orderID;

}
void Appointment::setorderID(int neworderID){
    orderID=neworderID;
}
int Appointment::getpetID(){
    return petID;

}
void Appointment::setpetID(int newpetID){
    petID=newpetID;
}

int Appointment::getsessionID(){
    return sessionID;

}
void Appointment::setsessionID(int newsessionID){
    sessionID=newsessionID;
}
int Appointment::getprice(){
    return price;

}
void Appointment::setprice(int newprice){
    price=newprice;
}
