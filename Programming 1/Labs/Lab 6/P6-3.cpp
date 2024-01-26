#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    bool done = false;
    double x = 0;
    double sumX = 0;
    double sumXSquared = 0;
    int n = 0;
    double average = 0;
    double stdDeviation = 0;

    // Input Loop
    cout << "Enter numbers - Q to quit: ";
    while (done == false) {
        cin >> x;
        if (cin.fail()) done = true; 
        else { 
        sumXSquared += (x * x);
        sumX += x;
        n++;  
        } 
    }
    // Calculate average and standard deviation
    average = sumX / n;
    stdDeviation = sqrt((sumXSquared - (((sumX * sumX)/n)))/(n - 1));

    if (n == 0) cout << "No data to process - exiting..." << endl;
    else cout << "n = " << n << ", average = " << average << ", standard deviation = " << stdDeviation << endl;
    cout << "Press any key to continue . . . ";
}