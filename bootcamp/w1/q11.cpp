#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stringstream ss(s);

    vector<int> v;
    int a;
    char ch;

    ss >> a;
    v.push_back(a);

    while (ss >> ch >> a) {
        v.push_back(a);
    }

    for (int i : v) {
        cout << i << '\n';
    }

    return 0;
}