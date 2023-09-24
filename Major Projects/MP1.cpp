/* MP1.cpp - Corbin Hibler - 24 September 2023
 * Calculates the cost of customer's purchases for Jim's Donut Shop, by
 * using input of how many regular and fancy donuts, and apple fritters
 * they ordered.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Variable Declaration
    int regularDonuts = 0;
    int fancyDonuts = 0;
    int appleFritters = 0;
    double customerOwes;
    double customerPays;
    double changeDue;
    int numberPennies = 0;
    int numberNickels = 0;
    int numberDimes = 0;
    int numberQuarters = 0;
    int numberDollars = 0;
    const int DOLLAR_VALUE = 100;
    const int QUARTER_VALUE = 25;
    const int DIME_VALUE = 10;
    const int NICKEL_VALUE = 5;
    const int PENNY_VALUE = 1;

    // Input
    cout << "Number of regular donuts ordered: ";
    cin >> regularDonuts;
    cout << "Number of fancy donuts ordered: ";
    cin >> fancyDonuts;
    cout << "Number of apple fritters ordered: ";
    cin >> appleFritters;

    // Calculate how much the customer owes

    cout << "Customer owes $";
    cin >> customerOwes;
    cout << "Customer pays $";
    cin >> customerPays;

    // Change Due Calculation and Print
    changeDue = customerPays - customerOwes;
    if (changeDue == 0) cout << "Exact payment recieved  - no change owed";
    else cout << fixed << setprecision(2) << "Change due is $" << changeDue << " - ";
    changeDue = round(changeDue * 100); // fixes double rounding bugs

    // Calculate Numbers of Currencies
    // Dollars
    if (changeDue >= DOLLAR_VALUE) {
        numberDollars = changeDue / DOLLAR_VALUE;
        cout << numberDollars;

        // Check for singular or plural print
        if (numberDollars == 1) cout << " dollar"; // singular print
        else cout << " dollars"; // plural print

        changeDue -= numberDollars * DOLLAR_VALUE;
    }       
    // Quarters
    if (changeDue >= QUARTER_VALUE) {
        numberQuarters = changeDue / QUARTER_VALUE;
        cout << numberQuarters;
               
        // Check for singular or plural print
        if (numberQuarters == 1) cout << " quarter"; // singular print
        else cout << " quarters"; // plural print

        changeDue -= numberQuarters * QUARTER_VALUE;
    }
    // Dimes
    if (changeDue >= DIME_VALUE) {
        numberDimes = changeDue / DIME_VALUE;
        cout << numberDimes;
               
        // Check for singular or plural print
        if (numberDimes == 1) cout << " dime"; // singular print
        else cout << " dimes"; // plural print

        changeDue -= numberDimes * DIME_VALUE;
    }
    // Nickels
    if (changeDue >= NICKEL_VALUE) {
        numberNickels = changeDue / NICKEL_VALUE;
        cout << numberNickels;
               
        // Check for singular or plural print
        if (numberNickels == 1) cout << " nickel"; // singular print
        else cout << " nickels"; // plural print

        changeDue -= numberNickels * NICKEL_VALUE;
    }
    // Pennies
    if (changeDue >= PENNY_VALUE) {
        numberPennies = changeDue / PENNY_VALUE;
        cout << numberPennies;
               
        // Check for singular or plural print
        if (numberPennies == 1) cout << " penny"; // singular print
        else cout << " pennies"; // plural print
    }
    cout << ".";
}