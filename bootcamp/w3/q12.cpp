#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i != 0) a.push_back(x + a[i - 1]); 
        else a.push_back(x); 
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << idx + 1 << "\n";
    }

    return 0;
}