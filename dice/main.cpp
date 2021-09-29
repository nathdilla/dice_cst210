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
    // insert code here...
    //std::cout << "Hello, World!\n";
    int rolls = 0;
    Player myPlayer = Player("Izzy");
    myPlayer.roll();
    while (true)
    {
        cout << "DICE\n1 2 3 4 5\n----------\n";
        myPlayer.showRoll();
        rolls++;
        cout << "total: " << myPlayer.getTotal() << endl;
        cout << "rolls: " << rolls << endl;
        cout << "how many dice do you want to reroll?" << endl;
        int reRolling = 0;
        cin >> reRolling;
        if(reRolling > 0)
        {
            for(int i = 0; i < reRolling; i++)
            {
                cout << "which one? " << endl;
                int index;
                cin >> index;
                myPlayer.reRoll(index);
            }
        }
        else
        {
            break;
        }
    }
    cout << "Goodbye! :-)" << endl;
    return 0;
}
