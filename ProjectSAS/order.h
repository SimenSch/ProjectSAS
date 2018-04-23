#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <iostream>
#include <regex>
using namespace std;
class Order{
//written by Simen Schaufel s305491
public:
    Order();
    int getOrderID();
    void setOrderID(int neworderid);
    int getPetID();
    void setPetID(int newpetid);
    string getBeginDate();
    void setBeginDate(string newdate);
    string getEndDate();
    void setEndDate(string newenddate);
    string getBeginTime();
    void setBeginTime(string newstarttime);
    string getEndTime();
    void setEndTime(string newendtime);
    string getNotes();
    void setNotes(string newnotes);
private:
    int orderID;
    int petID;
    string beginDate;
    string endDate;
    string beginTime;
    string endTime;
    string notes;

};
#endif

