#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int sum = 1;

    for (int i = 1; i <= n; i++) {
        sum *= 2;
        sum %= 1000000007;
    }

    cout << sum << '\n';

    return 0;
}