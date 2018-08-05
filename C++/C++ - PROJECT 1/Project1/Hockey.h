/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
 Header file
 */

#ifndef __Project1__Hockey__
#define __Project1__Hockey__

#include <iostream>
#include <string>

using namespace std;
class Hockey
{
private:
    
    string position;
    int playernumber;
    double height;
    
public:
    
    Hockey(); // default constructor
    
    
    Hockey(int playernum, double height, string position);
    
    string getPosition();
    int getPlayerNumber();
    double getHeight();
    
    void setHeight(double height);
    void setPlayerNumber(int playernum);
    void setPosition(string position);
    void toString();
    
#endif
};