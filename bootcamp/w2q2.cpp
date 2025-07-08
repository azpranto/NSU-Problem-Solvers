#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); ++i) {
            if(n % i == 0) {
                int other = n / i;

                if(i % 2 == 0) {
                    cnt++;
                }
                if(other % 2 == 0 && other != i) {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}