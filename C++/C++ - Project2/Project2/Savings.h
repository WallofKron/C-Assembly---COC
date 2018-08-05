/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Savings - Header File
 */

#pragma once

#include <iostream>
#include "Account.h"

using namespace std;
class Savings : public Account
{
    
public:
    
	int k;

	double withdrawls[20];

    Savings();
    
    Savings(string Name, long TaxiD, double Balance);
    
    void DoWithdrawl(double amount);
    
    void display();
    
};