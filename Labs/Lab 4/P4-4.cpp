#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Variable Declaration
    double customerOwes;
    double customerPays;
    double changeDue;
    int numberOfPennies = 0;
    int numberOfNickels = 0;
    int numberOfDimes = 0;
    int numberOfQuarters = 0;
    int numberOfDollars = 0;
    const int DOLLAR_VALUE = 100;
    const int QUARTER_VALUE = 25;
    const int DIME_VALUE = 10;
    const int NICKEL_VALUE = 5;
    const int PENNY_VALUE = 1;

    // Input
    cout << "Customer owes $";
    cin >> customerOwes;
    cout << "Customer pays $";
    cin >> customerPays;

    // Change Due Calculation and Print
    changeDue = customerPays - customerOwes;
    cout << fixed << setprecision(2) << "Change due is $" << changeDue << endl;
    changeDue = round(changeDue * 100);

    // Calculate Numbers of Currencies
    // Dollars
    if (changeDue >= DOLLAR_VALUE) {
        numberOfDollars = changeDue / DOLLAR_VALUE;
        cout << numberOfDollars << " dollars" << endl;
        changeDue = changeDue - numberOfDollars * DOLLAR_VALUE;
    }       
    // Quarters
    if (changeDue >= QUARTER_VALUE) {
        numberOfQuarters = changeDue / QUARTER_VALUE;
        cout << numberOfQuarters << " quarters" << endl;
        changeDue = changeDue - numberOfQuarters * QUARTER_VALUE;
    }
    // Dimes
    if (changeDue >= DIME_VALUE) {
        numberOfDimes = changeDue / DIME_VALUE;
        cout << numberOfDimes << " dimes" << endl;
        changeDue = changeDue - numberOfDimes * DIME_VALUE;
    }
    // Nickels
    if (changeDue >= NICKEL_VALUE) {
        numberOfNickels = changeDue / NICKEL_VALUE;
        cout << numberOfNickels << " nickels" << endl;
        changeDue = changeDue - numberOfNickels * NICKEL_VALUE;
    }
    // Pennies
    if (changeDue >= PENNY_VALUE) {
        numberOfPennies = changeDue / PENNY_VALUE;
        cout << numberOfPennies << " pennies" << endl;
    }
}