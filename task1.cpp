/*#include <iostream>
using namespace std;

const int STUDENTS = 10;
const int SUBJECTS = 5;

void inputMarks(int marks[STUDENTS][SUBJECTS]);
void calculateResults(int marks[STUDENTS][SUBJECTS], int total[], float average[]);
void displayGrades(float average[]);
void findTopScorer(float average[]);

int main() {
    int marks[STUDENTS][SUBJECTS];
    int total[STUDENTS];
    float average[STUDENTS];

 
    inputMarks(marks);

   
    calculateResults(marks, total, average);


    displayGrades(average);


    findTopScorer(average);

    return 0;
}

void inputMarks(int marks[STUDENTS][SUBJECTS]) {
    cout << "Enter marks for " << STUDENTS << " students in " << SUBJECTS << " subjects:\n";
    for (int i = 0; i < STUDENTS; ++i) {
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < SUBJECTS; ++j) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }
}

void calculateResults(int marks[STUDENTS][SUBJECTS], int total[], float average[]) {
    for (int i = 0; i < STUDENTS; ++i) {
        total[i] = 0;
        for (int j = 0; j < SUBJECTS; ++j) {
            total[i] += marks[i][j];
        }
        average[i] = (float)total[i] / SUBJECTS;
    }
}

void displayGrades(float average[]) {
    cout << "\nStudent Grades:\n";
    for (int i = 0; i < STUDENTS; ++i) {
        char grade;
        if (average[i] >= 90)
            grade = 'A';
        else if (average[i] >= 75)
            grade = 'B';
        else if (average[i] >= 50)
            grade = 'C';
        else
            grade = 'F';

        int intPart = (int)average[i];
        int decimalPart = (int)((average[i] - intPart) * 10);

        cout << "Student " << i + 1 << " - Average: " << intPart << "." << decimalPart
            << " - Grade: " << grade << endl;
    }
}

void findTopScorer(float average[]) {
    int topIndex = 0;
    for (int i = 1; i < STUDENTS; ++i) {
        if (average[i] > average[topIndex]) {
            topIndex = i;
        }
    }

    int intPart = (int)average[topIndex];
    int decimalPart = (int)((average[topIndex] - intPart) * 10);

    cout << "\nTop Scorer: Student " << topIndex + 1
        << " with average score of " << intPart << "." << decimalPart << endl;
}*/