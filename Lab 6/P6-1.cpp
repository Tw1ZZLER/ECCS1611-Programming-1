#include <iostream>

using namespace std;

int n = 0;

int main () {
    // Input
    cout << "Enter number of asterisks per side: ";
    cin >> n;
    cout << endl;

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2 + 1; j++) {
            if (j == n) cout << " ";
            else if (j > n + 1 && i > 0 && j < n * 2 && i < n - 1) cout << " ";
            else cout << "*";
        }
    cout << endl;
    }
}