#include <iostream>

using namespace std;

int main() {
    int N, im, jm, temp;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int sorted = true;

    if(N < 2 || N > 50) {
        return 0;
    }

    for(int i = 0; i < N - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }
    if(sorted) {
        cout << "YES" << endl;
        return 0;
    } else {
        for(int i = 0; i < N; i++) {
            if(i == 0) {
                if(arr[i] > arr[i + 1]) {
                    im = i;
                    break;
                }
            } else if(i != N -1) {
                if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                    im = i;
                    break;
                }
            } else {
                if(arr[i] > arr[i - 1]) {
                    im = i;
                    break;
                }

            }
        }
        for(int i = N - 1; i >= 0; i--) {
            if(i == N - 1) {
                if(arr[i] < arr[i - 1]) {
                    jm = i;
                    break;
                }
            } else if(i != 0) {
                if(arr[i] < arr[i + 1] && arr[i] < arr[i - 1]) {
                    jm = i;
                    break;
                }
            } else {
                if(arr[i] < arr[i + 1]) {
                    jm = i;
                    break;
                }
            }
        }
        temp = arr[im];
        arr[im] = arr[jm];
        arr[jm] = temp; 
    }
    sorted = true;
    for(int i = 0; i < N - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }
    if(sorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}