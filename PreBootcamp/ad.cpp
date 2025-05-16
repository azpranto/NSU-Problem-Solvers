#include <iostream>

using namespace std;

int main() {
    int T, N;
    long long fac = 1;
    cin >> T;
    while(T--) {
        cin >> N;
        for(int i = 1; i <= N; i++) {
            fac *= i;
        }
        cout << fac << endl;
        fac = 1;
    }
    return 0;
}