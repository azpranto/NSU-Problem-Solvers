#include <iostream>

using namespace std;

int main() {
    long long int A, B;
    double mid;
    cin >> A >> B;

    if(A > 1000000000 || B > 1000000000) {
        return 0;
    }

    if(A < 0) {
        A *= -1;
        mid = (A + B) / 2.0;
    } else if(B < 0) {
        B *= -1;
        mid = (A + B) / 2.0;
    } else {
        mid = (A + B) / 2.0;
    }

    if(mid == (int)mid) {
        cout << (int)mid << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}