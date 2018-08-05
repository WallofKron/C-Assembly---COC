/*
 Helicopter - Cpp
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance
 hierarchy with polymorphism and virtual functions
 */


#include "Helicopter.h"

#include <string>
#include <iostream>
using namespace std;

Helicopter::Helicopter(){
    setStatus(7);
    setMissiles(6);
    setXpos(750);
    setYpos(300);
    
    setHeight(60);
    setWidth(100);
    dir = 1;
}

int Helicopter::getMissiles(){
    return Missiles;
}

void Helicopter::setMissiles(int miss){
    if(miss>0){
        Missiles = miss;
    }
}
void Helicopter::move_position(){
    
    if (getStatus()!=0) {
        if ((getXpos() + speed) > 800){
            dir = 1;
        }
        if ((getXpos() - speed) < 0){
            dir = 0;
        }
        
        if(dir == 0){
            int newxpos = getXpos() + speed;
            setXpos(newxpos);
        }
        if(dir == 1){
            int newxpos = getXpos() - speed;
            setXpos(newxpos);
        }
        
        cout << "Helicopter MOVED to: " << getXpos() << ", "<< getYpos() <<"\t ";
        
    } else {
        cout << "Helicopter DOWN!! Stuck at: " << getXpos() << ", " <<getYpos() << "\t   " ;        
    }
}

void Helicopter::fire_weapon(){

    if(getStatus() != 0)
    {
        if (getMissiles() == 0) {
            cout << "Helicopter has no more missiles";
            
        } else {
            int newmiss = getMissiles() - 1;
            setMissiles(newmiss);
            
            cout << "Helicopter Fired a MISSILE (" << newmiss << " missiles remain)";
        }
    }
    else {
        cout << "No Weapon Fired!! Helicopter DOWN!!";
    }
}

void Helicopter::update_status(){
    if (getStatus()!=0) {
        
        double newstatus = getStatus() - 1;
        setStatus(newstatus);
        double health = ((newstatus/7) * 100);
        
        if(newstatus!=0){
            cout << "*PING* Helicopter HIT!  " << health <<"% life remaining";
            
        } else {
            
            cout << "Helicopter was SHOT DOWN!!!";
        }
    }
    else {
        cout << "Helicopter is Already DOWN!";
    }
}