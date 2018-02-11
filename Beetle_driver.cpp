/*************************************************************************
 * File Name:       project1.cpp
 * Name:            lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
#include <limits> // for invalid input
#include "Beetle.h"
#include "Dice.h"
using namespace std;

int main() {
    char choice;
    int numberOfPlayers;
    //int turn = 0;
    int seed;
    Dice number(seed);
    
    //vector<string> players;
    vector<Beetle> beetles;
    
    cout << "Do you want to start the Beetle dice game?" <<endl;
    cout << "Press Y for 'Yes' and N for 'No'." << endl;
    cin >> choice; 
    
    // check for invalid input ?????????????
    while(choice != 'Y' && choice != 'N') {
      cin.clear();
      cin.ignore();
      cout << "Invalid choice." <<endl;
      cin >> choice;
    }
     
    // input the number of players and players' names
    if (choice == 'Y') {
        cout << "How many players are there?" << endl;
        cin >> numberOfPlayers;
		cout << "What is the seed?" << endl;
		cin >> seed;
		Dice number(seed); // constructor for srand
		
        for (int i = 1; i <= numberOfPlayers; i++) {
            string playerName;
            cout << "What is the player" << i << "'s name?"  << endl;
            cin >> playerName;
            beetles.push_back(Beetle(playerName)); 
            cout << "Line 51" << endl;
        }
        cout << "Line 53"<<endl;
    }    
    else 
        return 0;
    cout << "Line 57" << endl;    
    
    // while (turn) {
    //     for (int i; i < numberOfPlayers && winter == -1; i++) {
    //         beetle[i].checkTheDi(number.rollADi());
    //         if (fullBeetle)
    //     }
    // turn ++;
    // }
    
    bool winner;
    cout<<"Line 68" << endl;
    int i;
    do { 
        //winner = false;
        cout<<"Line 70" << endl;
        
        for (i=0; i < numberOfPlayers && winner == false; i++) {
            cout<<"Line 72" << endl;
            beetles[i].checkTheDi(number.rollADi());
            beetles[i].countTurns();
            
            if (beetles[i].completeBeetle() == true) {
                cout << "BEETLE! BEETLE! BEETLE!" << endl;
                cout << "The winner is " << beetles.at(i).getPlayerName() << endl;
                cout << "Value of winner at line 81 is " << winner << endl;
                winner = true; 
                cout << "Value of winner at line 83 is " << winner << endl;
            }
        }
    } while (winner == false);
    
    cout << "Thank you for playing Beetle!" << endl;
    
    return 0;
}
   
