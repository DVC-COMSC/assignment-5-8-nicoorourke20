#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("students.txt");

    if (!outFile) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    outFile << numStudents << endl;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        int score1, score2;

        cout << "Enter student name, score1, and score2 for student " << i + 1 << ": ";
        cin >> name >> score1 >> score2;

        outFile << name << " " << score1 << " " << score2 << endl;
    }
    outFile.close();
    return 0;
}
