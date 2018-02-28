/*************************************************************************
 * File Name:       project1.cpp
 * Name:            lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
#include <limits>    // for invalid input
#include "Beetle.h"
#include "Dice.h"
using namespace std;

/*====================================================================
 * Main program
 */
int main() {
    char choice;
    int numberOfPlayers;
    int seed;
    Dice number(seed);
    vector<Beetle> beetles;
    
    
    cout << "Do you want to start the Beetle dice game?" <<endl;
    cout << "Press Y for 'Yes' and N for 'No'." << endl;
    cin >> choice; 
    
    // check for invalid input 
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
        }
    }    
    else 
        return 0;
   
    bool winner = false;
    int i;
    //Start playing and decide the winner
    do { 
        for (i=0; i < numberOfPlayers && winner == false; i++) {
            beetles[i].checkTheDi(number.rollADi());
            beetles[i].countTurns();
            
            if (beetles[i].completeBeetle() == true) {
                cout << "***********************************************" << endl;
                cout << "BEETLE! BEETLE! BEETLE!" << endl;
                cout << "The winner is " << beetles.at(i).getPlayerName() << endl;
                cout << "The game is finished in " << beetles.at(i).getTurn() << " turns" << endl;
                winner = true;  
            }
        }
    } while (winner == false);
    cout << "***********************************************" << endl;
    cout << "Thank you for playing Beetle!" << endl;
    
    return 0;
}
   
