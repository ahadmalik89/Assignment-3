/*#include <iostream>
using namespace std;

const int STUDENTS = 6;
const int EXAMS = 5;

void inputScores(int scores[STUDENTS][EXAMS]) {
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Enter scores for Student " << i + 1 << ":\n";
        for (int j = 0; j < EXAMS; j++) {
            cin >> scores[i][j];
        }
    }
}

void calculateAverages(int scores[STUDENTS][EXAMS], float avg[STUDENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < EXAMS; j++) {
            sum += scores[i][j];
        }
        avg[i] = sum / 5.0f;
    }
}

int findTopStudent(float avg[STUDENTS]) {
    int topIndex = 0;
    for (int i = 1; i < STUDENTS; i++) {
        if (avg[i] > avg[topIndex]) {
            topIndex = i;
        }
    }
    return topIndex;
}

int countLowPerformers(int scores[STUDENTS][EXAMS]) {
    int count = 0;
    for (int i = 0; i < STUDENTS; i++) {
        int low = 0;
        for (int j = 0; j < EXAMS; j++) {
            if (scores[i][j] < 40) {
                low++;
            }
        }
        if (low >= 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int scores[STUDENTS][EXAMS];
    float avg[STUDENTS];

    inputScores(scores);
    calculateAverages(scores, avg);

    cout << "\nAverage Scores per Student:\n";
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << i + 1 << ": " << avg[i] << "\n";
    }

    int top = findTopStudent(avg);
    cout << "\nTop Performer: Student " << top + 1 << " with average " << avg[top] << "\n";

    int lowCount = countLowPerformers(scores);
    cout << "Number of students with at least 2 scores below 40: " << lowCount << "\n";

    return 0;
}*/