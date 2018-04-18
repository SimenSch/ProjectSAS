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
string Appointment::getprice(){
    return price;

}
void Appointment::setprice(string newprice){
    price=newprice;
}
void Appointment::registerappointment(int petid,int sessionid,string newprice){
    regex pricecheck("^[1-9\\.]{6}$");
    setpetID(petid);
    setsessionID(sessionid);

    try{
        if(regex_match(newprice,pricecheck)){
                setprice(newprice);
        }
    }
    catch(regex_error& e){
    }
}
