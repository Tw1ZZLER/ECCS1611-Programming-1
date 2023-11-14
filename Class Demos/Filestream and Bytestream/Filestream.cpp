#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inputFile("/home/tw1zzler/Documents/GitHub/Programming-Coursework/Class Demos/Filestream and Bytestream/Amogus.txt");
    ofstream outputFile("/home/tw1zzler/Documents/GitHub/Programming-Coursework/Class Demos/Filestream and Bytestream/Sussy.txt");
    if (inputFile.is_open()) {
        string word,wordAtPosn;
        int countWord = 0;
        int countAllVowels = 0;
        char ch;

        while(!inputFile.eof()) {
            inputFile >> word;
            countWord++;
            if(outputFile.is_open())
                outputFile << setw(2) << countWord << ". " << left << setw(20) << word << right;

            int i = 0;
            int countVowels = 0;
            while(i < word.length()) {
                ch = tolower(word.at(i));
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    countAllVowels++;
                    countVowels++;
                }
                i++;
            }
            outputFile << " - No. of vowels: " << countVowels << endl;
        }
        inputFile.seekg(-13, ios::end);
        int posn = inputFile.tellg();
        inputFile >> wordAtPosn;
        cout << "Pointer position: " << posn << "\nWord at position " << wordAtPosn << endl;

        outputFile.seekp(-1,ios::end);
        outputFile << "\n\n Excerpts from the book - 20000 Leagues Under The Sea" << endl;

        inputFile.close();
        outputFile.close();

        cout << "No. of words: " << countWord;
        cout << " No. of vowels: " << countAllVowels;
    }
    else {
        cout << "Failed to open the File." << endl;
    }
}