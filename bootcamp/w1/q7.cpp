#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;

    for (int i = 1; i <= 10000; i++) {
        s += to_string(i);
    }
    int n;

    cin >> n;

    cout << s[n - 1] << '\n';

    return 0;
}