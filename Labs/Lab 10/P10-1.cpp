#include <iostream>
#include <string>
using namespace std;

int count_words(string str);

int main() {
    string epic_string = "";
    cout << "Enter a string: ";
    getline(cin, epic_string);
    cout << "Count of all letters: " << count_words(epic_string);
}
int count_words(string str) {
    int count_letters = 0;
    for(int i = 0; i < str.length(); i++) {
        char letter = str[i];
        if((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
            count_letters++;
    }
    return count_letters;
}