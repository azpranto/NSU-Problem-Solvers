#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vec, pref;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);

        if (i == 0) {
            pref.push_back(x);
        } else {
            pref.push_back(pref[i - 1] + x);
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int tar;
        cin >> tar;
        auto it = lower_bound(pref.begin(), pref.end(), tar);

        cout << (it - pref.begin()) + 1 << '\n';
    }

    return 0;
}