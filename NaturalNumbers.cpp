#include <iostream>
using namespace std;

const int NUM_OF_TERMS = 10;

int main() {
    int input;
    int natural[NUM_OF_TERMS];

    for(int i = 0; i < NUM_OF_TERMS; i++) {
        natural[i] = (i + 1);
    }
    cout << "Enter number: ";
    cin >> input;
    cout << "Natural of " << input << " is " << natural[input];
}