#include <iostream>

using namespace std;

int number = 0;

int main () {
    // Input
    cout << "Enter number of asterisks per side: ";
    cin >> number;
    cout << endl;

    // Output
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number * 2 + 1; j++) {
            if (j == number) cout << " ";
            else if (j > number + 1 && i > 0 && j < number * 2 && i < number - 1) cout << " ";
            else cout << "*";
        }
    cout << endl;
    }
}