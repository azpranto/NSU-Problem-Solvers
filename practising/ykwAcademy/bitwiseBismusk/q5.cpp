#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        unsigned int n;
        cin >> n;

        cout << (n ^ 4294967295) << '\n';
    }

    return 0;
}