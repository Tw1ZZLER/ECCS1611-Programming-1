#include <iostream>

using namespace std;

int main() {
    int number = 0;
    int binaryDigit;

    cout << "Please enter a number: ";
    cin >> number;

    while(number != 0) {
         binaryDigit = number % 2;
         cout << binaryDigit << endl;
         number = number / 2;
    }
}