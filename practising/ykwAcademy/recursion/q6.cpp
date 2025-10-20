#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

void ev(int n) {
    if (n < 0) {
        return;
    }

    cout << vec[n] << " ";
    ev(n - 2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    ev(((n & 1) == 1) ? n - 1 : n - 2);

    return 0;
}