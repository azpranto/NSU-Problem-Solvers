#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> entries;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        if (entries.find(x) != entries.end()) {
            cout << x << entries[x] << "\n";
            entries[x]++;
        } else {
            cout << "OK\n";
            entries[x] = 1;
        }
    }
    return 0;
}