#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string rooms = "0000000000";

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            for (int j = 0; j < 10; j++) {
                if (rooms[j] == '0') {
                    rooms[j] = '1';
                    break;
                }
            }
        } else if (s[i] == 'R') {
            for (int j = 9; j >= 0; j--) {
                if (rooms[j] == '0') {
                    rooms[j] = '1';
                    break;
                }
            }
        } else {
            int idx = s[i] - '0';
            rooms[idx] = '0';
        }
    }
    cout << rooms << '\n';
    return 0;
}