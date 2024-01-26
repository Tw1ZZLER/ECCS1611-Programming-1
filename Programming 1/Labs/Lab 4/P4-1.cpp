#include <iostream>

using namespace std;

int main() {
    // Variable Declaration
    int temperature;
    char temperatureScale;

    // Input
    cout << "Please enter temperature value: ";
    cin >> temperature >> temperatureScale;

    // If Celsius Scale
    if(temperatureScale == 'C') {
        if(temperature < 0) cout << "Water is a solid at this temperature.";
        else if (temperature == 0) cout << "Water is both a solid and a liquid at this temperature.";
        else if (temperature > 100) cout << "Water is a gas at this temperature.";
        else if (temperature == 100) cout << "Water is both a gas and a liquid at this temperature.";
        else cout << "Water is a liquid at this temperature";
    }
    // If Fahreinheit Scale
    else if(temperatureScale == 'F'){
        if(temperature < 32) cout << "Water is a solid at this temperature.";
        else if (temperature == 32) cout << "Water is both a solid and a liquid at this temperature.";
        else if (temperature > 212) cout << "Water is a gas at this temperature.";
        else if (temperature == 212) cout << "Water is both a gas and a liquid at this temperature.";
        else cout << "Water is a liquid at this temperature";
    }
    // Run for any other letter
    else cout << "Sorry, but the temperature scale you entered either doesn't exist or is not supported.";
}