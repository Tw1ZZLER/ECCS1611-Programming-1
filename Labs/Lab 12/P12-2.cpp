#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void pressEnterToContinue();

int main() {
    string datafile;
    cout << "input file: ";
    getline(cin, datafile);
    ifstream file(datafile);
    if (!file) {
        cout << "Unable to open file";
        return 1;
    }

    string word;
    int wordCount = 0;
    int charCount = 0;

    while (file >> word) {
        wordCount++;
        for (char& c : word) {
            if (!isspace(c)) {
                charCount++;
            }
        }
    }

    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;

    pressEnterToContinue();
    file.close();
    return 0;
}
void pressEnterToContinue() {
	cout << "\nPress enter to continue... \n";
	cin.clear();
	while (cin.get() != '\n') continue;
}