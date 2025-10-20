#include <bits/stdc++.h>

using namespace std;

void rec(int n) {
    if (n == 0) {
        return;
    } else {
        if (n - 1 != 0) {
            cout << n << " ";
        } else {
            cout << n << "\n";
        }
        return rec(n - 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    rec(n);

    return 0;
}