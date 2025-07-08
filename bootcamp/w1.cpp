#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 1; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                int other = n / i;

                if (i != n) {
                    sum += i;
                }
                if (other != i && other != n) {
                    sum += other;
                }
            }
        }

        cout << sum << "\n";
    }
    return 0;
}
