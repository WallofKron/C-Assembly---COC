/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Checking - CPP file
 */

#include "Checking.h"
using namespace std;

void Checking::WriteCheck(int CheckNum, double Amount, int j){
    
    if (Amount >0 && getBalance()>=Amount) {
        
		CheckNum+=k;
		
        last10checks[k] = CheckNum;
		checkamount[k] = Amount;
		k++;
		
		double newbal = getBalance()- Amount;
		setBalance(newbal);
        
    } else {
        cout << "\nInvalid Check Amount\n";
    }
}

Checking::Checking(){
    k = 0;
    
}

Checking::Checking(string Name, long TaxiD, double Balance){
    
    k=0;
}

void Checking::display(){
 
		cout << "\n\n\n-Checking-";
    cout << "\nName = "<< getName();
    cout << "\tTax ID = "<< getTaxID();
    cout << "\t  Balance = "<< getBalance();

	cout << "\n\nChecks Written:\n";
	for(int i=0;i<k;i++){
		cout << "\nNumber: " << last10checks[i] << "\tAmount: " << checkamount[i];

	}
		cout << "\n\nAll Deposits:\n";
		
	 cout << "\n\n\n";
}