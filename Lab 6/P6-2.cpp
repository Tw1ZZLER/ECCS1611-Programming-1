#include <iostream>

using namespace std;

int number = 0;

int main () {
    // Input
    cout << "Enter number of asterisks per side: ";
    cin >> number;
    cout << endl;

    // Output
    for (int row = 0; row < number * 2 - 1; row++) {
        for (int column = 0; column < number * 2 -1; column++) {
            if (column < number - row - 1) cout << " ";
            else if (column > number + row - 1) cout << " ";
            else if (row >= number && column < row - number + 1) cout << " ";
            else if (row >= number && column > number * 2 - row + (number - 3)) cout << " ";
            else cout << "*";
        }
    cout << endl;
    }
}