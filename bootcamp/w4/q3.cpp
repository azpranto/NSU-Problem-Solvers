#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    vector<int> suff(n + 1, 0);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (freq.find(vec[i]) == freq.end()) {
            suff[i] = suff[i + 1] + 1;
            freq[vec[i]] = 1;
        } else {
            suff[i] = suff[i + 1];
        }
    }

    while (m--) {
        int l;
        cin >> l;
        cout << suff[l - 1] << '\n';
    }

    return 0;
}
