#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string a, b;
    cin >> a >> b;
    cout << a.length() << ' ' << b.length() << '\n';
    cout << a + b << '\n';
    swap(a[0], b[0]);
    cout << a << ' ' << b << '\n';
    return 0;
}