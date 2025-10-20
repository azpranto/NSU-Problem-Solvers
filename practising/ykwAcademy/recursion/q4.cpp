#include <bits/stdc++.h>

using namespace std;

long long rec(long long n) {
    if (n == 1) {
        return 1;
    } else {
        return rec(n - 1) * n;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    cout << rec(n) << '\n';

    return 0;
}