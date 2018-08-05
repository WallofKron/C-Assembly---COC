/*
 PitBull - CPP
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance
 hierarchy with polymorphism and virtual functions
 */

#include "PitBull.h"

#include <string>
#include <iostream>
using namespace std;

PitBull::PitBull(){
    setStatus(2);
    setBites(0);
    setXpos(350);
    setYpos(500);
    
    setHeight(10);
    setWidth(15);
    dir = 0;
    
}

int PitBull::getBites(){
    return Bites;
}

void PitBull::setBites(int bites){
    if(bites>0){
        Bites = bites;
    }
}

void PitBull::move_position(){
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
        
        cout << "PitBull MOVED to: " << getXpos() << ", "<< getYpos() << "\t ";
        
    } else {
        cout << "Pitbull DEAD!! Stuck at: " << getXpos() << ", " <<getYpos() << "\t   " ;
        
    }
}

void PitBull::fire_weapon(){
    if(getStatus()!=0)
    {
        int newbite = getBites()+1;
        setBites(newbite);
        cout << "PitBull used BITE! (" << getBites() << " bites TOTAL)";
    }
    else {
        cout << "NO WEAPON FIRED!! PitBull DEAD!!";
    }
    
}

void PitBull::update_status(){
    if (getStatus()!=0) {
        
        double newstatus = getStatus()-1;
        setStatus(newstatus);
        double health = ((newstatus/2) * 100);
        
        if(newstatus!=0){
            cout << "*WOOF* PitBull hit!  " << health <<"% life remaining";
            
        } else {
            
            cout << "PitBull DEAD!!!";
        }
    }
    else {
        cout << "PitBull is Already DEAD!";
    }
}