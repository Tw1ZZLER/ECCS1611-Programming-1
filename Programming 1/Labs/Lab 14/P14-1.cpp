#include <iostream>
using namespace std;

double average (double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main() {
    int arraySize = 0;

    cout << "Enter size of array: ";
    cin >> arraySize;
    double* arrayPointer = new double[arraySize];

    cout << "Enter 6 floating-point values: ";
    for(int i = 0; i < arraySize; i++)
        cin >> arrayPointer[i];

    cout << "Average is: " << average(arrayPointer, arraySize) << endl;

    int elementMax = -1;
    int elementMin = -1;
    for(int i = 0; i < arraySize; i++)
        if(arrayPointer[i] == *maximum(arrayPointer, arraySize))
            elementMax = i;
    for(int i = 0; i < arraySize; i++)
        if(arrayPointer[i] == *minimum(arrayPointer, arraySize))
            elementMin = i;

    cout << "Maximum value is element #" << elementMax << ": " << *maximum(arrayPointer, arraySize) << endl;
    cout << "Minimum value is element #" << elementMin << ": " << *minimum(arrayPointer, arraySize) << endl;

    delete[] arrayPointer;
}
double average (double* a, int size) {
    double average = 0;
    for(int i = 0; i < size; i++) {
        average += a[i];
    }
    average /= size;
    return average;
}
double* maximum(double* a, int size) {
    double max = a[0];
    double* maxPointer = &max;
    if(size == 0) return NULL;
    for(int i = 0; i < size; i++) {
        if(max < a[i])
            max = a[i];
    }
    return maxPointer;
}
double* minimum(double* a, int size) {
    double min = a[0];
    double* minPointer = &min;
    if(size == 0) return NULL;
    for(int i = 0; i < size; i++) {
        if(min > a[i])
            min = a[i];
    }
    return minPointer;
}