/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Account - CPP file
 */
#include "Account.h"
#include <string>
using namespace std;

Account::Account(string Name, long Taxid, double Balance){
    name = Name;
    taxID = Taxid;
    balance = Balance;
    
}

Account::Account(){
    name = " ";
    taxID = 0;
    balance = 0;
    
}

void Account::setName(string Name){
    if (Name.length()>0 && Name.length()<40){
        
        name = Name;
    }
    
}

void Account::setTaxID(long TaxID){
    if (TaxID>99999 && TaxID<=999999){
        taxID = TaxID;
        
    }
}

void Account::setBalance(double Balance){
    if (Balance >0 && Balance<100000000) {
        balance=Balance;
    }
    
}

string Account::getName(){
    return name;
}

long Account::getTaxID(){
    
    return taxID;
}

double Account::getBalance(){
    
    return balance;
}

void Account::makeDeposit(double Amount){
    setBalance(Amount);
    
}

void Account::display(){
    cout << "Name = "<< getName();
    cout << "Tax ID = "<< getTaxID();
    cout << "Balance = "<< getBalance();
    
}