#include <iostream>
using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjacentDuplicates(int array[], int size);
bool hasDuplicates(int array[], int size);

int main() {
    const int ARRAY_SIZE = 6;
    int array[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter integer #" << i << ": ";
        cin >> array[i];
    }
    if(isSortedIncreasing(array, ARRAY_SIZE)) cout << "The data is increasing.\n";
    else cout << "The data is not increasing.\n";
    if(isSortedDecreasing(array, ARRAY_SIZE)) cout << "The data is decreasing.\n";
    else cout << "The data is not decreasing.\n";
    if(hasAdjacentDuplicates(array, ARRAY_SIZE)) cout << "The data has adjacent duplicates.\n";
    else cout << "The data does not have adjacent duplicates.\n";
    if(hasDuplicates(array, ARRAY_SIZE)) cout << "The data has duplicates.\n";
    else cout << "The data does not have duplicates.\n";
    cout << "Press any key to continue . . .\n";
}
bool isSortedIncreasing(int array[], int size) {
    for(int i = 1; i < size; i++) {
        if(array[i] < array[i - 1]) return false;
    }
    return true;
}
bool isSortedDecreasing(int array[], int size) {
    for(int i = 1; i < size; i++) {
        if(array[i] > array[i - 1]) return false;
    }
    return true;
}
bool hasAdjacentDuplicates(int array[], int size) {
    for(int i = 1; i < size; i++) {
        if(array[i] == array[i - 1]) return true;
    }
    return false;
}
bool hasDuplicates(int array[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
                if(array[i] == array[j]) return true;
        }
    }
    return false;
}