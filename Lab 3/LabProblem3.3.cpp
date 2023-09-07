#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable Declarations
    int totalEgg;

    // Input
    cout << "Good Morning Mrs. Tweedy. This is Egg-Bot 9000." << endl;
    cout << "Please write how many eggs your chickens have produced on this beautiful day: ";
    cin >> totalEgg;

    // Output
    cout << "Cartons of eggs needed: " << totalEgg / 12 << endl;
    cout << "Eggs left over: " << totalEgg % 12 << endl;
}