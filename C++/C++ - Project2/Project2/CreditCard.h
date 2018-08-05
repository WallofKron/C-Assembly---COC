/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 CreditCard - Header File
 */

#pragma once

#include <iostream>
#include "Account.h"

using namespace std;
class CreditCard : public Account{
    
    
public:
    
	double payments[25];

    int k;

	int p;
    
    void DoCharge(string name, double amount);
    
    void MakePayment(double amount);
    
    CreditCard();
    
    CreditCard(string Name, long TaxID, double Balance);
    
    void display();
    
    
private:
    long cardnumber;
    string last10charges[10];

};