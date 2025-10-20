#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n < 2) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, t1 = 0, t2 = 1;
    cin >> n;

    cout << fib(n - 1) << '\n';

    return 0;
}