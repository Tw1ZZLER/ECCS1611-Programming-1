#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
    string input = "";

    while (true) {
        cout << "Enter a line or Q to quit: ";
        getline(cin, input);
        if(input == "Q") break;
        cout << "Word count: " << countWords(input) << endl;
    }
}
int countWords(string str) {
    int words = 0;
    bool newWord = false;
    for(char c: str) {
        if(c != ' ') {
            newWord = true;
        }
        else newWord = false;
        if(newWord == true) words++;
    }
    return words;
}
