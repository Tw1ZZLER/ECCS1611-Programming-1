#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> scores;
	
	while(true) {
		cout << "Enter score or Q to quit: ";
		int x;
		cin >> x;
		if (cin.fail()) break;
		scores.push_back(x);
	}
	for(int i = 0; i < scores.size(); i++) {
		cout << "Score #" << i + 1 << " is " << scores[i] << endl;
	}
}