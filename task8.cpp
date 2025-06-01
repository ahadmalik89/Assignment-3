/*#include <iostream>
using namespace std;

const int SIZE = 5;

void inputStatus(char books[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter statuses (A/I/M) for shelf " << i + 1 << ":\n";
        for (int j = 0; j < SIZE; j++) {
            cin >> books[i][j];
        }
    }
}

void displayStatus(char books[SIZE][SIZE]) {
    cout << "\nLibrary Book Status:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Shelf " << i + 1 << ": ";
        for (int j = 0; j < SIZE; j++) {
            cout << books[i][j] << " ";
        }
        cout << "\n";
    }
}

void countBooks(char books[SIZE][SIZE], int& available, int& issued, int& missing) {
    available = issued = missing = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (books[i][j] == 'A') available++;
            else if (books[i][j] == 'I') issued++;
            else if (books[i][j] == 'M') missing++;
        }
    }
}

int rowWithMostMissing(char books[SIZE][SIZE]) {
    int maxMissing = 0, rowIndex = 0;
    for (int i = 0; i < SIZE; i++) {
        int count = 0;
        for (int j = 0; j < SIZE; j++) {
            if (books[i][j] == 'M') count++;
        }
        if (count > maxMissing) {
            maxMissing = count;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    char books[SIZE][SIZE];
    int available, issued, missing;

    inputStatus(books);
    displayStatus(books);
    countBooks(books, available, issued, missing);

    cout << "\nTotal Available Books: " << available << "\n";
    cout << "Total Issued Books: " << issued << "\n";
    cout << "Total Missing Books: " << missing << "\n";

    int row = rowWithMostMissing(books);
    cout << "Shelf " << row + 1 << " has the most missing books.\n";

    return 0;
}*/