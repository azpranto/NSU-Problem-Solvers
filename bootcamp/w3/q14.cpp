#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long L;
    int Q;
    cin >> L >> Q;

    set<long long> cuts;
    cuts.insert(0);
    cuts.insert(L);

    while (Q--) {
        int c;
        long long x;
        cin >> c >> x;

        if (c == 1) {
            cuts.insert(x);
        } else {
            auto right = cuts.upper_bound(x);
            auto left = prev(right);
            cout << (*right - *left) << "\n";
        }
    }

    return 0;
}
