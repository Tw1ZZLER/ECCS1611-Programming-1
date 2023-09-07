#include <iostream>

using namespace std;

int main() {
    // Variable Declarations
    int carCost;
    double carMPG;
    int milesDrivenPerYear;
    double gasPrice;
    int yearsOfUse;
    int carResaleAmount;

    // Input
    cout << "Enter cost of car: ";
    cin >> carCost;
    cout << "Enter MPG: ";
    cin >> carMPG;
    cout << "Enter miles driven per year: ";
    cin >> milesDrivenPerYear;
    cout << "Enter gas price: ";
    cin >> gasPrice;
    cout << "Enter years of use: ";
    cin >> yearsOfUse;
    cout << "Enter car resale amount: ";
    cin >> carResaleAmount;

    // Output
    cout << "Net cost of car ownership: ";
    cout << carCost + ((milesDrivenPerYear / carMPG) * gasPrice) * yearsOfUse - carResaleAmount;
    return 0;
}