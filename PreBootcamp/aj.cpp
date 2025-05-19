#include <iostream>

using namespace std;

int main() {
    int N, K, A;
    int count = 0;
    cin >> N >> K;

    while(N--) {
        cin >> A;
        if(A % K == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}