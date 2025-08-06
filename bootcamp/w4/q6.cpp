#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i == 0) {
            vec.push_back(x);
        } else {
            vec.push_back(vec[i - 1] + x);
        }
    }

    int cnt = 0;

    for (int i = 0; i < n-1; i++) {
        if (vec[n-1] - vec[i] == vec[i]) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}