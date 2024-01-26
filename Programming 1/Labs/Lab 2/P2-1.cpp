// Libraries
#include <iostream>
#include <string>

using namespace std;

int main(){
    // Hal's Question
    cout << "Hello, my name is Hal!" << endl;
    cout << "What would you like me to do? ";

    // Human Input
    string user_input;
    getline(cin, user_input);

    // Hal Ignoring Human
    cout << "I am sorry, I cannot do that.";
    return 0;
}