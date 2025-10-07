#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int osum = 0, zsum = 0, ans = LLONG_MAX;

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) osum += vec[j];
            else zsum += vec[j];
        }

        if (abs(osum - zsum) < ans) {
            ans = abs(osum - zsum);
        }

        osum = 0;
        zsum = 0;
    }

    cout << ans << '\n';

    return 0;
}