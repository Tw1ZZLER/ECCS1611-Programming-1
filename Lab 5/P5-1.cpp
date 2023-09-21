#include <iostream>

using namespace std;

int sum1 = 0;
int sum2 = 0;

int main() {
    // Finds the sum of all even numbers between 2 and 100, inclusive
    for(int i = 2; i <= 100; i = i + 2) {
        sum1 = i + sum1;
    }
    // Finds the sum of all squares between 1 and 100, inclusive
    for(int i = 1; i <= 100; i++) {
        sum2 = i * i + sum2;
    }
    // Output
    cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sum1 << "." << endl;
    cout << "The sum of all squares between 1 and 100, inclusive, is " << sum2 << "." << endl;
}