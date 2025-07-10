#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int m, n;
        cin >> m >> n;

        priority_queue<int> primes;

        for(int i = m; i <= n; i++) {
            if(isPrime(i)) primes.push(-i);
        }

        while(!primes.empty()) {
            cout << -primes.top() << "\n";
            primes.pop();
        }
        cout << "\n";
    }

    return 0;
}