#include <iostream>

using namespace std;

int main() {
    // Variable Definition
    const double POST_COST = 10.98; // In dollars
    const double RAIL_COST = 9.97; // In dollars
    const int RAIL_LENGTH = 10; // In feet
    int fenceLength; // In feet
    double totalCost; // In dollars

    // Input
    cout << "Enter length of fence here: ";
    cin >> fenceLength;

    // Math
    totalCost = (fenceLength / RAIL_LENGTH) * (POST_COST + 3 * RAIL_COST) + POST_COST;

    // Output
    cout << "Total cost of fence is: " << totalCost;
    return 0;
}