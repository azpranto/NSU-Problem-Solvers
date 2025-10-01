#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int l, k;
        cin >> l >> k;

        int mxor = 0;

        for(int i = 1; i <= l; i++) {
            for (int j = i + 1; j <= l; j++) {
                if ((i & j) < k) {
                    mxor = max(mxor, (i & j));
                }
            }
        }

        cout << mxor << '\n';
    }
    
    return 0;
}