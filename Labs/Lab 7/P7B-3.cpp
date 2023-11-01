#include <iostream>

using namespace std;

int first_digit(int n);
int last_digit(int n);
int digits(int n);

int main() {
    int n = 0;

    while(true) {
        cout << "Enter number or Q to quit: ";
        cin >> n;
        if (cin.fail()) break;
        cout << "First digit: " << first_digit(n); 
        cout << " Last digit: " << last_digit(n); 
        cout << " Number of digits: " << digits(n) << endl;
    }
}
int first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}
int last_digit(int n) {
    n %= 10;
    return n;
}
int digits(int n) {
    int i = 1;
    for (i; n >= 10; i++) {
        n /= 10;
    }
    return i;
}