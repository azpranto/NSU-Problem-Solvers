#include <iostream>

using namespace std;

int main() {
    int T, N, K;
    cin >> T;

    while(T--) {
        cin >> N >> K;
        
        int tp = 1 + K;
        int r = N / tp;
        int rec = K * r;
        int rem = N - rec;

        cout << rem << endl;
    }
    return 0;
}