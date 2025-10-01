#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        unsigned int n, even = 0xAAAAAAAA, odd = 0x55555555;
        cin >> n;

        unsigned int evn = n & even, odn = n & odd;

        cout << ((evn >> 1) | (odn << 1)) << '\n';
    }

    return 0;
}