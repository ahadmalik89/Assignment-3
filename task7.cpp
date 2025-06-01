/*#include <iostream>
using namespace std;

const int USERS = 10;
const int PRODUCTS = 5;

void inputRatings(int ratings[USERS][PRODUCTS]) {
    for (int i = 0; i < USERS; i++) {
        cout << "Enter ratings by User " << i + 1 << " (1 to 5) for 5 products:\n";
        for (int j = 0; j < PRODUCTS; j++) {
            cin >> ratings[i][j];
        }
    }
}

void calculateAverages(int ratings[USERS][PRODUCTS], float avg[PRODUCTS]) {
    for (int j = 0; j < PRODUCTS; j++) {
        int sum = 0;
        for (int i = 0; i < USERS; i++) {
            sum += ratings[i][j];
        }
        avg[j] = sum / 10.0f;
    }
}

void countPerfectRatings(int ratings[USERS][PRODUCTS], int perfectCount[PRODUCTS]) {
    for (int j = 0; j < PRODUCTS; j++) {
        perfectCount[j] = 0;
        for (int i = 0; i < USERS; i++) {
            if (ratings[i][j] == 5) {
                perfectCount[j]++;
            }
        }
    }
}

void displayWorstAverageProducts(float avg[PRODUCTS]) {
    float minAvg = avg[0];
    for (int j = 1; j < PRODUCTS; j++) {
        if (avg[j] < minAvg) {
            minAvg = avg[j];
        }
    }

    cout << "\nProduct(s) with the worst average score:\n";
    for (int j = 0; j < PRODUCTS; j++) {
        if (avg[j] == minAvg) {
            cout << "Product " << j + 1 << " with average " << avg[j] << "\n";
        }
    }
}

int main() {
    int ratings[USERS][PRODUCTS];
    float avg[PRODUCTS];
    int perfectCount[PRODUCTS];

    inputRatings(ratings);
    calculateAverages(ratings, avg);
    countPerfectRatings(ratings, perfectCount);

    cout << "\nAverage Ratings:\n";
    for (int j = 0; j < PRODUCTS; j++) {
        cout << "Product " << j + 1 << ": " << avg[j] << "\n";
    }

    cout << "\nPerfect Ratings Count:\n";
    for (int j = 0; j < PRODUCTS; j++) {
        cout << "Product " << j + 1 << ": " << perfectCount[j] << "\n";
    }

    displayWorstAverageProducts(avg);

    return 0;
}*/