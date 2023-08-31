// Libraries
#include <iostream>
#include <string>

using namespace std;

int main(){
    // Hal's Question
    cout << "Hello, my name is Hal!" << endl;
    cout << "What is your name? ";

    // Human Giving Name
    string user_name;
    getline(cin, user_name);

    // Hal Saying Hello
    cout << "Hello, " << user_name << ". I am glad to meet you!";
    return 0;
}