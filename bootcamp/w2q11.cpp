#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    if (n == 1) {
        if (k == 0) {
            cout << 1;
        } else {
            cout << -1;
        }
        cout << '\n';
        return 0;
    }

    vector<bool> sieve(n + 1, true);
    vector<int> primes;

    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (sieve[i]) primes.push_back(i);
    }

    vector<int> factors;
    int temp = n;
    
    for (int prime : primes) {
        while (temp % prime == 0) {
            factors.push_back(prime);
            temp /= prime;
        }
    }

    if (k > factors.size()) {
        cout << -1;
    } else if (k == 1) {
        cout << n;
    } else {
        int product = 1;
        for (int i = 0; i < k - 1; i++) {
            cout << factors[i] << " ";
            product *= factors[i];
        }
        
        cout << n / product;
    }

    cout << '\n';
    return 0;
}