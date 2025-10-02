#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;
        bool ans = false;

        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        for (int i = 0; i < (1 << n); i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) sum += vec[j];
            }
            if (sum == x) {
                cout << "YES" << '\n';
                ans = true;
                break;
            }
        }

        if (ans == false) cout << "NO" << '\n';
    }

    return 0;
}