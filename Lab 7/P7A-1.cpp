#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int xCoord = 0;
    int yCoord = 0;
    int direction;

    srand(time(0));
    
    for(int i = 1; i <= 10; i++) {
        for (int drunkardTime = 0; drunkardTime <= 120; drunkardTime++) {
            direction = rand() % 9;
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
        cout << "Drunkard #" << i << ": finished at location (" << xCoord << ", " << yCoord << ")" << endl;
    }
}