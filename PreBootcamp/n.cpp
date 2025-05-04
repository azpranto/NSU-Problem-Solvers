#include <iostream>

using namespace std;

int main() {
    int T;
    int X, Y, Z;
    float rat;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> X >> Y >> Z;
        rat = Z / (float)(X * Y);
        if (rat > 0.5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}