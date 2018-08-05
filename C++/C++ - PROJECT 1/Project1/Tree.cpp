/*
 Project1
 Robert Florence
 CS 236
 C++
 Prof. Ferguson
 Classes and Objects
  cpp file
 */

#include "Tree.h"
#include <string>
using namespace std;

Tree::Tree(){
    height = 0.0;
    Numbranches = 0;
    type = " ";
    
};

Tree::Tree(int number, double het, string teep){

    height = het;
    Numbranches = number;
    type = teep;
    
};

string Tree::getType(){
    return type;
}

int Tree::getNumBranches(){
    return Numbranches;
}

double Tree::getHeight(){
    return height;
}

void Tree::setHeight(double hght){
    if (hght > 0 && hght <= 300){
        height = hght;
    }
    else {
        cout << "Not a valid tree Height" << endl;
    }
}

void Tree::setNumbranch(int numbrnch){
    if (numbrnch > 0 && numbrnch <= 200){
        Numbranches = numbrnch;
    }
    else {
        cout << "Invalid tree Branch input" << endl;
    }
    
}
void Tree::setType(string typ){
    if (typ.length()>1 && typ.length()<=40){
        type = typ;
    }
    else {
        cout << "Not a valid Type of tree" << endl;
    }
}

void Tree::toString() {
    cout << "Tree Object\nHeight of Tree: " << getHeight() << endl;
    cout << "Number of branches on Tree: " << getNumBranches() << endl;
    cout << "Type of Tree: " << getType() << endl;

}

