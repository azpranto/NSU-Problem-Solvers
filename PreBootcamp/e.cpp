#include <iostream>

using namespace std;

int main() {
    int n, d1 = 0, d2 = 0;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        d1 += arr[i][i];
        d2 += arr[i][n - i - 1];
    }

    if(d1 > d2) {
        cout << d1 - d2;
    } else {
        cout << d2 - d1;
    }

    return 0;
}