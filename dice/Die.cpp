//
//  Die.cpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#include "Die.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

Die::Die() //def constructor
{
    sides = 6;//set int sides to 6
    srand(time(0));//set rand seed to current time
}

Die::Die(int s)//constructor given parameter for sides int s
{
    sides = s;
}

void Die::rollDice()// choose random number from 1-6 and sets value int n
{
    int random = rand() % sides + 1;
    n = random;
}

int Die::getValue()//returns value int n from dice roll
{
    return n;
}
