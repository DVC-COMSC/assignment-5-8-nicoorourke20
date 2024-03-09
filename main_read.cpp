#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("students.txt");

    if (!inFile) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    int numStudents;
    inFile >> numStudents;
    cout << "Number of students: " << numStudents << endl;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        int score1, score2;

        inFile >> name >> score1 >> score2;
        int sum = score1 + score2;
        float average = sum / 2.0f;

        cout << "Student Name: " << name << "\tscore1: " << score1 << "\tscore2: " << score2
             << "\tSum: " << sum << "\tAvg: " << average << endl;
    }
    inFile.close();
    return 0;
}
