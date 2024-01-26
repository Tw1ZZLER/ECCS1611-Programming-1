#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
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
                case 'a': vars[0]++; break;
                case 'b': vars[1]++; break;
                case 'c': vars[2]++; break;
                case 'd': vars[3]++; break;
                case 'e': vars[4]++; break;
                case 'f': vars[5]++; break;
                case 'g': vars[6]++; break;
                case 'h': vars[7]++; break;
                case 'i': vars[8]++; break;
                case 'j': vars[9]++; break;
                case 'k': vars[10]++; break;
                case 'l': vars[11]++; break;
                case 'm': vars[12]++; break;
                case 'n': vars[13]++; break;
                case 'o': vars[14]++; break;
                case 'p': vars[15]++; break;
                case 'q': vars[16]++; break;
                case 'r': vars[17]++; break;
                case 's': vars[18]++; break;
                case 't': vars[19]++; break;
                case 'u': vars[20]++; break;
                case 'v': vars[21]++; break;
                case 'w': vars[22]++; break;
                case 'x': vars[23]++; break;
                case 'y': vars[24]++; break;
                case 'z': vars[25]++; break;
                case 'A': vars[0]++; break;
                case 'B': vars[1]++; break;
                case 'C': vars[2]++; break;
                case 'D': vars[3]++; break;
                case 'E': vars[4]++; break;
                case 'F': vars[5]++; break;
                case 'G': vars[6]++; break;
                case 'H': vars[7]++; break;
                case 'I': vars[8]++; break;
                case 'J': vars[9]++; break;
                case 'K': vars[10]++; break;
                case 'L': vars[11]++; break;
                case 'M': vars[12]++; break;
                case 'N': vars[13]++; break;
                case 'O': vars[14]++; break;
                case 'P': vars[15]++; break;
                case 'Q': vars[16]++; break;
                case 'R': vars[17]++; break;
                case 'S': vars[18]++; break;
                case 'T': vars[19]++; break;
                case 'U': vars[20]++; break;
                case 'V': vars[21]++; break;
                case 'W': vars[22]++; break;
                case 'X': vars[23]++; break;
                case 'Y': vars[24]++; break;
                case 'Z': vars[25]++; break;
                default: charCount--; break;
            }
        }
    }

    cout << "Total number of letters: " << charCount << endl;
    cout << "Frequency:\n";

    for(int i = 0; i < SIZE; i++) {
        cout << "'" << static_cast<char>('A' + i) << "': " << fixed << setprecision(3) << (vars[i] / double(charCount)) * 100 << endl;
    }
    return 0;
}