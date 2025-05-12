#include <iostream> 

using namespace std;

int main() {
    int q, count = 0, br = 0;
    long long int n;
    cin >> q;

    if(q < 1 || q > 1000) {
        return 0;
    }

    while(q--) {
        cin >> n;

        while(n != 1) {
            if(n%2 == 0) {
                n = n / 2;
                count++;
            } else if(n%3 == 0) {
                n = (2 * n) / 3;
                count++;
            } else if(n%5 == 0) {
                n = (4 * n) / 5;
                count++;
            } else {
                cout << -1 << endl;
                br = 1;
                count = 0;
                break;
            }
        }
        
        if(br == 0) {
            cout << count << endl;
        }
        br = 0;
        count = 0;
    }

    return 0;
}