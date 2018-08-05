/*
Project1
Robert Florence
CS 236
 C++
 Prof. Ferguson
 Classes and Objects
 */
#include "Tree.cpp"
#include "Date.cpp"
#include "Hockey.cpp"
#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    int choice;
    
        
    cout << "Pick which object you would like to build: " << endl;
    cout << "1 - Date, 2 - Hockey, 3 - Tree " << endl;
    cin >> choice;
    
    if (choice > 0 && choice < 4) {
        
        switch (choice) {
            case 1:
            {
                Date Date1;
                int yrob;
                int dayob;
                string monob;
                
                cout << "Date Object: " << endl;

                cout << "Please enter a Date (mm, dd, yyyy): " << endl;
                cin >> monob >> dayob >> yrob;

                Date1.setDay(dayob);
                 Date1.setMonth(monob);
                 Date1.setYear(yrob);
                
                Date1.toString();
                
                break;
            }
                
            case 2:
            {
                Hockey Hockey1;
                int plnu;
                double height;
                string position;
                
                cout << "Hockey Object: " << endl;
                
                cout << "Please enter a Position (C,LW,RW, LD, RD, G): " << endl;
                cin >> position;
                cout << "Please enter a Player Number (1-99): " << endl;
                cin >> plnu;
                cout << "Please enter a height of your player(1-110): " << endl;
                cin >> height;
                
                Hockey1.setHeight(height);
                Hockey1.setPlayerNumber(plnu);
                Hockey1.setPosition(position);
                
                Hockey1.toString();
                

                break;
            }
                
            case 3:
            {
                Tree Tree1;
                int numB;
                double hite;
                string ty;
                
                cout << "Tree Object: " << endl;
                
                cout << "Please enter a Type of Tree(oak, maple, cedar, etc): " << endl;
                cin >> ty;
                cout << "Please enter a Height of the Tree (1-300): " << endl;
                cin >> hite;
                cout << "Please enter an amount of Branches your Tree has (1-200): " << endl;
                cin >> numB;
                
                Tree1.setType(ty);
                Tree1.setHeight(hite);
                Tree1.setNumbranch(numB);
                
                Tree1.toString();
                
                
                break;
            }
                
            default:{
                cout << "No object created!" << endl;

                break;
            }
        }
    
    } else {
        
        cout << "Err0r, wrong input" << endl;
    
    }
    
    
    
    
    
    
    
}

