/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
 Header file
 */

#ifndef __Project1__Date__
#define __Project1__Date__

#include <iostream>
#include <string>

using namespace std;
class Date
{
private:
    string month;
    int day;
    int year;
    
public:
    
    Date(); //default constructor
    
    
    Date(string Month, int Day, int Year); //overloaded constructor
    
    string getMonth();
    int getDay();
    int getYear();
    int getMonthfromNumber();
    
    void setDay(int day);
    void setYear(int year);
    void setMonth(string month);
    void toString();
    void printDate(int format);
    
#endif

};