#include <bits/stdc++.h>

using namespace std;

void rec(int n, int a) {
    if (a == n) {
        return;
    } else {
        cout << a + 1 << '\n';
        return rec(n, a + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, a = 0;
    cin >> n;

    rec(n, a);

    return 0;
}