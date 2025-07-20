#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> check;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        if (check.find(x) != check.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            check[x] = 1;
        }
    }
    return 0;
}