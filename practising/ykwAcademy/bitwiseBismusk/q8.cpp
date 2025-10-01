#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    unsigned int x;
    cin >> x;
    int cnt = 0;

    for (int i = 0; i < 32; i++) {
        if ((x & 1) == 1) cnt++;
        x >>= 1;
    }

    cout << cnt << '\n';
    
    return 0;
}