/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
  cpp file
 */

#include <boost/algorithm/string/predicate.hpp>
#include "Date.h"
#include <string>
using namespace std;


Date::Date(){
    year = 0;
    day = 0;
    month = " ";
    
};

Date::Date(string mon, int dy, int yr){
    
    day = dy;
    year = yr;
    month = mon;
    
};

int Date::getMonthfromNumber(){
    int mn;
    string choice;
    
    if (getMonth()=="1") {
        choice = "Jan";
        
        
    } else if (getMonth()=="2"){
        choice = "Feb";

    
    } else if (getMonth()=="3"){
        choice = "Mar";

    
    
    } else if (getMonth()=="4"){
        choice = "Apr";

    
    
    } else if (getMonth()=="5"){
        choice = "May";

    
    
    } else if (getMonth()=="6"){
        choice = "Jun";

    
    
    } else if (getMonth()=="7"){
        choice = "Jul";
        
        
    } else if (getMonth()=="8"){
        choice = "Aug";

        
        
    } else if (getMonth()=="9"){
        choice = "Sep";

        
        
    } else if (getMonth()=="10"){
        choice = "Oct";

        
        
    } else if (getMonth()=="11"){
        choice = "Nov";

        
        
    } else if (getMonth() == "12"){
        choice = "Dec";

    }
    
    return mn;
}

string Date::getMonth(){
    return month;
}

int Date::getDay(){
    return day;
}

int Date::getYear(){
    return year;
}

void Date::setDay(int dy){
    if (dy > 0 && dy <=31){
        day = dy;
    }
    else {
        cout << "Not actual Day entry, try again" << endl;
    }
}

void Date::setYear(int yr){
    if (yr >= 1970 && yr <= 2099){
        year = yr;
    }
    cout << "Year entered not within our range" << endl;
    
}
void Date::setMonth(string mon){
    if (mon.length()>0 && mon.length()<=11){
        month = mon;
    }
    else {
    cout << "Not a valid Month entry" << endl;
    }
}

void Date::printDate(int format){

    
    cout << "Format 0: ";
    cout << getMonthfromNumber()<< " " << getDay()<< ", " << getYear() << endl;
    
    cout << "Format 1: ";
    cout <<  << getDay()<< " " << getMonthfromNumber() << " " << getYear() << endl;

    cout << "Format 2: ";
    cout << getMonth()<< "-" << getDay()<< "-" << getYear() << endl;

    cout << "Format 3: ";
    cout << getMonth()<< "/" << getDay()<< "/" << getYear() << endl;

}


void Date::toString() {
    cout << "Date Object: " << endl;
    printDate(<#int format#>);
    
    
}


