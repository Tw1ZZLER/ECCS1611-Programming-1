#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    for (i = 0; i < 7; i++) {
        for (j = 7; j > i; j--) {
        cout << "+";
        }
    cout << endl;
    }
}
