#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int k;
    cin >> k;
    deque<int> freq;

    for (int i = 0; i < n; i++) {
        freq.push_back(arr[i]);
        if (i + 1 == k) {
            cout << *max_element(arr.begin(), arr.begin() + k) << " ";
        } else if (i + 1 > k) {
            freq.pop_front();
            cout << *max_element(freq.begin(), freq.end()) << " ";
        }
    }
    cout << "\n";
    return 0;
}