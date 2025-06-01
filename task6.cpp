/*#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 4;

void displaySeats(char seats[ROWS][COLS]) {
    cout << "\nSeating Chart:\n";
    for (int i = 0; i < ROWS; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void bookSeat(char seats[ROWS][COLS], int row, int col) {
    if (row >= 1 && row <= ROWS && col >= 1 && col <= COLS) {
        if (seats[row - 1][col - 1] == 'E') {
            seats[row - 1][col - 1] = 'B';
            cout << "Seat booked successfully.\n";
        }
        else {
            cout << "Seat already booked.\n";
        }
    }
    else {
        cout << "Invalid seat selection.\n";
    }
}

int countAvailableSeats(char seats[ROWS][COLS]) {
    int count = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 'E') {
                count++;
            }
        }
    }
    return count;
}

int rowWithMaxEmptySeats(char seats[ROWS][COLS]) {
    int maxEmpty = 0, rowIndex = 0;
    for (int i = 0; i < ROWS; i++) {
        int empty = 0;
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 'E') {
                empty++;
            }
        }
        if (empty > maxEmpty) {
            maxEmpty = empty;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    char seats[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'E';
        }
    }

    int choice;
    do {
        cout << "\n1. Display Seats\n2. Book a Seat\n3. Count Available Seats\n4. Row with Most Empty Seats\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            displaySeats(seats);
        }
        else if (choice == 2) {
            int row, col;
            cout << "Enter row (1-6) and column (1-4): ";
            cin >> row >> col;
            bookSeat(seats, row, col);
        }
        else if (choice == 3) {
            int available = countAvailableSeats(seats);
            cout << "Total available seats: " << available << endl;
        }
        else if (choice == 4) {
            int rowIndex = rowWithMaxEmptySeats(seats);
            cout << "Row " << rowIndex + 1 << " has the most empty seats.\n";
        }
    } while (choice != 5);

    return 0;
}*/