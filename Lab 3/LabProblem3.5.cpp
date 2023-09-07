#include <iostream>

using namespace std;

int main() {
    // Variable Declarations
    double totalCost;
    int booksPurchased;
    const double TAX = .075;
    const double SHIPPING_CHARGE = 2.50;
    
    // Input
    cout << "Enter total cost of all books: $";
    cin >> totalCost;
    cout << "Enter total number of books purchased: ";
    cin >> booksPurchased;

    // Output
    cout << "Price of order is $";
    cout << totalCost + totalCost * TAX + booksPurchased * SHIPPING_CHARGE;
    return 0;
}