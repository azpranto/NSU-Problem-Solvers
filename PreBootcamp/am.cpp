#include <iostream>

using namespace std;

int main() {
    int n, tp = 0;
    int arr[7];
    cin >> n;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 7; i++) {
        tp += arr[i];
        
        if (tp >= n) {
            cout << i + 1 << endl;
            return 0;
        }

        if (i == 6) {
            i = -1;
        }
    }
}