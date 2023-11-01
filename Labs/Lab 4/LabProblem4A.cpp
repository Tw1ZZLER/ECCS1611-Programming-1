#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variable Declaration
    double subTotal;
    double totalTax;
    double taxRate;

    // Input
    cout << "Enter subtotal: ";
    cin >> subTotal;
    cout << "Enter tax rate: ";
    cin >> taxRate;

    // Math
    totalTax = subTotal * taxRate;

    // Output
    cout << fixed << setprecision(2) << "Total tax is: " << totalTax;
}