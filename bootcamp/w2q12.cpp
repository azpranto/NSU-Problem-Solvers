#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int a = 0, b = 0, c = 0;
        bool found = false;
        
        if (n < 24) {
            cout << "NO" << '\n';
            continue;
        }
        
        for (a = 2; a * a <= n; a++) {
            if (n % a == 0) {
                int remaining = n / a;
            
                for (b = a + 1; b * b <= remaining; b++) {
                    if (remaining % b == 0) {
                        c = remaining / b;
                    
                        if (c >= 2 && c != a && c != b) {
                            found = true;
                            break;
                        }
                    }
                }
                
                if (found) break;
            }
        }

        if (found) {
            cout << "YES" << '\n' << a << " " << b << " " << c << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}