#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        unsigned int n, res = 0;
        cin >> n;

        for (int i = 0; i < 32; i++) {
            res <<= 1;
            res |= (n & 1);
            n >>= 1;
        }

        cout << res << '\n';
    }
    return 0;
}
