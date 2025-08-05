#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, u;
        cin >> n >> u;
        vector<int> vec(n, 0);

        while (u--) {
            int l, r, val;
            cin >> l >> r >> val;
            vec[l] += val;
            if (r + 1 < n) {
                vec[r + 1] -= val;
            }
        }

        for (int i = 1; i < n; i++) {
            vec[i] += vec[i - 1];
        }

        int q;
        cin >> q;
        while (q--) {
            int idx;
            cin >> idx;
            cout << vec[idx] << '\n';
        }

    }
    return 0;
}