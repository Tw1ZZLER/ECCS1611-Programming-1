/* MP3.cpp - Corbin Hibler - 12 November 2023
 * A digital version of Tic-Tac-Toe in C++.
 */

#include <iostream> 
#include <string> 
using namespace std;

int getPlayerInput(string playerName);
bool isLegalMove(char board[], int location);
void placeMarkOnBoard(char board[], char playerMark, int location);
void clearBoard(char board[]);
bool hasThreeInRow(char board[], char playerMark);
void displayBoard(char board[]);
void displayGameStats(int ties, int player1Score, int player2Score);

int main() {
	const int STUDENTS = 4;
	const int QUIZZES = 2;
	
	int scores[STUDENTS][QUIZZES];
	string names[STUDENTS];

	for(int i = 0; i < STUDENTS; i++) {
		cout << "Enter name of student #" << i + 1 << ": ";
		cin >> names[i];
	}
	for (int quiz = 0; quiz < QUIZZES; quiz++) {
		cout << "Enter scores for quiz #" << quiz + 1 << ":\n";
		for (int st = 0; st < STUDENTS; st++) {
			cout << "Enter score for " << names[st] << ": ";
			cin >> scores[st][quiz];
		}
	}
}
int getPlayerInput(string playerName) {
	
}
bool isLegalMove(char board[], int location) {
	
}
void placeMarkOnBoard(char board[], char playerMark, int location) {
	
}
void clearBoard(char board[]) {
	
}
bool hasThreeInRow(char board[], char playerMark) {
	
}
void displayBoard(char board[]) {
	
}
void displayGameStats(int ties, int player1Score, int player2Score) {
	
}