// OpenFileDemo.cpp - John K. Estell - 17 November 2019. Demonstration of opening a text file for input

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string   inFileName;     // name of text file to be opened
    ifstream inFile;         // input stream
    string   input;          // used to store each line of input read from the stream
    int      lineCount = 0;  // count the number of lines read in.

    // get the name of the text file to read
    cout << "Enter file name: ";
    getline(cin, inFileName);

    // open the file for input - bail if unsuccessful
    // note that older versions of C++ require filename conversion to C-string when calling open.
    inFile.open(inFileName);
    if(!inFile.is_open()) {
        cout << "File not found." << endl;
        return 1;
    }

    // if here then we have an input stream...
    // read one line at a time from the file until we reach the end of the file
    while(!inFile.eof()) {
        getline(inFile, input);
        cout << setw(3) << ++lineCount << ": " << input << endl;
    }

    // close the file and quit the program
    inFile.close();
    return 0;
}