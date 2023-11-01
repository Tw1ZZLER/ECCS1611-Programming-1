#include <iostream> 
#include <string> 
using namespace std;

int main() {
	const int STUDENTS = 4;
	const int QUIZZES = 2;
	
	int scores[STUDENTS][QUIZZES];
	string names[STUDENTS];

	for(int i = 0; i < STUDENTS; i++) {
		cout << "Enter name of student #" << i + 1 << ": ";
		cin >> names[i];
	}
	for (int quiz = 0; quiz < QUIZZES; quiz++) {
		cout << "Enter scores for quiz #" << quiz + 1 << ":\n";
		for (int st = 0; st < STUDENTS; st++) {
			cout << "Enter score for " << names[st] << ": ";
			cin >> scores[st][quiz];
		}
	}

	for(int s = 0; s < STUDENTS; s++) {
		int total = 0;
		for (int q = 0; q < QUIZZES; q++) {
			total += scores[s][q];
		}
		cout << names[s] << " total quiz score is " << total << endl;
	}
}