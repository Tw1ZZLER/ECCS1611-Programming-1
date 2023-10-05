/* MP2.cpp - Corbin Hibler - 19 October 2023
 * A digital version of the dice game Pig in C++. A player rolls as
 * many times as they wish, until they pass, or roll a 1, or snake eyes.
 * The goal is to reach 100 total score.
 */

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <string> // This library fixes a "cout is ambiguous" error

using namespace std;

char getPlayerInput( void );
bool hasWinningScore( int score );
bool isTurnPointsLost( int die1value, int die2value );
bool isGameScoreLost( int die1value, int die2value );
int rollDie( void );

int main ( void ) {
    // Variables
    char input;
    int playerScore = 0;
    int computerScore = 0;
    int die1value = 0; // First dice roll per turn
    int die2value = 0; // Second dice roll per turn
    int turnScore = 0; // Score of each turn added up
    bool turnPass = false;

    // Seed Random Number Generator
    srand(time(0));
    
    // Introduce Player to the Game
    cout << "Welcome to PIG. Your opponent will be the Mighty Computer. Begin!" << endl;

    while (true) { // The Main Game
        cout << "It is now the player's turn." << endl;

        /*  #### #     ##### #   # #####  ###
         *  #  # #     #   #  ###  #      #  #
         *  ###  #     #####   #   #####  ###
         *  #    #     #   #   #   #      #  #
         *  #    ##### #   #   #   #####  #  #
         * 
         * Player's Turn
         */
        do { 
            input = getPlayerInput();
            switch(input) {
                case 'r': // Roll Dice
                    die1value = rollDie();
                    die2value = rollDie();
                    cout << "You rolled a " << die1value << " and a " << die2value << "." << endl;
                    turnScore += (die1value + die2value); // Add your roll to your score this turn
                    if (!isTurnPointsLost(die1value,die2value)) 
                        cout << "Your score this turn is now " << turnScore << "." << endl; 
                    if (hasWinningScore(playerScore + turnScore)) { // Check if Player has Won
                        cout << "You won! You are the Pig Champion!";
                        turnPass = true;
                    }
                    if (isTurnPointsLost(die1value,die2value)) {
                        cout << "You rolled a 1, so your turn score has been lost." << endl;
                        turnScore = 0;
                        turnPass = true;
                    }
                    if (isGameScoreLost(die1value,die2value)) {
                        cout << "You rolled snake eyes! Your game score has also been lost." << endl;
                        playerScore = 0;
                        turnPass = true;
                    }
                    break;
                case 'e': // Pass Turn
                    playerScore += turnScore;
                    cout << "You passed your turn. Your total score is currently " << playerScore << "." << endl; 
                    turnPass = true;
                    break;
            }
            
        } while (!turnPass);
        if (hasWinningScore(playerScore + turnScore)) break; // Break out of game if player won

        // Reset Variables for Computer's Turn
        turnScore = 0;
        turnPass = false;

        // Pause So Player Can Read Their Score
        cout << "Press enter to continue. . . ";
        cin.ignore();
        cin.get();

        cout << "It is now the computer's turn." << endl;

        /*  ##### ##### #   # ###  #   # ##### ##### ###
         *  #     #   # ## ## #  # #   #   #   #     #  #
         *  #     #   # # # # ###  #   #   #   ##### ###
         *  #     #   # #   # #    #   #   #   #     #  #
         *  ##### ##### #   # #    #####   #   ##### #  #
         * 
         * Computer's Turn
         */
        while (turnScore < 23) {
            sleep(1);
            die1value = rollDie();
            die2value = rollDie();
            cout << "The computer rolled a " << die1value << " and a " << die2value << "." << endl;
            turnScore += (die1value + die2value);
            if (!isTurnPointsLost(die1value,die2value)) 
                cout << "The computer's score this turn is " << turnScore << "." << endl; 
            if (hasWinningScore(computerScore + turnScore)) { // Check if Computer has won.
                cout << "Your opponent, the Mighty Computer, has won. :crying_emoji:";
                break;
            }
            if (isTurnPointsLost(die1value,die2value)) {
                cout << "The computer rolled a 1, so it's turn score has been lost." << endl;
                turnScore = 0;
                break;
            }
            if (isGameScoreLost(die1value,die2value)) {
                cout << "The computer rolled snake eyes! It's game score has also been lost." << endl;
                computerScore = 0;
                break;
            }
        }
        if (hasWinningScore(computerScore + turnScore)) break; // Break out of game if Computer has won.
        computerScore += turnScore;
        cout << "The computer passes it's turn. It's total score is currently " << computerScore << "." << endl;
    
        // Reset Variable for Player's Turn
        turnScore = 0;
        turnPass = false;
    } 
    return 0;
}

// Functions

// Receives input from player, idiot proofing
char getPlayerInput( void ) { 
    char input;
    cout << "Roll dice (r) or pass (e)? ";
    cin >> input;
    if (input == 'r' || input == 'e') {
        return input;
    }
    else {
        cout << "Incorrect input! Enter 'r' or 'e'." << endl;
        return getPlayerInput();
    }
}

// Check if player has the winning score
bool hasWinningScore( int score ) {
    if (score >= 100) return true;
    else return false;
} 

// Checks if player rolled a 1 at all and loses their turn score
bool isTurnPointsLost( int die1value, int die2value ) {
    if (die1value == 1 || die2value == 1) return true;
    else return false;  
} 

// Checks if player rolled snake eyes and loses their game score
bool isGameScoreLost( int die1value, int die2value ) {
    if (die1value == 1 && die2value == 1) return true;
    else return false;
}

// Rolls die and returns the result
int rollDie( void ) { 
    const int NUMBER_OF_DIE_SIDES = 6;
    const int LOWEST_DIE_VALUE = 1;
    
    return rand() % NUMBER_OF_DIE_SIDES + LOWEST_DIE_VALUE;
}