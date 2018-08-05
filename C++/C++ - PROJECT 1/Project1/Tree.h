/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
 Header file
 */

#ifndef __Project1__Tree__
#define __Project1__Tree__

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Tree{

private:
    static float height;
    static int Numbranches;
    static string type;
    
public:

    Tree(); //default constructor
    
    Tree(int numbr, double hght, string typ); //overloaded constructor
    
    string getType();
    int getNumBranches();
    double getHeight();
    
    void setHeight(double height);
    void setNumbranch(int numbranches);
    void setType(string type);
    void toString();
    
#endif

};