#include <iostream>
#include <string>
using namespace std;

int romanCharValue(string str);

int main() {
    string input = "";

    while (true) {
        cout << "Enter a line or Q to quit: ";
        getline(cin, input);
        if(input == "Q") break;
        cout << "Word count: " << romanCharValue(input) << endl;
    }
}
int romanCharValue(string str) {
    int words = 1;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ' && str[i-1] != ' ') words++;
    }
    return words;
}
