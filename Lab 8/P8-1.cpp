#include <iostream>
#include <string>
using namespace std;

int countCharacter(string line);
int countVowel(string line);

int main() {
    string line = "";

}
int countCharacter(string line) {
    return line.length();
}
int countVowel(string line) {
    int vowels = 0;
    for(int i = 0; i < line.length(); ++i) {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U') {
            ++vowels;
        }
    }
    return vowels;
}