/*#include <iostream>
using namespace std;

const int SIZE = 5;

// Function declarations
void inputTemperature(float temp[SIZE][SIZE]);
void averagePerRow(float temp[SIZE][SIZE]);
void detectExtreme(float temp[SIZE][SIZE]);

int main() {
    float temp[SIZE][SIZE];

    inputTemperature(temp);
    averagePerRow(temp);
    detectExtreme(temp);

    return 0;
}

void inputTemperature(float temp[SIZE][SIZE]) {
    cout << "Enter temperatures for 5x5 grid:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Row " << i + 1 << ":\n";
        for (int j = 0; j < SIZE; ++j) {
            cout << "  Column " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }
}

void averagePerRow(float temp[SIZE][SIZE]) {
    cout << "\nAverage Temperature per Row:\n";
    for (int i = 0; i < SIZE; ++i) {
        float sum = 0;
        for (int j = 0; j < SIZE; ++j) {
            sum += temp[i][j];
        }
        float avg = sum / SIZE;
        int intPart = (int)avg;
        int decPart = (int)((avg - intPart) * 10);

        cout << "Row " << i + 1 << ": " << intPart << "." << decPart << "°C\n";
    }
}

void detectExtreme(float temp[SIZE][SIZE]) {
    cout << "\nExtreme Hot/Cold Spots:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (temp[i][j] > 45) {
                cout << "HOT spot at (" << i + 1 << ", " << j + 1 << ") - " << temp[i][j] << "°C\n";
            }
            else if (temp[i][j] < 0) {
                cout << "COLD spot at (" << i + 1 << ", " << j + 1 << ") - " << temp[i][j] << "°C\n";
            }
        }
    }
}*/