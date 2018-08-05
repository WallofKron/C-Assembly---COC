/*
 Project1
 Robert Florence
 CS 122
 Assembly
 Prof. Ferguson
 Practice problems
 2.10
 */

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[])
{
    
    const int base2 = 2, base3 = 3, base8 = 8, base10 = 10, base16 = 16;
    
    int num, checker = 0, newnum;
    const int power = 4;
    
    do {
        
        cout << "Enter a number base (2, 3, 8, 10 or 16): ";
        
        cin >> num;
        
        if (num == base2) {
            
            cout << "Base 2 - Binary - (0 & 1)\nFirst Four Powers (0-3): ";
            checker = 0;
            for (int i=0; i<power; i++) {
            
                newnum = pow(base2,i);
                cout << newnum << "  ";
                
            
            }
            
        } else if (num == base3) {
            
            cout << "Base 3 - Trinary - (0 - 2)\nFirst Four Powers (0-3): ";
            checker = 0;
            for (int i=0; i<power; i++) {
                
                newnum = pow(base3,i);
                cout << newnum << "  ";
                
                
            }
            
        } else if (num == base8) {
            
            cout << "Base 8 - Octal - (0 - 7)\nFirst Four Powers (0-3): ";
            checker = 0;
            for (int i=0; i<power; i++) {
                
                newnum = pow(base8,i);
                cout << newnum << "  ";
                
                
            }
            
            
        } else if (num == base10) {
            
            cout << "Base 10 - Decimal - (0 - 9)\nFirst Four Powers (0-3): ";
            checker = 0;
            for (int i=0; i<power; i++) {
                
                newnum = pow(base10,i);
                cout << newnum << "  ";
                
                
            }
            
        } else if (num == base16){
            
            cout << "Base 16 - Hexidecimal - (0 - F)\nFirst Four Powers (0-3): ";
            checker = 0;
            for (int i=0; i<power; i++) {
                
                newnum = pow(base16,i);
                cout << newnum << "  ";
                
            
            }
            
        } else {
            
            cout << "Incorrect input, Try Again...\n";
            checker = -1;
        }
        
    } while (checker == -1);
    
    
    return 0;
}
