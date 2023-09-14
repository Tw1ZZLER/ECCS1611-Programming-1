#include <iostream>

using namespace std;

int main(){
    // Variable Declaration
    float number1;
    float number2;
    float number3;
    float largestNumber;

    // Input
    cout << "Please enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    // Test for Largest Number
    if(number1 > number2) {
        if (number1 > number3) 
            largestNumber = number1;
    }
    else if(number2 > number1){
        if (number2 > number3)
            largestNumber = number2;
    }
    else largestNumber = number3;

    // Output
    cout << "The largest number is " << largestNumber << ".";
}