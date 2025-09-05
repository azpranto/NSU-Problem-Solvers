#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec, ans;
        for (int i = 0; i < n; i++) {
            int el;
            cin >> el;
            vec.push_back(el);
        }

        deque<int> dq;

        for (int i = 0; i < k; i++) {
            while (!dq.empty() && vec[dq.back()] <= vec[i]) dq.pop_back();
            dq.push_back(i);
        }

        for (int i = k; i < n; i++) {
            ans.push_back(dq.front());
            while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
            while (!dq.empty() && vec[dq.back()] <= vec[i]) dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(dq.front());

        for (int el : ans) cout << vec[el] << ' ';
        cout << '\n';
    }

    return 0;
}