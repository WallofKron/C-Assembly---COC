/*
 Project1
 Robert Florence
 CS 122
 Assembly
 Prof. Ferguson
 Practice problems
 2.12
 */

#include <iostream>
#include <string>
using namespace std;

int main () {
    int guess;
    string hex;
    cout << "Enter a number 0 - 15: ";
    cin >> guess;
    cout << "\n";
    if (guess >= 0 && guess <= 15) {
        switch (guess) {
            case 0: hex = "0"; break;
            case 1: hex = "1"; break;
            case 2: hex = "2"; break;
            case 3: hex = "3"; break;
            case 4: hex = "4"; break;
            case 5: hex = "5"; break;
            case 6: hex = "6"; break;
            case 7: hex = "7"; break;
            case 8: hex = "8"; break;
            case 9: hex = "9"; break;
            case 10: hex = "A"; break;
            case 11: hex = "B"; break;
            case 12: hex = "C"; break;
            case 13: hex = "D"; break;
            case 14: hex = "E"; break;
            case 15: hex = "F"; break;
            
        }
        cout << "your decimal: " << guess << " in Hexidecimal is: "<< hex <<"\n";
    } else {
        cout << "Wrong Input, Try Again!" << endl;

    }
    return 0;
}
