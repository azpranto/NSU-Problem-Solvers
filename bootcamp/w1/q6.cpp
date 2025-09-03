#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<char, bool>> vh = {
        {'h', false},
        {'e', false},
        {'i', false},
        {'d', false},
        {'i', false}
    };

    string s;
    cin >> s;
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if (vh[j].first == s[i]) {
            vh[j].second = true;
            j++;
        }
    }

    if (j == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}