#include <bits/stdc++.h>
#define int long long

using namespace std;

int bitm(int n, int num) {
    int mins = LLONG_MAX;
    int ans = -1;

    for (int i = 0; i < (1 << n); i++) {
        if (__builtin_popcount(i) != (n / 2)) continue;

        string ts;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                ts += '7';
            } else {
                ts += '4';
            }
        }

        int tnum = stoll(ts);
        int diff = tnum - num;
        
        if (diff >= 0 && diff < mins) {
            mins = diff;
            ans = tnum;
        }
    }

    return ans;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    int num = stoll(s);
    int ans = -1;

    if (n % 2 == 0) {
        ans = bitm(n, num);
        if (ans == -1) {
            ans = bitm(n + 2, num);
        }
    } else {
        ans = bitm(n + 1, num);
    }

    cout << ans << '\n';
    return 0;
}