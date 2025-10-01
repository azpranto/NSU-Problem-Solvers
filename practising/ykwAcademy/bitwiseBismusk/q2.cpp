#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;

    int mxor = 0;

    for(int i = l; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) {
            mxor = max(mxor, i ^ j);
        }
    }

    cout << mxor << '\n';

    return 0;
}