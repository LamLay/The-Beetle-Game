/*************************************************************************
 * File Name:       project1.cpp
 * Name:            lam Lay
 * Course:          CPTR 142
 * Date:            January 10, 2018
 * 
 */

#include <iostream>  // for cin and cout
#include <stdlib.h>  // for exit
using namespace std;
#include <limits> // for invalid input

void drawAnEye();
void drawAnAntenna();
void drawALeg();
void drawAWing();
void drawAHead();
void drawABody();
void rollADie();


int main() {
    char choice;
    int numberOfPlayers;
    
    cout << "Do you want to start the Beetle dice game?" <<endl;
    cout << "Press Y for 'Yes' and N for 'No'." << endl;
    cin >> choice; 
    
    // check for invalid input
    while(cin.fail()) {
      cin.clear();
      cin.ignore();
      cout << "Invalid choice." <<endl;
      cin >> menu;
    }
    
    if (choice == "Y") {
        cout << "How many players are there?" << endl;
        cin >> numberOfPlayers;
    }
    else if (choice == "N") {
        return 0;
    }
    
    while (i < numberOfPlayers) {
        
        rollADie();
        
        switch (n) {
		    case 1:
			    drawAnEye();
			    break;
    		case 2:
    			drawAnAntenna();
    			break;
    		case 3:
    			drawALeg();
    			break;
    		case 4:
    			drawAWing();
    			break;
    		case 5:
    			drawAHead();
    			break;
    		case 6:
    			drawABody();
    			break;
    		default:
    			cout << "Invalid choice." << "\n";
                break;
    	}
    }		
   
    
    return 0; 
}

void rollADie() {
		srand(time(NULL));

		int n;
		n = rand();
		n = 1 + n % 6;
}		

void drawAnEye() {
	cout << "Draw an eye" << endl;
}    		
    		
void drawAnAntenna() {
    cout << "Draw an antenna" <<endl;
}    		

void drawALeg() {
    cout << "Draw a leg" << endl;
}

void drawAWing() {
    cout << "Draw a wing" << endl;
}

void drawAHead() {
    cout << "Draw a head" << endl;
}

void drawABody() {
    cout << "Draw a body" << endl;
}