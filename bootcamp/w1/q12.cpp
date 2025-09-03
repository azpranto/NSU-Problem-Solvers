#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    cin >> n >> s;
    
    int ans = n;
    
    for (int k = 1; k <= n/2; k++) {
        if (s.substr(0, k) == s.substr(k, k)) {
            ans = min(ans, n - k + 1);
        }
    }
    
    cout << ans << '\n';
    return 0;
}