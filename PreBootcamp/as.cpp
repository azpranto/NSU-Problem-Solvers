#include <iostream>

using namespace std;

int main() {
    int T, A, B, count = 0;
    cin >> T;
    while(T--) {
        cin >> A >> B;
        for(int i = A; i <= B; i++) {
            int br = 0, it = i;
            while(br != 1) {
                if(it % 10 == 0) {
                    count++;
                    br = 1;
                }
                it /= 10;
                if(it == 0) {
                    br = 1;
                }
            }
        }
        cout << count << "/" << (B - A + 1) << endl;
        count = 0;
    }
    return 0;
}