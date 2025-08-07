#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin >> n;

    vector<int> freq;
    vector<int> pref;

    pref.push_back(0);
    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] == n[i + 1]) {
            freq.push_back(1);
        } else {
            freq.push_back(0);
        }
    }
    freq.push_back(0);

    for (int i = 0; i < freq.size(); i++) {
        if (i == 0) {
            pref.push_back(freq[i]);
        } else {
            pref.push_back(pref[i] + freq[i]); 
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r - 1] - pref[l - 1] << '\n';
    }

    return 0;
}