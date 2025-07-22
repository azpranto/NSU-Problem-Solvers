#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pq.push(x);
        }

        while (k--) {
            int top = pq.top();
            pq.pop();
            pq.push(-top); 
        }

        int sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        cout << sum << "\n";
    }

    return 0;
}
