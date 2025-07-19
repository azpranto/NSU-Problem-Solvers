#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    for (int caseNo = 1; caseNo <= T; ++caseNo) {
        int n, d;
        cin >> n >> d;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        deque<int> maxDeque, minDeque;
        int maxDiff = 0;

        for (int i = 0; i < n; ++i) {
            // maintain decreasing order for maxDeque
            while (!maxDeque.empty() && arr[maxDeque.back()] <= arr[i]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(i);

            // maintain increasing order for minDeque
            while (!minDeque.empty() && arr[minDeque.back()] >= arr[i])
                minDeque.pop_back();
            minDeque.push_back(i);

            // remove elements out of the window
            if (i >= d - 1) {
                if (!maxDeque.empty() && maxDeque.front() <= i - d)
                    maxDeque.pop_front();
                if (!minDeque.empty() && minDeque.front() <= i - d)
                    minDeque.pop_front();

                int currentDiff = arr[maxDeque.front()] - arr[minDeque.front()];
                maxDiff = max(maxDiff, currentDiff);
            }
        }

        cout << "Case " << caseNo << ": " << maxDiff << '\n';
    }
    return 0;
}