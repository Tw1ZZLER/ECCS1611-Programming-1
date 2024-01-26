#include <iostream>

using namespace std;

bool isNumeric(string s);
bool isCorrectLength(string s);
bool isCardValid(int digits[], int size);

const int NUMBER_OF_DIGITS = 16;

int main() {
    // Variable Declaration
    string cardNumber = "";
    int digits[NUMBER_OF_DIGITS];

    while(true) {
        // Input
        cout << "Enter 16-digit card number # or Q to quit: ";
        getline(cin, cardNumber);
        if(cardNumber == "Q") break;
        if(!isNumeric(cardNumber)) {
            cout << "Error - card number must contain only digits." << endl << endl;
        }
        else if(!isCorrectLength(cardNumber)) {
            cout << "Error - card number must contain 16 digits." << endl << endl;
        }
        else {
            // Convert String to Integer Array
            for(int i = 0; i < NUMBER_OF_DIGITS; i++) {
                digits[i] = cardNumber[i];
            }
            // Run Card Validity
            if (!isCardValid(digits, NUMBER_OF_DIGITS)) cout << "Card is valid.";
            else cout << "Card is not valid.";
            cout << endl << endl;
        }
    }
}
bool isNumeric(string s) {
     bool isNumeric = true;
     for(int i = 0; i < s.length(); i++) {
        if(!(s[i] >= '0')&&(s[i] <= '9')) isNumeric = false;
    }
    return isNumeric;
}
bool isCorrectLength(string s) {
    return (NUMBER_OF_DIGITS == s.length());
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