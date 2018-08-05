/*
 Project1
 Robert Florence
 CS 122
 Assembly
 Prof. Ferguson
 Practice problems
 2.13
 */

#include <iostream>
using namespace std;

char ltr;
int power2 = 8;
int result = 0;

int main () {
    
    cout << "Enter Four 1's and 0's followed by a '*': " << endl;
    cin >> ltr;
    while (ltr != '*') {
        if (ltr == '1') {
            result = result+power2;
        }
    
        power2= (power2/2);
        cin >> ltr;
    }
    
    cout << "The Binary you entered, is " <<result << " in decimal (base 10)" <<endl;
    
    return 0;
}