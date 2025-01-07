#include <iostream>
using namespace std;

int main (void) {
    int row;
    int col;

    cout << "Checkboard:\n\n";

    for ( row = 1; row <= 10; row++ ) {
        for ( col = 1; col <= 100; col++ ) {
            if (( row+ col ) % 2 == 0) cout << "*";
            else                       cout << " ";
        }
        cout << endl;
    }
}
