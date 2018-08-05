/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Account - Header File
 */

#pragma once

#include <string>
#include <iostream>
using namespace std;

class Account{
    
public:
    
    static const int lasten = 10;
    
    Account();
    
    Account(string Name, long Taxid, double Balance);
    
    void setName(string name);
    void setTaxID(long TaxID);
    void setBalance(double Balance);
    
    void display();
    
    string getName();
    long getTaxID();
    double getBalance();
    
    void makeDeposit(double Amount);
    
    
protected:
    
    double withdrawlist[lasten];
    double depositlist[lasten];
    int numdeposits;
    int numwithdrawls;
    
    
private:
    string name;
    long taxID;
    double balance;
};