#include <iostream>

using namespace std;

int main() {
    int T, N;
    cin >> T;
    while(T--) {
        cin >> N;
        if(N != 1 && N != 2 && N != 5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}