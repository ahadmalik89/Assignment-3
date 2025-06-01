/*#include <iostream>
using namespace std;

const int SHIFTS = 3;
const int DAYS = 7;

void inputData(float data[SHIFTS][DAYS]) {
    for (int i = 0; i < SHIFTS; i++) {
        cout << "Enter defect % for Shift " << i + 1 << " for 7 days:\n";
        for (int j = 0; j < DAYS; j++) {
            cin >> data[i][j];
        }
    }
}

void averagePerShift(float data[SHIFTS][DAYS], float avgShift[SHIFTS]) {
    for (int i = 0; i < SHIFTS; i++) {
        float sum = 0;
        for (int j = 0; j < DAYS; j++) {
            sum += data[i][j];
        }
        avgShift[i] = sum / DAYS;
    }
}

void averagePerDay(float data[SHIFTS][DAYS], float avgDay[DAYS]) {
    for (int j = 0; j < DAYS; j++) {
        float sum = 0;
        for (int i = 0; i < SHIFTS; i++) {
            sum += data[i][j];
        }
        avgDay[j] = sum / SHIFTS;
    }
}

void displayCriticalShifts(float avgShift[SHIFTS]) {
    cout << "\nCritical Shifts (avg defect > 10%):\n";
    for (int i = 0; i < SHIFTS; i++) {
        if (avgShift[i] > 10.0) {
            cout << "Shift " << i + 1 << " - Average: " << avgShift[i] << "\n";
        }
    }
}

int main() {
    float data[SHIFTS][DAYS], avgShift[SHIFTS], avgDay[DAYS];

    inputData(data);
    averagePerShift(data, avgShift);
    averagePerDay(data, avgDay);

    cout << "\nAverage Defect % per Shift:\n";
    for (int i = 0; i < SHIFTS; i++) {
        cout << "Shift " << i + 1 << ": " << avgShift[i] << "\n";
    }

    cout << "\nAverage Defect % per Day:\n";
    for (int j = 0; j < DAYS; j++) {
        cout << "Day " << j + 1 << ": " << avgDay[j] << "\n";
    }

    displayCriticalShifts(avgShift);

    return 0;
}*/