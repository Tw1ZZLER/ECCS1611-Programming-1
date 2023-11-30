#include <iostream>
using namespace std;

bool isLeapYear(int year);
/* isLeapYear - determines whether a given year is a leap year
                under the Gregorian calendar. 
   @param year the year; expected to be >= 1582
   @return true if year is a leap year; false otherwise
*/

int main() {
    int year = 0;
        while(true) {
        cout << "Enter a year or Q to quit: ";
        cin >> year;
        if(cin.fail()) break;

        cout << year;
        if(isLeapYear(year)) cout << " is a leap year.";
        else cout << " is not a leap year.";
        cout << endl;
    }
}
bool isLeapYear(int year) {
    if((year % 4 == 0) && !(year % 100 == 0)) return true;
    else if((year % 100 == 0) && (year % 400 == 0)) return true;
    else return false;
}