#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int cnt = 0;

        while (!s.empty() && s.back() != '1') {
            s.pop_back();
        }

        reverse(s.begin(), s.end());

        while (!s.empty() && s.back() != '1') {
            s.pop_back();
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}