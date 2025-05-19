#include <iostream>

using namespace std;

int main() {
    const int lim = 1000000;
    static bool vec[lim] = { false };
    int temp, rem, remR;

    for(int i = 1; i <= lim; i++) {
        temp = i;
        remR = i;

        while(temp != 0) {
            rem = temp % 10;
            remR += rem;
            temp /= 10;
        }

        if(remR <= lim) {
            vec[remR - 1] = true;
        }
    }

    for(int i = 0; i < lim; i++) {
        if(!vec[i]) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
