#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int candles[n];
    for(int i = 0; i < n; i++) {
        cin >> candles[i];
    }
    int hst = candles[0];
    for(int i = 1; i < n; i++) {
        if(candles[i] > hst) {
            hst = candles[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(candles[i] == hst) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}