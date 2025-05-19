#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;
    int price, quantity;
    while (T--) {
        cin >> price >> quantity;
        if(price > 1000) {
            double total = price * quantity * 0.9;
            cout << fixed << setprecision(6) << total << endl;
        } else {
            double total = price * quantity;
            cout << fixed << setprecision(6) << total << endl;
        }
    }
    return 0;
}