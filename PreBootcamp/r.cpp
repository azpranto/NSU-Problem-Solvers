#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int T;
    double len;
    const double pi = acos(-1);
    cin >> T;
    while(T != 0) {
        cin >> len;
        double wid = (len * 6) / 10;
        double area = len * wid;
        double arCirc = pi * (len / 5) * (len / 5);
        double grnPrt = area - arCirc;
        cout << fixed << setprecision(2) << arCirc << " " << grnPrt << endl;
        T--;
    }
    return 0;
}