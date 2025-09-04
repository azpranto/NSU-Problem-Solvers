#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, sm = INT_MAX;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            sm = a[i + 1];
            break;
        }
    }

    if (sm == INT_MAX) cout << "NO\n";
    else cout << sm << "\n";

    return 0;
}