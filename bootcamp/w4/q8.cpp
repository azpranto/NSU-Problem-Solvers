#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec, freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);

            if (i == 0) {
                freq.push_back(0);
            }

            if (i > 1 && (vec[i - 1] > vec[i - 2] && vec[i - 1] > vec[i])) {
                freq.push_back(freq[i - 2] + 1);
            } else if (i > 1) {
                freq.push_back(freq[i - 2]);
            }

            if (i == n - 1) {
                freq.push_back(freq[i - 1]);
            }
        }

        int maxFreq = INT_MIN, leftBorder = 0;

        for (int i = 0; i <= n - k; i++) {
            int l = i + 1;
            int r = i + k - 2;

            int peaks = freq[r] - freq[l - 1];

            if (peaks > maxFreq) {
                maxFreq = peaks;
                leftBorder = i;
            }
        }
        cout << maxFreq + 1 << " " << leftBorder + 1 << '\n';
    }

    return 0;
}