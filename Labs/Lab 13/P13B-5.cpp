#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <fstream>
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

int dayOfWeek(int month, int day, int year);
/**
    dayOfWeek - Computes the weekday of a given date.
    @param year the year
    @param month the month (1 = January ... 12 = December)
    @param day the day of the month
    @return the weekday (0 = Saturday ... 6 = Friday)
*/

int main() {
    int year = 0;
    int month = 0;
    string monthName = "";
    string dayName = "";

//                          Sa Fr Th We Tu Mo Su
// returned by DoW funct.:  00 01 02 03 04 05 06 
// character positions:     012345678901234567890123456789012345678
    string calendar[6] = { "                   1  2  3  4  5  6  7 ",
                           " 2  3  4  5  6  7  8  9 10 11 12 13 14 ",
                           " 9 10 11 12 13 14 15 16 17 18 19 20 21 ",
                           "16 17 18 19 20 21 22 23 24 25 26 27 28 ",
                           "23 24 25 26 27 28 29 30 31             ",
                           "30 31                                  " };

    while(true) {
        cout << "Enter a month and a year or Q to quit: ";
        cin >> monthName;
        if(monthName == "Q") break;
        cin >> year;
        if(cin.fail()) break;

        if(monthName == "January")   month = 1;
        if(monthName == "February")  month = 2;
        if(monthName == "March")     month = 3;
        if(monthName == "April")     month = 4;
        if(monthName == "May")       month = 5;
        if(monthName == "June")      month = 6;
        if(monthName == "July")      month = 7;
        if(monthName == "August")    month = 8;
        if(monthName == "September") month = 9;
        if(monthName == "October")   month = 10;
        if(monthName == "November")  month = 11;
        if(monthName == "December")  month = 12;
        
        int firstDay = dayOfWeek(month, 1, year);
        int days = daysInMonth(month, year);
        int currentDay = 1;

        cout << endl << monthName << " " << year << endl;
        cout << "Sa Fr Th We Tu Mo Su" << endl;
        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < 7; j++) {
                if(i == 0 && j < firstDay - 1) { // If it's the first week and we're before the first day of the month
                    cout << "   "; // Print empty space
                } else if(currentDay <= days) { // If we're within the valid range of days for the month
                    cout << setw(2) << currentDay << " ";
                    currentDay++;
                }
            }
            cout << endl;
        }

        // Get datafile information, create ofstream variable
        string datafile;
        cout << "Output file: ";
        cin >> datafile;
        ofstream file(datafile);
        if(!file) {
            cout << "Unable to open or create file.";
            return 1;
        }

        // Do the same thing as cout in the previous block, but saved to text file!
        file << monthName << " " << year << endl;
        file << "Sa Fr Th We Tu Mo Su" << endl;
        currentDay = 1;
        for(int i = 0; i < 6; i++) {
            for(int j = 0; j < 7; j++) {
                if(i == 0 && j < firstDay - 1) { // If it's the first week and we're before the first day of the month
                    file << "   "; // Print empty space
                } else if(currentDay <= days) { // If we're within the valid range of days for the month
                    file << setw(2) << currentDay << " ";
                    currentDay++;
                }
            }
            file << endl;
        }
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

int dayOfWeek(int month, int day, int year) {
    int modMonth = month;
    int modYear = year;
    if(month == 1 || month == 2) {
        modMonth += 12;
        modYear--;
    }
    return (day + (((modMonth + 1) * 26) / 10) + modYear + (modYear / 4) + 6 * (modYear / 100) + (modYear / 400)) % 7;
}