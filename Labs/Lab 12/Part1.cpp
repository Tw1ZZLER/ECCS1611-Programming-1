#include <iostream>
#include <fstream>
using namespace std;

void pressEnterToContinue();
bool readFromFile(string filename);

int main() {
    string datafile;
    cout << "Lab 12 Intro to Text Files!\n";
    cout << "Enter filename: ";
    getline(cin, datafile);
    bool status = readFromFile(datafile);
    if(status) cout << "Success!\n";
    else       cout << "failure. :(\n)";
    pressEnterToContinue();

}
void pressEnterToContinue() {
    cout << "\nPress enter to continue... \n";
    cin.clear();
    while (cin.get() != '\n') continue;
}
bool readFromFile(string filename) {
    ifstream inFile;
    string movieTitle;
    int year;
    inFile.open(filename);

    if(inFile.fail()) {
        cout << "read error - sorry\n";
        return false;
    }

    // if here then read in data until we're done
    while(true) {
        inFile >> movieTitle >> year;
        if(inFile.fail()) break;

        cout << movieTitle << ": " << year << endl;
    }

    inFile.close();
    return true;    
}