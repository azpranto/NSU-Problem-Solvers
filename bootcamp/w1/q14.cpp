#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int m;
    cin >> m;

    while (m--) {
        int x, y;
        cin >> x >> y;

        if (x == 1) {
            if (y <= a[0]) {
                a[1] += a[0] - y;
            }
            a[0] = 0;
        } else if (x == a.size()) {
            if (y <= a.back()) {
                a[a.size() - 2] += y - 1;
            } else {
                a[a.size() - 2] += a.back();
            }
            a.back() = 0;
        } else {
            if (y <= a[x - 1]) {
                a[x] += a[x - 1] - y;
                a[x - 2] += y - 1;
            } else {
                a[x - 2] += a[x - 1];
            }
            a[x - 1] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }

    return 0;
}