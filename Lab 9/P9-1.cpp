#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    const int ARRAY_SIZE = 10;
    int randoms[ARRAY_SIZE]; 

    srand(time(0));

    for(int i = 0; i < ARRAY_SIZE; i++) {
        randoms[i] = rand() % 9000 + 1000;
    }

    cout << "The random integers: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << randoms[i] << " ";
    }
    cout << endl << "Even indices: ";
    for(int i = 0; i < ARRAY_SIZE / 2; i++) {
        cout << randoms[i * 2] << " ";
    }
    cout << endl << "Even values: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if (randoms[i] % 2 == 0) cout << randoms[i] << " ";
    }
    cout << endl << "Reversed order: ";
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << randoms[(ARRAY_SIZE - 1) - i] << " ";
    }
    cout << endl << "First and last: " << randoms[0] << " " << randoms[ARRAY_SIZE - 1] << endl; 
    cout << "Press any key to continue . . ." << endl;
}
