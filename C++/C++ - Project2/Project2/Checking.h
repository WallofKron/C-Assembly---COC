/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Checking - Header File
 */

#pragma once

#include <iostream>
#include "Account.h"

using namespace std;
class Checking : public Account{
    
public:

	int k;

    void WriteCheck(int CheckNum, double Amount, int j);
    
    Checking();
    
    Checking(string Name, long TaxiD, double Balance);
    
    void display();
    
    
private:
	double checkamount[25];
    int last10checks[10];
    
};