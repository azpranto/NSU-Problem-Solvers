//https://vjudge.net/contest/725816#problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr(n);
    int lAns = 0;

    while (q--) {
        int s, x, y;
        cin >> s >> x >> y;

        int idx = (x ^ lAns) % n;

        if (s == 1) {
            arr[idx].push_back(y);
        } else if (s == 2) {
            lAns = arr[idx][y % arr[idx].size()];
            cout << lAns << '\n';
        }
    }

    return 0;
}
