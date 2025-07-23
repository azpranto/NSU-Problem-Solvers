//https://vjudge.net/contest/729291#problem  pass: mid

#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];
        int score = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];

                if (grid[i][j] == 'X') {
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        score += 1;
                    } else if ((i == 1 && (j > 0 && j < 9)) || (j == 1 && (i > 0 && i < 9)) || (i == 8 && (j > 0 && j < 9)) || (j == 8 && (i > 0 && i < 9))) {
                        score += 2;
                    } else if ((i == 2 && (j > 1 && j < 8)) || (j == 2 && (i > 1 && i < 8)) || (i == 7 && (j > 1 && j < 8)) || (j == 7 && (i > 1 && i < 8))) {
                        score += 3;
                    } else if ((i == 3 && (j > 2 && j < 7)) || (j == 3 && (i > 2 && i < 7)) || (i == 6 && (j > 2 && j < 7)) || (j == 6 && (i > 2 && i < 7))) {
                        score += 4;
                    } else if ((i == 4 && (j > 3 && j < 6)) || (j == 4 && (i > 3 && i < 6)) || (i == 5 && (j > 3 && j < 6)) || (j == 5 && (i > 3 && i < 6))) {
                        score += 5;
                    }
                }
            }
        }

        cout << score << "\n";
    }

    return 0;
}