/*************************************************************************
 * 
 * File Name:       Beetle.h
 * Name:            Lam Lay
 * Course:          CPTR 142
 * Date:            February 05, 2018
 * 
 */
 
#ifndef BEETLE_H
#define BEETLE_H
#include <string>   // for string
#include <vector>   // for vector
#include "Dice.h"
using namespace std;


class Beetle {
    public:
        Beetle();
        Beetle(string newPlayerName);
        bool completeBeetle();
        
        string getPlayerName();
        int getTurn();
        void checkTheDi(int diceNumber);
        void countTurns();
        
    private: 
        int body;
        int head;
        int wing;
        int leg;
        int antenna;
        int eye;
        string playerName;
        int numberOfTurns;
};        
        
#endif //BEETLE_H        