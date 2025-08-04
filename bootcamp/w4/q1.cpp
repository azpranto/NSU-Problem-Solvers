//https://vjudge.net/contest/736738#problem

//prefix sum

#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vec, prefS;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
        if (i == 0) {
            prefS.push_back(x);
        } else {
            prefS.push_back(prefS[i - 1] + x);
        }
    }

    int Q;
    cin >> Q;

    while(Q--) {
        int i, j;
        cin >> i >> j;
        if (i == 0) {
            cout << prefS[j] << '\n';
        } else {
            cout << prefS[j] - prefS[i - 1] << '\n';
        }
    }

    return 0;
}