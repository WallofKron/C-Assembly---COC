/*
 ENEMY - cpp
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance
 hierarchy with polymorphism and virtual functions
 */


#include "Enemy.h"
#include <string>
#include <iostream>
using namespace std;

void Enemy::move_position(){};
void Enemy::fire_weapon(){};
void Enemy::update_status(){};

void Enemy::setXpos(int xpos){

    if(xpos>=0 && xpos<=800){
    
        x_pos = xpos;
    } else {
        cout << "Invalid X POS.";
    }
}

void Enemy::setYpos(int ypos){
    
    if(ypos>=0 && ypos<=600){
        
        y_pos = ypos;
    } else {
        cout << "Invalid Y POS.";
    }
}
void Enemy::setWidth(int Width){
    if (Width > 0 && Width < 150) {
        width = Width;
    } else {
        cout << "Invalid WIDTH";
    }
}
void Enemy::setHeight(int Height){
    if (Height > 0 && Height < 100) {
        height = Height;
    } else {
        cout << "Invalid HEIGHT";
    }
}
void Enemy::setStatus(int Status){

    if (Status >= 0 && Status <= 8) {
        status = Status;
    }
}


int Enemy::getXpos(){

    return x_pos;
}
int Enemy::getYpos(){
    
    return y_pos;
}
int Enemy::getWidth(){
    
    return width;
}
int Enemy::getHeight(){
    
    return height;
}
int Enemy::getStatus(){
    
    return status;
}