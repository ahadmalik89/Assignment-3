/*#include <iostream>
using namespace std;

const int TEAMS = 6;
const int ROUNDS = 4;

void inputScores(int scores[TEAMS][ROUNDS]) {
    for (int i = 0; i < TEAMS; i++) {
        cout << "Enter scores for Team " << i + 1 << ":\n";
        for (int j = 0; j < ROUNDS; j++) {
            cout << "  Round " << j + 1 << ": ";
            cin >> scores[i][j];
        }
    }
}

void calculateTotals(int scores[TEAMS][ROUNDS], int totals[TEAMS]) {
    for (int i = 0; i < TEAMS; i++) {
        totals[i] = 0;
        for (int j = 0; j < ROUNDS; j++) {
            totals[i] += scores[i][j];
        }
    }
}

void findWinners(int totals[TEAMS], int& winner, int& runnerUp) {
    winner = runnerUp = -1;
    int max1 = -1, max2 = -1;

    for (int i = 0; i < TEAMS; i++) {
        if (totals[i] > max1) {
            max2 = max1;
            runnerUp = winner;
            max1 = totals[i];
            winner = i;
        }
        else if (totals[i] > max2) {
            max2 = totals[i];
            runnerUp = i;
        }
    }
}

void checkLowScoringTeams(int scores[TEAMS][ROUNDS]) {
    cout << "\nTeams that failed to score above 10 in any round:\n";
    bool found = false;
    for (int i = 0; i < TEAMS; i++) {
        for (int j = 0; j < ROUNDS; j++) {
            if (scores[i][j] <= 10) {
                cout << "Team " << i + 1 << "\n";
                found = true;
                break;
            }
        }
    }
    if (!found) {
        cout << "None\n";
    }
}

int main() {
    int scores[TEAMS][ROUNDS];
    int totals[TEAMS];
    int winner, runnerUp;

    inputScores(scores);
    calculateTotals(scores, totals);
    findWinners(totals, winner, runnerUp);
    checkLowScoringTeams(scores);

    cout << "\nFinal Scores:\n";
    for (int i = 0; i < TEAMS; i++) {
        cout << "Team " << i + 1 << ": " << totals[i] << " points\n";
    }

    cout << "\nWinner: Team " << winner + 1 << " with " << totals[winner] << " points\n";
    cout << "Runner-Up: Team " << runnerUp + 1 << " with " << totals[runnerUp] << " points\n";

    return 0;
}*/