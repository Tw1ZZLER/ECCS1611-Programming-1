#include <iostream>

using namespace std;

int main() {
    // Variable Declaration
    int givenNumber;
    int numberOfDigits;

    // Input
    cout << "Please enter an integer: ";
    cin >> givenNumber;

    // Convert Negative Numbers to Positive Numbers
    if (givenNumber < 0) givenNumber = givenNumber * -1;

    // Test for Number of Digits
    if (givenNumber >= 1000000000)
        numberOfDigits = 10;
    else if (givenNumber >= 100000000)
        numberOfDigits = 9;
    else if (givenNumber >= 10000000)
        numberOfDigits = 8;
    else if (givenNumber >= 1000000)
        numberOfDigits = 7;
    else if (givenNumber >= 100000)
        numberOfDigits = 6;
    else if (givenNumber >= 10000)
        numberOfDigits = 5;
    else if (givenNumber >= 1000)
        numberOfDigits = 4;
    else if (givenNumber >= 100)
        numberOfDigits = 3;
    else if (givenNumber >= 10)
        numberOfDigits = 2;
    else
        numberOfDigits = 1;

    // Output
    cout << "The number has " << numberOfDigits << " digits.";
}