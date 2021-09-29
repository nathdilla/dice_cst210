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

Die::Die()
{
    sides = 6;
    srand(time(0));
}

Die::Die(int s)
{
    sides = s;
}

void Die::rollDice()
{
    int random = rand() % sides + 1;
    n = random;
}

int Die::getValue()
{
    return n;
}
