#include <iostream>
using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main () {
    const int DICE_ROLLS = 20;
    int roll_values[DICE_ROLLS];

    srand(time(0));

    for(int i = 0; i < DICE_ROLLS; i++) {
        roll_values[i] = (rand() % 6) + 1;
    }
    if(hasRun(roll_values, DICE_ROLLS)) {
        cout << "has run: ";
        displayRun(roll_values, DICE_ROLLS);
    }
    else {
        cout << "no run: ";
        for(int i = 1; i < DICE_ROLLS; i++) {
            cout << roll_values[i] << " ";
        }
    } 
}
void displayRun(int values[], int size) {
    for(int i = 0; i < size; i++) {
        if(values[i] == values[i + 1] && values[i] == values[i - 1]) cout << values[i] << " ";
        else if(values[i] == values[i + 1]) cout << "(" << values[i] << " ";
        else if(values[i] == values[i - 1]) cout << values[i] << ") ";
        else cout << values[i] << " ";
    }
}
bool hasRun(int values[], int size) {
    for(int i = 1; i < size; i++) {
        if(values[i] == values[i - 1]) return true;
    }
    return false;
}
