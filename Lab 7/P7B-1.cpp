#include <iostream>

using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);

int main() {
    double x = 0;
    double y = 0;
    double z = 0;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Smallest value is " << smallest(x,y,z) << endl;
    cout << "Average is " << average(x,y,z) << endl;
}
double smallest(double x, double y, double z) {
    if (x < y && y < z) return x;
    if (y < x && x < z) return y;
    else return z;
}
double average(double x, double y, double z) {
    return ((x + y + z) / 3);
}