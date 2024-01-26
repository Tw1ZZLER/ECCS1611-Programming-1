// command line arguments - featuring an array of pointers
// prog -v input.dat output.foo

#include <iostream>
using namespace std;

void fatalError(char *message, int errorCode);

int main(int argc, char *argv[]) {
    char option;
    char specifier;

    if (argc < 3)
        fatalError("Error: insufficient number of parameters - exiting..", 1);

    for(int i = 1; i < argc - 2; i++) {
        int length = 0;
        while (argv[i][length])
            length++;
        if(length < 2)
            fatalError("Error: missing option specification - exiting...", 4);

        option = argv[i][1];
        switch(option) {
            case 'f':
                if(length != 3)
                    fatalError("Error: unrecognized specifier - exiting...", 5);
                specifier = argv[i][2];
                switch(specifier) {
                    case 'h':
                        cout << "flip around horizontal axis.\n";
                        break;
                    case 'v':
                }
        }
    }
}