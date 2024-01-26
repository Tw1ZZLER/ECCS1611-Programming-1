#include <iostream>
#include <string>
using namespace std;

int highest_score(int array[], int number_students);
int lowest_score(int array[], int number_students);
double average_score(int array[], int number_students);

int main() {
    string epic_string = "";
    int number_students = 0;

    cout << "Number of students: ";
    cin >> number_students;

    int student_scores[number_students];

    for(int i = 0; i < number_students; i++) {
        int student_score = 0;
        cout << "Enter score #" << i + 1 << ": ";
        cin >> student_score;
        student_scores[i] = student_score;
    }

    cout << "high = " << highest_score(student_scores, number_students);
    cout << " low = " << lowest_score(student_scores, number_students);
    cout << " average = " << average_score(student_scores, number_students);

}
int highest_score(int array[], int number_students) {
    int highest_score = 0;
    for(int i = 0; i < number_students; i++) {
        if(array[i] > highest_score) highest_score = array[i];
    }
    return highest_score;
}
int lowest_score(int array[], int number_students) {
    int lowest_score = 100;
    for(int i = 0; i < number_students; i++) {
        if(array[i] < lowest_score) lowest_score = array[i];
    }
    return lowest_score;
}
double average_score(int array[], int number_students) {
    double average_score = 0;
    for(int i = 0; i < number_students; i++) {
        average_score += array[i];
    }
    average_score /= number_students;
    return average_score;
}