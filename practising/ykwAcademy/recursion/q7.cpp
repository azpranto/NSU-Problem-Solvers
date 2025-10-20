#include <bits/stdc++.h>

using namespace std;

int c = 1;

void rec(int n) {
    if (n == 0) {
        return;
    }

    int num, sum = 0, x;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> x;
        sum += x;
    }

    cout << "Case " << c << ": " << sum << '\n';
    c++;
    rec(n - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    rec(n);

    return 0;
}