/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
 cpp file
 */

#include "Hockey.h"
#include <string>

using namespace std;

Hockey::Hockey(){

    height = 0;
    position= " ";
    playernumber = 0;
    
    };
    
    Hockey::Hockey(int plnum, double hght, string pos){
        
        playernumber = plnum;
        height = hght;
        position = pos;
        
    };
    
    string Hockey::getPosition(){
        return position;
    }
    
    int Hockey::getPlayerNumber(){
        return playernumber;
    }
    
    double Hockey::getHeight(){
        return height;
    }
    
    void Hockey::setHeight(double Hyt){
        if (Hyt > 0 && Hyt <=110){
            height = Hyt;
        }
        else {
            cout << "Not a valid Height input, try again" << endl;
        }
    }
    
    void Hockey::setPlayerNumber(int pnu){
        if (pnu >0 && pnu <=99){
            playernumber = pnu;
        }
        else {
            cout << "Not an actual player number" << endl;
        }
        
    }
    void Hockey::setPosition(string pos){
        if (pos.length()>0 && pos.length()<=13){
            position = pos;
            
        }
        else {
            cout << "Invalid entry for Position" << endl;
            
        }
    }
    
    void Hockey::toString() {
        cout << "Hockey Object\nPosition: " << getPosition() << endl;
        cout << "Player Number: " << getPlayerNumber() << endl;
        cout << "Height: " << getHeight() << endl;

    }

