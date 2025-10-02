#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j)) sum += vec[j];
            else sum -= vec[j];
        }
        if (sum % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    
    return 0;
}
