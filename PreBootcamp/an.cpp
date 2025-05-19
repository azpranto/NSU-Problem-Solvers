#include <iostream>

using namespace std;

int main() {
    int n, x, y, z;
    int xc = 0, yc = 0, zc = 0;
    cin >> n;
    while(n--) {
        cin >> x >> y >> z;
        xc += x;
        yc += y;
        zc += z;
    }
    if(xc == 0 && yc == 0 && zc == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}