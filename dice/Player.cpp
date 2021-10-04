//
//  Player.cpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#include "Player.hpp"

Player::Player(string n)//constructor
{
    name = n;
}

void Player::roll()
{
    for(int i = 0; i < 5; i++) // loop through dice array, and call rollDice
    {
        dice[i].rollDice();
    }
}

void Player::showRoll() //print value of dice array elements
{
    for(int i = 0; i < 5; i++)
    {
        cout << dice[i].getValue() << " ";
    }
    cout << endl;
}

int Player::getTotal()//summation of dice array elements value
{
    int total = 0;
    for(int i = 0; i < 5; i++)
    {
        total+=dice[i].getValue(); //adds value of element to int total
    }
    return total;
}

void Player::reRoll(int index)
{
    dice[index-1].rollDice(); // roll dice of parameter index
}
