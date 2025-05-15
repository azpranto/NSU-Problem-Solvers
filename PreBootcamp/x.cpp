#include <iostream>

using namespace std;

int main() {
    long x1, y1, x2, y2;
    long count1 = 0, count2 = 0, count = 0;
    cin >> x1 >> y1 >> x2 >> y2;

    if((x1 == x2 && y1 == y2) == false) {
        if (x1 != x2) {
            count2 = abs(x2 - x1);
        }
        if (y1 != y2) {
            count1 = abs(y2 - y1);
        }
        count = max(count1, count2);
    }
    cout << count << endl;

    return 0;
}