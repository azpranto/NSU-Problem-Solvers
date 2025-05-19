#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int countR = 0, countG = 0, countB = 0;

        for (char c : S) {
            if (c == 'R') {
                countR++;
            } else if (c == 'G') {
                countG++;
            } else if (c == 'B') {
                countB++;
            }
        }

        int minRepaints = min({countG + countB, countR + countB, countR + countG});
        cout << minRepaints << endl;
    }
    return 0;
}