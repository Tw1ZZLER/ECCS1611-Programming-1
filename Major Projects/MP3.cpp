/* MP3.cpp - Corbin Hibler - 16 November 2023
 * A digital version of Tic-Tac-Toe in C++.
 */

#include <iostream>
using namespace std;

int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[], char playerMark);
bool isTie(char board[]);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);

// Global Variables
const int BOARD_SIZE = 9;

int main() {
	// Main Variables
	string player1 = "";
	string player2 = "";
	char board[BOARD_SIZE] = {'1','2','3','4','5','6','7','8','9'};
	int ties = 0;
	int player1Score = 0;
	int player2Score = 0;
	char playAgain = 'y';
	int location = 0;
	bool isPlayer1First = true;

	// Get Player's Names
	cout << "--- TIC TAC TOE ---"
	<< "\nPlayer 1, enter your name here: ";
	cin >> player1;
	cout << "Player 2, enter your name here: ";
	cin >> player2;

	// Loop for Every Game
	do {
    	bool isPlayer1sTurn = isPlayer1First;

		// Loop for Every Turn
		do {
			displayBoard(board);

			// Player 1
			if (isPlayer1sTurn) {
				do {
					location = getPlayerInput(player1);
					if(!isLegalMove(board,location)) cout << "Sorry, there is already a mark there. Try again!\n";
				} while(!isLegalMove(board,location));
				placeMarkOnBoard(board,'X',location);
			}

			// Player 2
			else {
				do {
					location = getPlayerInput(player2);
					if(!isLegalMove(board,location)) cout << "Sorry, there is already a mark there. Try again!\n";
				} while(!isLegalMove(board,location));
				placeMarkOnBoard(board,'O',location);
			}
			isPlayer1sTurn = !isPlayer1sTurn;
		} while (!hasThreeInRow(board,'X') && !hasThreeInRow(board,'O') && !isTie(board));

		// Check if Player 1 Won
		if(hasThreeInRow(board,'X')) {
			cout << player1 << " has won this game!\n";
			player1Score++;
		}

		// Check if Player 2 Won
		else if(hasThreeInRow(board,'O')) {
			cout << player2 << " has won this game!\n";
			player2Score++;
		}

		// Check if it's a tie
		else if(isTie(board)) {
			cout << "The game is a tie!\n";
			ties++;
		}
		// End of Game 
		clearBoard(board);
		displayGameStats(ties,player1Score,player2Score);
		cout << "\nWould you like to play again? (y/n): ";
		cin >> playAgain;
		isPlayer1First = !isPlayer1First;
	} while(playAgain == 'y');
}
/* Returns a value between 1 and 9, inclusive, indicating the square where the current player wants to place 
   their mark on the board.
   @param playerName The name of the player you are getting the input from.
*/
int getPlayerInput(string playerName) {
	int input;
	while(true) {
		cout << "\033[0m" << playerName << ", enter where you'd like to place your mark (1-9): ";
		cin >> input;
		if(cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "\033[31mERROR: Input must be an integer 1-9!\n";
		}
		else if(!(input > 0 && input < 10)) {
			cout << "\033[31mERROR: Input must be an integer 1-9!\n";
		}
		else return input - 1;
	}
}
/* Returns true if the indicated location on the board yet not yet been played, false otherwise.
   @param board[] The array of the Tic-Tac-Toe board.
   @param location The integer location (1-9) of an index on the board array.
*/
bool isLegalMove(char board[], int location) {
	if(board[location] == 'X' || board[location] == 'O') return false;
	else return true;
}
/* Places the indicated mark at the specified board location; routine assumes that this is a legal placement.
   @param board[] The array of the Tic-Tac-Toe board.
   @param playerMark The character 'X' or 'O' depending on which player is placing the mark.
   @param location The integer location (1-9) where the player wants to place the mark.
*/
void placeMarkOnBoard(char board[], char playerMark, int location) {
	board[location] = playerMark;
}
/* Restores the tic-tac-toe board to its original (i.e., with no crosses or circles being marked) configuration.
   @param board[] The array of the Tic-Tac-Toe board.
*/
void clearBoard(char board[]) {
	for(int i = 0; i < BOARD_SIZE; i++) {
		board[i] = '1' + i;
	}
}
/* Returns true if, for the specified mark, the board has the equivalent of three of those marks in a row, 
   either vertically, horizontally, or diagonally.
   @param board[] The array of the Tic-Tac-Toe board.
   @param playerMark The character 'X' Or 'O', depending on which player is being checked.
*/
bool hasThreeInRow(char board[], char playerMark) {
	for(int i = 0; i < BOARD_SIZE; i = i + 3) {
		if(board[i] == playerMark && board[i + 1] == playerMark && board[i + 2] == playerMark) return true;
	}
	for(int i = 0; i < (BOARD_SIZE / 3); i++) {
		if(board[i] == playerMark && board[i + 3] == playerMark && board[i + 6] == playerMark) return true;
	}
	if(board[0] == playerMark && board[4] == playerMark && board[8] == playerMark) return true;
	if(board[2] == playerMark && board[4] == playerMark && board[6] == playerMark) return true;
	return false;
}
/* Checks all values in board for Xs and Os. If there are all Xs and Os, then returns true.
   @param board[] The array of the Tic-Tac-Toe board.
*/
bool isTie(char board[]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        if(board[i] != 'X' && board[i] != 'O') {
            return false;
        }
    }
    return true;
}
/* Prints out the current board; the board display must be as shown above.
   @param board[] The array of the Tic-Tac-Toe board.
*/
void displayBoard(char board[]) {
	cout << "\n " << board[6] << " | " << board[7] << " | " << board[8]
    << "\n---+---+---"
	<< "\n " << board[3] << " | " << board[4] << " | " << board[5]
	<< "\n---+---+---"
	<< "\n " << board[0] << " | " << board[1] << " | " << board[2] << "\n\n";
}
/* Prints out the “stats” for all the games: number of games tied, number of games player 1 won,
   and number of games player 2 won.
   @param ties The integer number of ties of all games.
   @param player1Score The integer number of how many wins player 1 has.
   @param player2Score The integer number of how many wins player 2 has.
*/
void displayGameStats(int ties, int player1Score, int player2Score) {
	cout << "--- GAME STATS ---\n"
	<< "Player 1: " << player1Score << " wins\n"
	<< "Player 2: " << player2Score << " wins\n"
	<< ties << " ties\n"
	<< "------------------";
}