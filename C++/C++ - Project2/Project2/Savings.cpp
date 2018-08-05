/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Savings - CPP file
 */

#include "Savings.h"
using namespace std;

Savings::Savings(){
    k=0;
}

Savings::Savings(string Name, long TaxiD, double Balance){
    k=0;
    
}

void Savings::DoWithdrawl(double amount){

    double newbal = (getBalance() - amount);
    setBalance(newbal);
	
	withdrawls[k] = amount;
	k++;
}

void Savings::display(){

	    cout << "\n\n\n-Savings-";
    cout << "\nName = "<< getName();
    cout << "\tTax ID = "<< getTaxID();
    cout << "\t  Balance = "<< getBalance();

	cout << "\n\nWithdrawls: \n";
	for(int i=0;i<k;i++){
		cout << "\n"<< i+1 << "). " << withdrawls[i];
	}
	 cout << "\n\n";
}