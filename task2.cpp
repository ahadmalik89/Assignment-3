/*#include <iostream>
using namespace std;

const int DAYS = 7;
const int ITEMS = 4;

// Function declarations
void inputSales(float sales[DAYS][ITEMS]);
void calculateTotals(float sales[DAYS][ITEMS], float totalPerItem[], float totalPerDay[]);
void findMaxDay(float totalPerDay[]);
void findMaxItem(float totalPerItem[]);

int main() {
    float sales[DAYS][ITEMS];
    float totalPerItem[ITEMS] = { 0 };
    float totalPerDay[DAYS] = { 0 };

    inputSales(sales);
    calculateTotals(sales, totalPerItem, totalPerDay);
    findMaxDay(totalPerDay);
    findMaxItem(totalPerItem);

    return 0;
}

void inputSales(float sales[DAYS][ITEMS]) {
    cout << "Enter daily sales for 4 items over 7 days:\n";
    for (int i = 0; i < DAYS; ++i) {
        cout << "Day " << i + 1 << ":\n";
        for (int j = 0; j < ITEMS; ++j) {
            cout << "  Item " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }
}

void calculateTotals(float sales[DAYS][ITEMS], float totalPerItem[], float totalPerDay[]) {
    for (int i = 0; i < DAYS; ++i) {
        totalPerDay[i] = 0;
        for (int j = 0; j < ITEMS; ++j) {
            totalPerItem[j] += sales[i][j];
            totalPerDay[i] += sales[i][j];
        }
    }

    // Display total sales
    cout << "\nTotal Sales Per Item:\n";
    for (int j = 0; j < ITEMS; ++j) {
        int intPart = (int)totalPerItem[j];
        int decPart = (int)((totalPerItem[j] - intPart) * 10);
        cout << "Item " << j + 1 << ": " << intPart << "." << decPart << endl;
    }

    cout << "\nTotal Sales Per Day:\n";
    for (int i = 0; i < DAYS; ++i) {
        int intPart = (int)totalPerDay[i];
        int decPart = (int)((totalPerDay[i] - intPart) * 10);
        cout << "Day " << i + 1 << ": " << intPart << "." << decPart << endl;
    }
}

void findMaxDay(float totalPerDay[]) {
    int maxIndex = 0;
    for (int i = 1; i < DAYS; ++i) {
        if (totalPerDay[i] > totalPerDay[maxIndex]) {
            maxIndex = i;
        }
    }

    int intPart = (int)totalPerDay[maxIndex];
    int decPart = (int)((totalPerDay[maxIndex] - intPart) * 10);
    cout << "\nDay with highest sales: Day " << maxIndex + 1
        << " with sales " << intPart << "." << decPart << endl;
}

void findMaxItem(float totalPerItem[]) {
    int maxIndex = 0;
    for (int j = 1; j < ITEMS; ++j) {
        if (totalPerItem[j] > totalPerItem[maxIndex]) {
            maxIndex = j;
        }
    }

    int intPart = (int)totalPerItem[maxIndex];
    int decPart = (int)((totalPerItem[maxIndex] - intPart) * 10);
    cout << "Most sold item: Item " << maxIndex + 1
        << " with total sales " << intPart << "." << decPart << endl;
}*/