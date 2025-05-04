#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tDrinks = k * l / nl;
    int tLimes = c * d;
    int tSalt = p / np;
    int t = min(tDrinks, min(tLimes, tSalt));
    cout << t / n << endl;
    return 0;
}