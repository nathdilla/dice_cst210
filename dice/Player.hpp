//
//  Player.hpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#ifndef Player_hpp
#define Player_hpp

#include <iostream>
#include <string>
#include "Die.hpp"

using namespace std;

class Player
{
private:
    string name;
    Die dice[5];
public:
    Player();
    Player(string);
    void roll();
    void showRoll();
    int getTotal();
    void reRoll(int index);
    
};
#endif /* Player_hpp */
