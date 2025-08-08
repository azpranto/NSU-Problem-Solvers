#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int h;
        cin >> h;

        auto low = lower_bound(heights.begin(), heights.end(), h);
        auto up = upper_bound(heights.begin(), heights.end(), h);

        if (low == heights.begin()) {
            cout << "X ";
        } else {
            cout << *(--low) << " ";
        }

        if (up == heights.end()) {
            cout << "X\n";
        } else {
            cout << *up << "\n";
        }
    }

    return 0;
}
