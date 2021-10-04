//
//  main.cpp
//  dice
//
//  Created by Nathan Dilla on 9/24/21.
//

#include <iostream>
#include <stdlib.h>
#include "Die.hpp"
#include "Player.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int rolls = 0; //number of rolls
    Player myPlayer = Player("Izzy");//create player of name string Izzy
    myPlayer.roll(); //rolls new numbers for all 5 dice
    while (true)//begins infinite loop of rolling dice
    {
        cout << "DICE\n1 2 3 4 5\n----------\n";
        myPlayer.showRoll(); //prints out all numbers
        rolls++;//increment rolls
        cout << "total: " << myPlayer.getTotal() << endl; //print total value
        cout << "rolls: " << rolls << endl;//print total rolls
        cout << "how many dice do you want to reroll?" << endl;
        int reRolling = 0;//number of dice to reroll
        cin >> reRolling;//store user input in int reRolling
        if(reRolling > 0)//if any die to reroll
        {
            for(int i = 0; i < reRolling; i++)//for loop for how many to reroll
            {
                cout << "which one? " << endl;
                int index;
                cin >> index;
                myPlayer.reRoll(index); //reroll of given index
            }
        }
        else//if no die to reroll, break infinite loop
        {
            break;
        }
    }
    cout << "Goodbye! :-)" << endl;
    return 0;
}
