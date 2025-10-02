#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, l, r, x, cnt = 0;

    cin >> n >> l >> r >> x;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0, fst = 0, lst = 0, idc = 1 << (n - 1);
        bool fstc = true;
        
        for (int j = 0; j < n; j++) {
            if (i & (idc >> j)) {
                sum += vec[j];
                if (fstc) {
                    fst = vec[j];
                    fstc = false;
                }
                lst = vec[j];
            }
        }

        if (sum <= r && sum >= l && (lst - fst) >= x) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}