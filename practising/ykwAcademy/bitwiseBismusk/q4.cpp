#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    if (n & (1 << k)) cout << "true" << '\n';
    else cout << "false" << '\n';

    return 0;
}