#include <iostream>
using namespace std;

const int ROWS = 0;

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow);
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat);
// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column);

int main() {

}
int findRowIndex(int thisRow) {

}
int findSeatIndex(char thisSeat) {

}
void displaySeatColumn(char seats[][ROWS], int column) {

}
