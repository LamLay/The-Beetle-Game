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
#include <vector>
#include "Beetle.h"
using namespace std;


class Dice {
	public: 
		Dice (int seed);
		
		// Dice (int seed) {
		// 	int seed;
		// 	cout << "What is the seed?" << endl;
		// 	cin >> seed;
		// 	srand(seed);
		// }
		
		int rollADi(); 

};		

#endif //DICE_H