#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // efficient way to check prime numbers
    int n;
    cin >> n;

    bool is_prime = true;
    if (n <= 1) is_prime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    cout << (is_prime ? "Prime" : "Not Prime") << endl;

    // TC: O(sqrt(n)) SC: O(1)

    //modular arithmetic
    int a, b, m;
    cin >> a >> b >> m;
    int result = ((a % m) + (b % m)) % m;

}