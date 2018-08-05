/*
 Main.cpp
 
 Project3
 Robert Florence
 Professor Ferguson
 Comp Sci. 236
 Project 3
 this code implements an inheritance 
 hierarchy with polymorphism and virtual functions
 */


//#include "stdafx.h"
#include <cstdlib>
#include <ctime> // Needed for randomization
#include <iostream>
#include "Enemy.h"
#include "CarJacker.h"
#include "Helicopter.h"
#include "PitBull.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int xRan;
     srand(time(NULL));
    
    const int max_enemy = 20;
    Enemy* enemy_ptr[max_enemy];
    int num_enemy;
    
    CarJacker CJ1;
    num_enemy++;
    
    Helicopter Heli1;
    num_enemy++;
    
    PitBull Pit1;
    num_enemy++;
    
        enemy_ptr[0] = &CJ1;
        enemy_ptr[1] = &Heli1;
        enemy_ptr[2] = &Pit1;
    
    while ( true ) {
        
        for (int j=0; j<num_enemy; j++) {
            
            enemy_ptr[j]->move_position();
        }
        cout << endl;
        
        xRan = rand()%num_enemy;

        // fire weapon
        enemy_ptr[xRan]->fire_weapon();
        
        cout << endl;
        
        xRan = rand()%num_enemy;
        
        // Pick a random Enemy to update_status
        enemy_ptr[xRan]->update_status();
        
        cout << "\n\n";
        
    }
    return 0;
    
}