#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool> toPrime(1000001, true);
    vector<int> digPrimePrefix(1000001, 0);

    toPrime[0] = toPrime[1] = false;
    for (int i = 2; i * i <= 1000000; i++) {
        if (toPrime[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                toPrime[j] = false;
            }
        }
    }

    for (int i = 1; i <= 1000000; i++) {
        digPrimePrefix[i] = digPrimePrefix[i - 1];
        if (toPrime[i]) {
            int digit = i, sum = 0;
            while (digit) {
                sum += digit % 10;
                digit /= 10;
            }
            if (isPrime(sum)) digPrimePrefix[i]++;
        }
    }

    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << digPrimePrefix[r] - digPrimePrefix[l - 1] << '\n';
    }

    return 0;
}
