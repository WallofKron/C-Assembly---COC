/*
 Project1
 Robert Florence
 CS 122
 Assembly
 Prof. Ferguson
 Practice problems
 2.6
 */

#include <iostream>
using namespace std;

int main () {
    int exam1;
    int base;
    int divisor;
    int remainder;
    cout << "Enter 2 numbers (1-100) and a base 0-9: ";
    
    cin >> exam1 >> base;
    
    while (exam1>0) {
        cout << "\n";

        remainder = (exam1%base);
        cout << remainder << endl;
    
        divisor = (exam1/base);
        exam1 = divisor;

    }
    return 0;
}