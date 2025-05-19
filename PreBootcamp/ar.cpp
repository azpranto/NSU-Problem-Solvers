#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b = n - 1;

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            int x = n / i;
            if (x > i) {
                a = i;
                b = x;
            }
        }
    }

    cout << a << " " << b << endl;

    return 0;
}