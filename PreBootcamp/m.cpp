#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int cid = 1;

    while (true) {
        getline(cin, str);
        if (str == "*") {
            break;
        }
        if (str == "Hajj") {
            cout << "Case " << cid << ":" << " Hajj-e-Akbar\n";
        } else if (str == "Umrah") {
            cout << "Case " << cid << ":" << " Hajj-e-Asghar\n";
        }
        cid++;
    }

    return 0;
}
