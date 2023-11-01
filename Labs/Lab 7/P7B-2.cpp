#include <iostream>

using namespace std;

bool all_the_same(int x, int y, int z);
bool all_different(int x, int y, int z);
bool sorted(int x, int y, int z);

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    while(true) {
        cout << "Enter three numbers or Q to quit: ";
        cin >> x;
        if (cin.fail()) break;
        cin >> y >> z;

        if(all_the_same(x,y,z)) cout << "Numbers are all the same." << endl;
        else cout << "Numbers are not all the same." << endl;
        if (all_different(x,y,z)) cout << "Numbers are all different." << endl;
        else cout << "Numbers are not all different." << endl;
        if (sorted(x,y,z)) cout << "Numbers are sorted." << endl;
        else cout << "Numbers are not sorted." << endl;
    }
}
bool all_the_same(int x, int y, int z) {
    if (x == y && y == z) return true;
    else return false;
}
bool all_different(int x, int y, int z) {
    if (x != y && y != z) return true;
    else return false;
}
bool sorted(int x, int y, int z) {
    if (x <= y && y <= z) return true;
    else return false;
}