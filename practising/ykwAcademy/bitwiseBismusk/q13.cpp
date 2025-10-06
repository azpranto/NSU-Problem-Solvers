#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool done = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            s.erase(s.begin() + i);
            done = true;
            break;
        }
    }

    if (!done) s.erase(s.begin());

    cout << s << '\n';

    return 0;
}