/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 CreditCard - CPP file
 */

#include "CreditCard.h"
#include <sstream>
using namespace std;

void CreditCard::DoCharge(string name, double amount){
	
	if (name.length()>0 && name.length()<=40){
  
    string samount = to_string(amount);
	stringstream ss;
	ss << name << " - " << samount;

	string charge = ss.str();

    last10charges[k] = charge;

	double newbal = getBalance()+ amount;
	setBalance(newbal);

    k++;
    } else {
        cout << "\nInvalid Charge Name\n";
    }
}

void CreditCard::MakePayment(double amount){

	double newbal = getBalance()- amount;
		setBalance(newbal);

		payments[p]= amount;
		p++;
}

CreditCard::CreditCard(){
	k=0;
	p=0;
}

CreditCard::CreditCard(string Name, long TaxID, double Balance){
    k=0;
	p=0;
}

void CreditCard::display(){
	cout << "\n\n-Credit Card-\n";
    cout << "Name: "<< getName() << "\tTax ID: "<< getTaxID() << "    Balance: "<<getBalance() <<"\n\n";

	cout << "\nLast 10 Charges:\n";
	for(int i=0;i<k;i++){
		cout << "\n"<< i+1 << ")." <<last10charges[i];

	}

	cout << "\nLast 10 Payments:\n";
	for(int i=0;i<p;i++){
		cout << "\n"<< i+1 << ")." <<payments[i];

	}


	cout << "\n\n\n";
}