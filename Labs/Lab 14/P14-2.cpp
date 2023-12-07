#include <iostream>
using namespace std;


int charcnt(char* ptr, char c);
int repeat (char* ptr);
void reverse(char* ptr);

int main() {
    char cstring [100] = "";
    char c = '\0';

    cout << "Enter a string: ";
    cin.getline(cstring, 100);
    cout << "Enter a character: ";
    cin.get(c);
    
    cout << "The character '" << c << "' appears " << charcnt(cstring, c) << " times in the string." << endl;
    cout << "There are " << repeat(cstring) << " repeated characters in the string." << endl;
    cout << "The reverse string is: ";
    reverse(cstring);
    
}

int charcnt(char* ptr, char c) {
    int charCount = 0;
    for(int i = 0; ptr[i] != '\0'; i++) {
        if(ptr[i] == c) charCount++;
    }
    return charCount;
}
int repeat (char* ptr) {
    int repeatCount = 0;
    for(int i = 0; ptr[i] != '\0'; i++) {
        if(ptr[i] == ptr[i + 1])
            repeatCount++;
    }
    return repeatCount;
}
void reverse(char* ptr) {
    string reversedString;
    int size = 0;
    for(int i = 0; ptr[i] != '\0'; i++) {
        size++;
    }
    for(int i = size; i >= 0; i--) {
        reversedString += ptr[i];
    }
    cout << reversedString;
}