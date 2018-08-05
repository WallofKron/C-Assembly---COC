/*
 ENEMY - Header
 
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
using namespace std;

class Enemy{
    
public:
    
    virtual void move_position()=0;
    virtual void fire_weapon()=0;
    virtual void update_status()=0;
    
protected:
    
    void setXpos(int xpos);
    void setYpos(int ypos);
    void setWidth(int Width);
    void setHeight(int Height);
    void setStatus(int Status);
    
    int getXpos();
    int getYpos();
    int getWidth();
    int getHeight();
    int getStatus();
    
private:
    
    int y_pos, x_pos, width, height, status;
    
};