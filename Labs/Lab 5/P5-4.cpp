#include <iostream>

using namespace std;

int main() {
    // Variable Declaration
    int cardNumber;
    int cardNumberReset;
    int digit;
    int doubleDigit;
    int sumA = 0;
    int sumB = 0;
    int checksum = 0;
    bool validCard;

    // Input
    cout << "Please enter 8-digit card number: ";
    cin >> cardNumber;
    cardNumberReset = cardNumber;

    // Digit Stripper A
    while (cardNumber > 0) {
        digit = cardNumber % 10;
        cardNumber /= 100;
        sumA += digit;
    }
    cardNumber = cardNumberReset;
    cardNumber /= 10;

    // Digit Stripper B
    while (cardNumber > 0) {
        digit = cardNumber % 10;
        cardNumber /= 100;
        doubleDigit = digit * 2;
        while (doubleDigit > 0) {
            digit = doubleDigit % 10;
            doubleDigit /= 10;
            sumB += digit;
        }
    }

    // Checksum Validity
    checksum = sumA + sumB;
    if (checksum % 10 == 0) validCard = true;

    // Output
    if (validCard == true) cout << "Card is valid.";
    else cout << "Card is not valid.";
}