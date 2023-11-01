// This program converts meters into inches, feet, and miles.

// Libraries
#include <iostream>
#include <string>

using namespace std;

int main(){
    // Variables
    double givenMeters;
    double outputInches;
    double outputFeet;
    double outputMiles;
    const double METER_INCH_RATIO = 39.3700787;
    const int INCH_FEET_RATIO = 12;
    const int FEET_MILE_RATIO = 5280;

    // Meters Input
    cout << "Enter measurement in meters: ";
    cin >> givenMeters;

    // Conversions
    outputInches = givenMeters * METER_INCH_RATIO;
    outputFeet = outputInches / INCH_FEET_RATIO;
    outputMiles = outputFeet / FEET_MILE_RATIO;

    // Output
    cout << "Converted to inches: " << outputInches << endl;
    cout << "Converted to feet: " << outputFeet << endl;
    cout << "Converted to miles: " << outputMiles;
    return 0;
}