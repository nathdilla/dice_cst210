//
//  Die.hpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#ifndef Die_hpp
#define Die_hpp

#include <stdio.h>

class Die
{
private:
    int sides; //number of sides on the die
    int n; //value of the roll
public:
    Die(); //def constructor
    Die(int); //constructor defining num of sides
    void rollDice(); //rolls die, sets value of n (random)
    int getValue(); //returns value of n
};

#endif /* Die_hpp */
