#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    int x = vec[n-1];

    vector<int> vecx;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            vecx.push_back(i);
            if (i != x / i) {
                vecx.push_back(x / i);
            }
        }
    }

    sort(vecx.begin(), vecx.end());

    int i = 0, j = 0;
    while (i < vecx.size()) {
        if (vecx[i] == vec[j] ) {
            vec[j] = 0;
            i++;
            j++;
        } else if (vecx[i] < vec[j]) {
            i++;
        } else {
            j++;
        }
    }

    sort(vec.begin(), vec.end());

    int y = vec[n-1];

    cout << x << " " << y << "\n";

    return 0;
}