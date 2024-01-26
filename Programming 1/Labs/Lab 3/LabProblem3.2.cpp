#include <iostream>

using namespace std;

int main() {
    // Variable Declarations
    double integer1;
    double integer2;

    // Input
    cout << "Enter integer 1: ";
    cin >> integer1;
    cout << "Enter integer 2: ";
    cin >> integer2;

    // Output
    cout << "Sum is " << integer1 + integer2 << endl;
    cout << "Difference is " << integer1 - integer2 << endl;
    cout << "Product is " << integer1 * integer2 << endl;
    cout << "Average is " << (integer1 + integer2) / 2 << endl;
    return 0;
}