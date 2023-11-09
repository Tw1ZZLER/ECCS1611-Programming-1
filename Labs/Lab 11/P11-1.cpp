#include <iostream>
using namespace std;

const int ROWS = 13;

// findRowIndex: user input, returns appropriate row index into arrays.
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
    const int COLUMNS = 8;
    int rowIndex = 0;
    char seatIndex = ' ';
    char seats[COLUMNS][ROWS] = 
    {
        {'D','D','D','D','D','D','D','D','D','D','D','D',' '},
        {'C','C','C','C','C','C','C','C','C','C','C','C',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ','1','1','1','1'},
        {'1','2','3','4','5','6','7','8','9','0','1','2','3'},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {'B','B','B','B','B','B','B','B','B','B','B','B','B'},
        {'A','A','A','A','A','A','A','A','A','A','A','A','A'},
    };
    while(true) {
        // Print Seats
        cout << endl;
        for(int i = 0; i < COLUMNS; i++) {
            displaySeatColumn(seats, i);
        }
        // Prompt
        cout << "\nEnter a seat or Q to quit: ";
        cin >> rowIndex >> seatIndex;
        if(cin.fail()) break;

        // Check for Errors and Reserve Seat
        if(rowIndex > 13 || rowIndex < 1)
            cout << "Failed - wrong row number." << endl;
        else if(findSeatIndex(seatIndex) == -1) 
            cout << "Failed - wrong seat column." << endl;
        else if(rowIndex == 13 && (findSeatIndex(seatIndex) == 0 || findSeatIndex(seatIndex) == 1)) 
            cout << "Failed - you are in the LAVATORY." << endl;
        else if(seats[findSeatIndex(seatIndex)][findRowIndex(rowIndex)] == 'X')
            cout << "Failed - already assigned." << endl;
        else seats[findSeatIndex(seatIndex)][findRowIndex(rowIndex)] = 'X';
    }
}
int findRowIndex(int thisRow) {
    return thisRow - 1;
}
int findSeatIndex(char thisSeat) {
    switch(thisSeat) {
        case 'D': return 0;
        case 'C': return 1;
        case 'B': return 6;
        case 'A': return 7;
    }
    return -1;
}
void displaySeatColumn(char seats[][ROWS], int column) {
    for(int i = 0; i < ROWS; i++) {
        cout << " " << seats[column][i];
    }
    cout << endl;
}
