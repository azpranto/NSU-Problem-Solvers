#include <bits/stdc++.h>

using namespace std;

void weal(long long n) {
    if (n == 1) {
        cout << n << '\n';
        return;
    }

    cout << n << " ";
    if (n & 1) {
        return weal((n * 3) + 1);
    } else {
        return weal(n / 2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    weal(n);

    return 0;
}