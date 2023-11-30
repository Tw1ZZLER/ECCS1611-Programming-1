#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 26;

int main() {
    string datafile;
    cout << "Enter filename: ";
    getline(cin, datafile);
    ifstream file(datafile);
    if(!file) {
        cout << "Unable to open file.";
        return 1;
    }
    cout << endl;

    string word;
    int charCount = 0;
    int vars[SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    while(file >> word) {
        for(char& c : word) {
            charCount++;
            switch(c) {
                case 'a': vars[0]++;
                case 'b': vars[1]++;
                case 'c': vars[2]++;
                case 'd': vars[3]++;
                case 'e': vars[4]++;
                case 'f': vars[5]++;
                case 'g': vars[6]++;
                case 'h': vars[7]++;
                case 'i': vars[8]++;
                case 'j': vars[9]++;
                case 'k': vars[10]++;
                case 'l': vars[11]++;
                case 'm': vars[12]++;
                case 'n': vars[13]++;
                case 'o': vars[14]++;
                case 'p': vars[15]++;
                case 'q': vars[16]++;
                case 'r': vars[17]++;
                case 's': vars[18]++;
                case 't': vars[19]++;
                case 'u': vars[20]++;
                case 'v': vars[21]++;
                case 'w': vars[22]++;
                case 'x': vars[23]++;
                case 'y': vars[24]++;
                case 'z': vars[25]++;
                case 'A': vars[0]++;
                case 'B': vars[1]++;
                case 'C': vars[2]++;
                case 'D': vars[3]++;
                case 'E': vars[4]++;
                case 'F': vars[5]++;
                case 'G': vars[6]++;
                case 'H': vars[7]++;
                case 'I': vars[8]++;
                case 'J': vars[9]++;
                case 'K': vars[10]++;
                case 'L': vars[11]++;
                case 'M': vars[12]++;
                case 'N': vars[13]++;
                case 'O': vars[14]++;
                case 'P': vars[15]++;
                case 'Q': vars[16]++;
                case 'R': vars[17]++;
                case 'S': vars[18]++;
                case 'T': vars[19]++;
                case 'U': vars[20]++;
                case 'V': vars[21]++;
                case 'W': vars[22]++;
                case 'X': vars[23]++;
                case 'Y': vars[24]++;
                case 'Z': vars[25]++;
            }
        }
    }

    cout << "Total number of letters: " << charCount << endl;
    cout << "Frequency:\n";

    for(int i = 0; i < SIZE; i++) {
        cout << "'" << static_cast<char>('A' + i) << "': " << (vars[i] / charCount) << endl;
    }

    return 0;
}