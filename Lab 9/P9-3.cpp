#include <iostream>
using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main () {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {1,2,3,5,5,6,7,7,7,10};
    displayRun(array, ARRAY_SIZE);
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
    return true;
}
