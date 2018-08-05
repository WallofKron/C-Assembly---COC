/*
 Project2
 C++
 Professor Ferguson
 Comp Sci. 236
 Robert Florence
 Simple project demonstrating inheritance
 between banking account objects
 Main
 */

#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "CreditCard.h"

#include <string>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
	Savings Savings1;
    Checking Checking1;
    CreditCard CreditCard1;

	cout << "Enter First Name of the Account Holder: ";
	string nameyname;
	cin >> nameyname;

	if(nameyname.length()>0 && nameyname.length()<=40){
	
		Checking1.setName(nameyname);
    Savings1.setName(nameyname);
    CreditCard1.setName(nameyname);
	} else {
			
		cout << "\nInvalid Name\n\nTry Again";
			system("pause>nul");
		  exit(1);	
	}

	cout << "Enter valid 6 digit TAX ID: ";
	long taxid;
	cin >> taxid;

	if(taxid > 99999 && taxid <1000000){
	
		Checking1.setTaxID(taxid);
    Savings1.setTaxID(taxid);
    CreditCard1.setTaxID(taxid);
	} else {
			
		cout << "\nInvalid tax ID\n\nTry Again";
		system("pause>nul");
		  exit(1);	
	}


    Checking1.setBalance(100);
    Savings1.setBalance(100);
    CreditCard1.setBalance(100);
    
    int choice=1;
    int j= 0;
	int checknum = 0;
    
    while(choice!=0){

		cout <<"\nChecking Balance: "<< Checking1.getBalance() << "\t  Savings Balance: "<< Savings1.getBalance() << "\t  Credit Card Balance: "<<CreditCard1.getBalance();



        cout << "\n\nMenu:";
        cout << "\n1. Savings Deposit \n2. Savings Withdrawl \n3. Checking Deposit \n4. Write A Check \n5. Credit Card Payment \n6. Make A Charge(Credit Card) \n7. Display Savings \n8. Display Checking \n9. Display Credit Card \n0. Exit";
        cout << "\n\nMenu Choice: ";
        cin >> choice;
        if (choice >=0 && choice <=9) {
            
            
            switch(choice){
                    
                case 0:{
                    //Exit
                    exit(1);
                    
                    break;
                }
                case 1:{
                    //Savings Deposit
                    cout << "\nSavings Deposit Amount: ";
                    double deposit;
                    cin >>deposit;
                    if (deposit>0){
                        double newbal = Savings1.getBalance() + deposit;
                        
                        Savings1.makeDeposit(newbal);
                        
                    } else {
                        cout << "\nInvalid Deposit Amount\n";
                    }
                    
                    break;
                }
                case 2:{
                    //Savings withdrawl
                    cout << "\nSavings Withdrawl Amount: ";
                    double amount;
                    cin >> amount;
                    if(amount > 0 && Savings1.getBalance() > amount){
                        
                        Savings1.DoWithdrawl(amount);
                    }
                    else{
                        
                        cout << "\nInvalid Withdrawl Amount\n";
                    }
                    
                    break;
                }
                case 3:{
                    //Checking Deposit
                    cout << "\nChecking Deposit amount: ";
                    double amount;
                    cin >> amount;
                    if (amount>0){
                        
						double newbal = Checking1.getBalance() + amount;
                        Checking1.makeDeposit(newbal);
                        
                    }else{
                        cout << "\nInvalid deposit amount\n";
                    }
                    
                    break;
                }
                case 4:{
                    //Write A Check
                    cout << "\nCheck AMOUNT: ";
                    double amount;
                    cin >> amount;
					if(checknum == 0){
                    cout << "\nEnter Valid 4 Digit Check NUMBER: ";
					cin >> checknum;
					}
                    if (checknum >999 && checknum<10000) {

                        Checking1.WriteCheck(checknum, amount,j);

				
                    } else {
                        
                        cout << "\nInvalid Check Number\n";    
                        
                    }
                    
                    break;
                }
                case 5:{
                    //Credit Card Payment
                    
                    cout << "\nCredit Card PAYMENT Amount: ";
                    double pamount;
                    cin >> pamount;
                    
                    if (pamount>0 && pamount<=CreditCard1.getBalance()) {
                        
                    CreditCard1.MakePayment(pamount);
                    } else {
                        cout << "\nInvalid Payment Amount\n";

                    }
                    
                    break;
                }
                case 6:{
                    //Charge Credit Card
                    cout << "\nCredit Card CHARGE Amount: ";
                    double camount;
                    cin >> camount;
                    
                    cout << "\nWhere is the Credit Card being Charged?: ";
                    string name;
                    cin >> name;
                    
                    if (camount>0)
                    {
                    CreditCard1.DoCharge(name, camount);
                    } else {
                        cout << "\nInvalid Charge Amount\n";
                    }
                    
                    break;
                }
                case 7:{
                    //Display Savings
                    Savings1.display();
                    
                    break;
                }
                case 8:{
                    //Display Checking
                    Checking1.display();
                    
                    
                    break;
                }
                case 9:{
                    //Display Credit Card
                    CreditCard1.display();
                    
                    
                    break;
                }
			}
		}
	}
}