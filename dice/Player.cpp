//
//  Player.cpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#include "Player.hpp"

Player::Player(string n)
{
    name = n;
}

void Player::roll()
{
    for(int i = 0; i < 5; i++)
    {
        dice[i].rollDice();
    }
}

void Player::showRoll()
{
    for(int i = 0; i < 5; i++)
    {
        cout << dice[i].getValue() << " ";
    }
    cout << endl;
}

int Player::getTotal()
{
    int total = 0;
    for(int i = 0; i < 5; i++)
    {
        total+=dice[i].getValue();
    }
    return total;
}

void Player::reRoll(int index)
{
    dice[index-1].rollDice();
}
