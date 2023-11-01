// conversion.cpp – John K. Estell – 25 August 2022
// conversion.cpp - <Corbin Hibler> - <24 August 2023>
// Program will accept input in the form: number letter (e.g. 32 F)
// and will convert the specified temperature from Fahrenheit to Celsius,
// or vice versa, depending on input (either C or F).

#include <iostream> // import library that allows us to use cin and cout

using namespace std; // considered "magic" until later...

const char FAHRENHEIT = 'F';
const char CELSIUS = 'C';

int main( void ) {
    // enter "magic formula" for formatting floating-point output values
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint );
    cout.precision( 1 );

    // variable declarations
    double inputTemperature;
    double convertedTemperature;
    char temperatureScale;
    char convertedScale;

    // get the temperature to be converted
    cout << "Please enter temperature - indicate scale with C or F: ";
    cin >> inputTemperature >> temperatureScale;

    // determine if legal scale was entered
    if ( temperatureScale != FAHRENHEIT && temperatureScale != CELSIUS ) {
        // bailing out of program due to illegal input
        cout << "Sorry - temperature scale must be either C or F.\n";
        cout << "Press 'Enter' to exit...";
        cin.ignore();
        cin.get();
        return 1;
    }

    // determine what conversion formula to use
    if ( temperatureScale == FAHRENHEIT ) {
        convertedTemperature = 5.0 / 9.0 * (inputTemperature - 32.0);
        convertedScale = CELSIUS;
    }
    else { // input was in Celsius
        convertedTemperature = 9.0 / 5.0 * inputTemperature + 32.0;
        convertedScale = FAHRENHEIT;
    }

    // present result and terminate program execution
    cout << convertedTemperature << " " << convertedScale << endl;
    cout << "Press 'Enter' to continue...";
    cin.ignore();
    cin.get();
    return 0;
}