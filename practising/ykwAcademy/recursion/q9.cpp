#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int n;

void check(int i) {
    if (i >= n / 2) {
        cout << "YES" << '\n';
        return;
    }
    
    if (vec[i] == vec[n - 1 - i]) {
        check(i + 1);
    } else {
        cout << "NO" << '\n';
        return;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    check(0);

    return 0;
}