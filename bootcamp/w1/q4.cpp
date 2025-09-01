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
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }
    cout << '\n';
    return 0;
}