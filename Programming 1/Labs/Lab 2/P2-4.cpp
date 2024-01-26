// This program prints the area, perimeter, and length of a rectangle's diagonal
// Given the length and width of a rectangle.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    // Variable Declaration
    double rectangleLength;
    double rectangleWidth;
    double rectangleArea;
    double rectanglePerimeter;
    double rectangleDiagonal;

    // Length / Width Input
    cout << "Enter length: ";
    cin >> rectangleLength;
    cout << "Enter width: ";
    cin >> rectangleWidth;

    // Finding Area, Perimeter, Diagonal
    rectangleArea = rectangleLength * rectangleWidth;
    rectanglePerimeter = rectangleLength * 2 + rectangleWidth * 2;
    rectangleDiagonal = sqrt(rectangleLength * rectangleLength + rectangleWidth * rectangleWidth);

    // Output
    cout << "Area: " << rectangleArea << endl;
    cout << "Perimeter: " << rectanglePerimeter << endl;
    cout << "Diagonal: " << rectangleDiagonal << endl;
    return 0;
}
