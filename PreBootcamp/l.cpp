#include <iostream>

using namespace std;

int main() {
    int n, oc = 0, ec = 0, lastOddPos, lastEvenPos;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            ec++;
            lastEvenPos = i;
        } else {
            oc++;
            lastOddPos = i;
        }
    }
    if (oc == 1) {
        cout << lastOddPos + 1 << endl;
    } else {
        cout << lastEvenPos + 1 << endl; 
    }
    return 0;
}