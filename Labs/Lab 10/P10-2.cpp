#include <iostream>
#include <string>
using namespace std;

int count_words(string str);

int main() {
    string epic_string = "";
    cout << "Enter a string: ";
    getline(cin, epic_string);
    cout << "Count of all words: " << count_words(epic_string);
}
int count_words(string str) {
    int words = 1;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ' && str[i-1] != ' ') words++;
    }
    return words;
}