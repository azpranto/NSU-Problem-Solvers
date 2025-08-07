#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    while (q--) {
        int tar;
        cin >> tar;

        auto it = lower_bound(vec.begin(), vec.end(), tar);

        if (it != vec.end() && *it == tar) {
            cout << (it - vec.begin()) << '\n'; 
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}