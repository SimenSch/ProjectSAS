#include "appointment.h"
//written by simen schaufel s305491
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
string Appointment::getprice(){
    return price;

}
void Appointment::setprice(string newprice){
    price=newprice;
}

