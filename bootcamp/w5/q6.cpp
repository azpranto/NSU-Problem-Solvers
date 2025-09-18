#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    const int MAX = 1000000; 
    vector<bool> sieve(MAX + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                sieve[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= MAX; i++) {
        if (sieve[i]) primes.push_back(i);
    }

    int n;
    while (cin >> n) {
        if (n == 0) break;

        bool found = false;
        for (int a : primes) {
            if (a > n) break;
            int b = n - a;
            if (b >= 2 && sieve[b]) {
                cout << n << " = " << a << " + " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }

    return 0;
}
