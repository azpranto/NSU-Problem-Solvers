#include <iostream>

using namespace std;

int main() {
    int n;
    float pos = 0, neg = 0, zero = 0;
    cin >> n;
    float arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > 0) {
            pos++;
        } else if(arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << zero / n << endl;
    
    return 0;
}