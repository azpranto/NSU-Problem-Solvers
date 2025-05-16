#include <iostream>

using namespace std;

int main() {
    long long int lucky;

    cin >> lucky;

    while (lucky != 0) {
        if(lucky % 10 != 4 || lucky % 10 != 7) {
            cout << "NO" << endl;
            return 0;
        }
        lucky /= 10;
    }
    cout << "YES" << endl;
    return 0;
}