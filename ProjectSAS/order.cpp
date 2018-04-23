#include "order.h"
Order::Order(){}

    int Order::getOrderID(){
        return orderID;
    }
    void Order::setOrderID(int neworder){
        orderID=neworder;
    }
    int Order::getPetID(){
        return petID;
    }
    void Order::setPetID(int newpetid){
        petID=newpetid;
    }
    string Order::getBeginDate(){
        return beginDate;
    }
    void Order::setBeginDate(string newbdate){
        beginDate=newbdate;
    }
    string Order::getEndDate(){
        return endDate;
    }
    void Order::setEndDate(string newedate){
        endDate=newedate;
    }
    string Order::getBeginTime(){
        return beginTime;
    }
    void Order::setBeginTime(string newBtime){
        beginTime=newBtime;
    }
    string Order::getEndTime(){
        return endTime;
    }
    void Order::setEndTime(string newetime){
        endTime=newetime;
    }
    string Order::getNotes(){
        return notes;
    }
    void Order::setNotes(string newnote){
        notes=newnote;
    }
