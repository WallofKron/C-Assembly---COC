/*
 CARJACKER - cpp
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance
 hierarchy with polymorphism and virtual functions
 */


#include "CarJacker.h"

#include <string>
#include <iostream>
using namespace std;

CarJacker::CarJacker(){
    setStatus(4);
    setBullets(10);
    setXpos(150);
    setYpos(500);
    
    setHeight(20);
    setWidth(10);
    
    dir = 0;
    
}

void CarJacker::setBullets(int bull){
    
    if (bull > 0) {
        bullets = bull;
    }

}

int CarJacker::getBullets(){

    return bullets;
}

void CarJacker::move_position(){
    
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
       cout << "Carjacker MOVED to: " << getXpos() << ", "<< getYpos() <<"\t ";

       
   } else {
       cout << "Carjacker DEAD!! Stuck at: " << getXpos() << ", " <<getYpos() << "\t   " ;       
   }
}

void CarJacker::fire_weapon(){
    
    if(getStatus()!=0)
    {
        if (getBullets() == 0) {
            cout << "Carjacker has no more bullets left";
            
    } else {
        int newbullet = getBullets()-1;
        setBullets(newbullet);
        
        cout << "Carjacker Fired GUN (" << newbullet << " bullets remain)";
        
        }
    } else {
        cout << "No Weapon Fired!! Carjacker DEAD!!";
    }
}

void CarJacker::update_status(){
    
    if (getStatus()!=0) {
    
        double newstatus = getStatus() - 1;
        setStatus(newstatus);
        double health = ((newstatus/4) * 100);
        
    if(newstatus!=0){
        cout << "*OUCH* Carjacker hit!  " << health <<"% life remaining";

    } else {
        
        cout << "*AAARGHH* Carjacker JUST DIED!";
        }
    }
    else {
        cout << "Carjacker is already DEAD!";
        }
}