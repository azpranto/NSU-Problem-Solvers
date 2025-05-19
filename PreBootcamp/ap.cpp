#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while(true) {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) {
            return 0;
        } else if(a > b && a > c) {
            if(b * b + c * c == a * a) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        } else if(b > a && b > c) {
            if(a * a + c * c == b * b) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        } else if(c > a && c > b) {
            if(a * a + b * b == c * c) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        }
        else if(a == b && a == c) {
            cout << "wrong" << endl;
        } else if(a == b) {
            if(c * c + a * a == b * b) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        } else if(b == c) {
            if(a * a + b * b == c * c) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        } else if(a == c) {
            if(b * b + a * a == c * c) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        }
        else {
            cout << "wrong" << endl;
        }

    }
}