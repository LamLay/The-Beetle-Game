/*************************************************************************
 * 
 * File Name:       Beetle.h
 * Name:            Lam Lay
 * Course:          CPTR 142
 * Date:            February 05, 2018
 * 
 */
 
#ifndef DICE_H
#define DICE_H
#include <string>   // for string
#include <vector>   // for vector
#include "Beetle.h"
using namespace std;


class Dice {
	public: 
		Dice (int seed);
		int rollADi(); 

};		

#endif //DICE_H