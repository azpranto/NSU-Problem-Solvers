#include <iostream>

using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    if(t < 15) {
        for(int i = 0; i < t; i++) {
            cin >> a >> b;
            if(a > b) {
                cout << ">" << endl;
            } else if(b > a) {
                cout << "<" << endl;
            } else {
                cout << "=" << endl;
            }
        }
    } else {
        return 0;
    }
    return 0;
}