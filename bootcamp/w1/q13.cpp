#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s,t;
    cin >> s >> t;

    int i = s.size()-1, j = t.size()-1, cnt = 0;

    while (i >= 0 && j >= 0 && s[i] == t[j]) {
        cnt++;
        i--;
        j--;
    }

    cout << s.size() + t.size() - 2*cnt << '\n';

    return 0;
}