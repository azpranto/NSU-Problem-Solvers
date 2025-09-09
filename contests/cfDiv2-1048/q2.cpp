#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m, sum = 0;
        cin >> n >> m;
        vector<long long> cakes;

        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;
            cakes.push_back(x);
        }

        sort(cakes.begin(), cakes.end());

        for (int i = m; i >= 0; i--) {
            
            if (cakes.size() == 1) {
                sum += (m - n + 1) * cakes.back();
                break;
            }

            sum += i * cakes.back();
            cakes.pop_back();
        }

        cout << sum << '\n';
    }

    return 0;
}