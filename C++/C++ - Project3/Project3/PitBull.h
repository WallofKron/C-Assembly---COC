/*
 PitBull - Header
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance
 hierarchy with polymorphism and virtual functions
 */

#pragma once
#include <string>
#include <iostream>
#include "Enemy.h"

using namespace std;


class PitBull : public Enemy{
    
public:
    virtual void move_position();
    virtual void fire_weapon();
    virtual void update_status();
    
    const int speed = 3;
    
    int dir;
    
    PitBull();
    
    int getBites();
    void setBites(int bites);

protected:
    
private:
    int Bites;
    
};