/*************************************************************************
 * File Name:       Beetle.cpp
 * Name:            lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <string>   // for string
#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
#include <vector> // for vector
#include "Beetle.h"
#include "Dice.h"
using namespace std;

Dice::Dice (int seed) {
	srand(seed);
}
		
int Dice::rollADi() {
	int diceNumber = rand()% 6+1;
	return diceNumber;
}