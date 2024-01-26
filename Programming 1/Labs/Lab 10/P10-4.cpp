#include <iostream>

using namespace std;

bool isCardValid(int digits[], int size);

int main() {
    // Variable Declaration
    const int NUMBER_OF_DIGITS = 8;
    int cardNumber = 0;
    int digits[NUMBER_OF_DIGITS];

    while(true) {
        // Input
        cout << "Enter 8-digit card number # or Q to quit: ";
        cin >> cardNumber;
        if(cin.fail()) break;

        // Convert Int to Integer array
        for(int i = NUMBER_OF_DIGITS - 1; i >= 0; i--) {
            digits[i] = cardNumber % 10;
            cardNumber /= 10;
        }

        // Output
        if (isCardValid(digits, NUMBER_OF_DIGITS)) cout << "Card is valid.";
        else cout << "Card is not valid.";
        cout << endl << endl;
    }
}
bool isCardValid(int digits[], int size) {
    bool validCard = false;
    int sumA = 0;
    int sumB = 0;
    for(int i = 0; i < size; i++) {
        sumA += digits[i];
    }
    for(int i = 0; i < size; i++) {
        sumB += digits[i];
    }
    int checksum = sumA + sumB;
    if (checksum % 10 == 0) validCard = true;
    return validCard;
}
