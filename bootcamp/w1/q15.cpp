#include <bits/stdc++.h>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second > p2.second) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<pair<int, int>> vec;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vec.push_back({x, y});
    }

    sort(vec.begin(), vec.end(), comparator);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (m <= 0) break;
        if (vec[i].first <= m) {
            ans += vec[i].first * vec[i].second;
            m -= vec[i].first;
        } else {
            ans += m * vec[i].second;
            m = 0;
        }
    }

    cout << ans << "\n";

    return 0;
}