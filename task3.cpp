/*#include <iostream>
using namespace std;

const int PATIENTS = 5;
const int DAYS = 7;


void inputStatus(char status[PATIENTS][DAYS]);
void countEachStatus(char status[PATIENTS][DAYS]);
void countCriticalDays(char status[PATIENTS][DAYS]);

int main() {
    char status[PATIENTS][DAYS];

    inputStatus(status);
    countEachStatus(status);
    countCriticalDays(status);

    return 0;
}

void inputStatus(char status[PATIENTS][DAYS]) {
    cout << "Enter status (S, C, R) for 5 patients over 7 days:\n";
    for (int i = 0; i < PATIENTS; ++i) {
        cout << "Patient " << i + 1 << ":\n";
        for (int j = 0; j < DAYS; ++j) {
            cout << "  Day " << j + 1 << ": ";
            cin >> status[i][j];
        }
    }
}

void countEachStatus(char status[PATIENTS][DAYS]) {
    int stable = 0, critical = 0, recovered = 0;

    for (int i = 0; i < PATIENTS; ++i) {
        for (int j = 0; j < DAYS; ++j) {
            if (status[i][j] == 'S' || status[i][j] == 's')
                stable++;
            else if (status[i][j] == 'C' || status[i][j] == 'c')
                critical++;
            else if (status[i][j] == 'R' || status[i][j] == 'r')
                recovered++;
        }
    }

    cout << "\nTotal Status Counts Across All Days:\n";
    cout << "Stable (S): " << stable << endl;
    cout << "Critical (C): " << critical << endl;
    cout << "Recovered (R): " << recovered << endl;
}

void countCriticalDays(char status[PATIENTS][DAYS]) {
    cout << "\nCritical Days Per Patient:\n";
    for (int i = 0; i < PATIENTS; ++i) {
        int count = 0;
        for (int j = 0; j < DAYS; ++j) {
            if (status[i][j] == 'C' || status[i][j] == 'c')
                count++;
        }
        cout << "Patient " << i + 1 << ": " << count << " day(s) in 'Critical' state.\n";
    }
}*/
