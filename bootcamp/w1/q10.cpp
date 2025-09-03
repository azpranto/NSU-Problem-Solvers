#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, sp = "  ";
    cin >> s;

    int st = 0, spc = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<' && s[i+1] != '/') {
            cout << s.substr(st, 3) << '\n';
            st += 3;
            if (s[i+4] != '/') {
                spc++;
            }
            for (int j = 0; j < spc; j++) {
                cout << sp;
            }
        } else if (s[i] == '<' && s[i+1] == '/') {
            cout << s.substr(st, 4) << '\n';
            st += 4;
            if (s[i+5] == '/') {
                spc--;
            }
            for (int j = 0; j < spc; j++) {
                cout << sp;
            }
        }

        
    }


    return 0;
}