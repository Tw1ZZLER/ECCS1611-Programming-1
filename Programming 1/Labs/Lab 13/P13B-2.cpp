#include <iostream>
using namespace std;

bool isLeapYear(int year);
/**
   isLeapYear - determines whether a given year is a leap year
                under the Gregorian calendar. 
   @param year the year; expected to be >= 1582
   @return true if year is a leap year; false otherwise
*/

int daysInMonth(int month, int year);
/**
    daysInMonth – determines the number of days in a specified month
    @param month the month; expected to be in the range [1..12]
    @param year the year; expected to be >= 1582
    @return either 28, 29, 30, or 31, based on month and (leap) year
*/

int main() {
    int year = 0;
    int month = 0;
    string monthName = "";
    while(true) {
        cout << "Enter a month and a year or Q to quit: ";
        cin >> month >> year;
        if(cin.fail()) break;

        switch(month) {
            case 1: monthName = "January"; break;
            case 2: monthName = "February"; break;
            case 3: monthName = "March"; break;
            case 4: monthName = "April"; break;
            case 5: monthName = "May"; break;
            case 6: monthName = "June"; break;
            case 7: monthName = "July"; break;
            case 8: monthName = "August"; break;
            case 9: monthName = "September"; break;
            case 10: monthName = "October"; break;
            case 11: monthName = "November"; break;
            case 12: monthName = "December"; break;
        }
        cout << monthName << " " << year << " has " << daysInMonth(month, year) << " days." << endl;
    }
}

bool isLeapYear(int year) {
    if((year % 4 == 0) && !(year % 100 == 0)) return true;
    else if((year % 100 == 0) && (year % 400 == 0)) return true;
    else return false;
}
int daysInMonth(int month, int year) {
    if(month == 2) { // Check for February
        if(isLeapYear(year)) return 29;
        else return 28;
    }
    else { // All other months
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
        }
    }
    return 31;
}