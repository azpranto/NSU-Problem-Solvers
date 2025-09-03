#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3, s12;

    cin >> s1 >> s2 >> s3;

    s12 = s1 + s2;

    sort(s12.begin(), s12.end());
    sort(s3.begin(), s3.end());

    if (s12 == s3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}