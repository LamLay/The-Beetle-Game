/*************************************************************************
 * File Name:       Beetle.cpp
 * Name:            lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <string>    // for string
#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
#include <vector>    // for vector
#include "Beetle.h"
#include "Dice.h"
using namespace std;

class Dice;


Beetle::Beetle() {}

Beetle::Beetle(string newPlayerName) {
    playerName = newPlayerName;
    body = 0;
    head = 0; 
    wing = 0;
    leg = 0;
    antenna = 0;
    eye = 0;
}

void Beetle::checkTheDi(int diceNumber) {
    if (diceNumber == 6 && body < 1 && head < 1) // body beofre head
        body ++;
    if (diceNumber == 5 && head < 1 && body == 1)
        head ++;
    if (diceNumber == 4 && wing < 2 && body == 1)  
        wing ++;
    if (diceNumber == 3 && leg < 4 && body == 1)  
        leg ++;
    if (diceNumber == 2 && antenna < 2 && head == 1) 
        antenna++;
    if (diceNumber == 1 && eye < 2 && head == 1)
        eye++;
}

bool Beetle::completeBeetle() {
    if (body == 1 && head == 1 && wing == 2 && leg == 4 && antenna == 2 && eye == 2) 
        return true;
    else
        return false;
}

void Beetle::countTurns() {
    numberOfTurns++;
}

string Beetle::getPlayerName() {
    return playerName;
}
    
int Beetle::getTurn() {
    return numberOfTurns; 
}
