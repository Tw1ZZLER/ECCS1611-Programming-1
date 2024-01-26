#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Variables
    int xCoord = 0;
    int yCoord = 0;
    int direction;
    int minutes;
    double expectedDistance;
    double averageDistance = 0;

    // Get Input
    cout << "Enter number of minutes for each drunkard to stagger: ";
    cin >> minutes;

    // Calculate Expected Distance
    expectedDistance = sqrt((minutes * 60) * ((4 + 4 * sqrt(2)) / 9));
    cout << "Expected distance: " << expectedDistance << endl;

    // Seed Random Function
    srand(time(0));
    
    // Iteration for Each Drunkard
    for(int i = 1; i <= 10000; i++) {
        // Iteration for Each Second
        for (int drunkardTime = 0; drunkardTime <= minutes * 60; drunkardTime++) {
            // Get 9 possibilities
            direction = rand() % 9;
            // Check each possibility and update accordingly
            switch (direction) {
                case 0: break;
                case 1: yCoord += 1; break;
                case 2: xCoord += 1; break;
                case 3: yCoord -= 1; break;
                case 4: xCoord -= 1; break;
                case 5: xCoord += 1; yCoord += 1; break;
                case 6: xCoord += 1; yCoord -= 1; break;
                case 7: xCoord -= 1; yCoord -= 1; break;
                case 8: xCoord -= 1; yCoord += 1; break;
            }
        }
        averageDistance += sqrt(((0 - xCoord) * (0 - xCoord)) + ((0 - yCoord) * (0 - yCoord)));
        xCoord = 0;
        yCoord = 0;
    }
    // Calculate Average Distance
    averageDistance /= 10000;
    cout << "Average distance: " << averageDistance << endl;
}