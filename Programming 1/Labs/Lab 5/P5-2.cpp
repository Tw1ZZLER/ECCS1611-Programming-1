#include <iostream>

using namespace std;

int main() {
    // Variable Declaration
    int number = 0;
    bool done = false;
    int largestNumber = 0;
    int smallestNumber = 100000;
    int evenNumberCount = 0;
    int oddNumberCount = 0;
    
    // Get and process numbers entered
    while(done == false) {
        cout << "Enter number or Q to quit: ";
        cin >> number;
        if (cin.fail() || number >= 100000 || number < 0) {
            done = true;
        }
        else {
            if (number > largestNumber) largestNumber = number;
            if (number < smallestNumber) smallestNumber = number;
            if (number % 2 == 0) evenNumberCount++;
            if (number % 2 == 1) oddNumberCount++;
        }
    }
    cout << "Largest value: " << largestNumber << " Smallest value: " << smallestNumber << endl;
    cout << "Even number count: " << evenNumberCount << " Odd number count: " << oddNumberCount << endl;
}