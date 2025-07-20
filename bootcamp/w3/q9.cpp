#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int datasets;
    cin >> datasets; 

    while (datasets--) {
        int n;
        cin >> n;
        cin.ignore(); //getchar();

        string unfld, fld;
        map<string, int> entries;

        while (n--) {
            cin >> unfld;
            fld.clear();

            for (int i = 0; i < unfld.size(); i++) {
                if (unfld[i] == '-') {
                    continue;
                } else if (unfld[i] >= '0' && unfld[i] <= '9') {
                    fld.push_back(unfld[i]);
                } else if (unfld[i] == 'A' || unfld[i] == 'B' || unfld[i] == 'C') {
                    fld.push_back('2');
                } else if (unfld[i] == 'D' || unfld[i] == 'E' || unfld[i] == 'F') {
                    fld.push_back('3');
                } else if (unfld[i] == 'G' || unfld[i] == 'H' || unfld[i] == 'I') {
                    fld.push_back('4');
                } else if (unfld[i] == 'J' || unfld[i] == 'K' || unfld[i] == 'L') {
                    fld.push_back('5');
                } else if (unfld[i] == 'M' || unfld[i] == 'N' || unfld[i] == 'O') {
                    fld.push_back('6');
                } else if (unfld[i] == 'P' || unfld[i] == 'R' || unfld[i] == 'S') {
                    fld.push_back('7');
                } else if (unfld[i] == 'T' || unfld[i] == 'U' || unfld[i] == 'V') {
                    fld.push_back('8');
                } else if (unfld[i] == 'W' || unfld[i] == 'X' || unfld[i] == 'Y') {
                    fld.push_back('9');
                }
            }

            entries[fld]++;

        }

        bool found = false;
        for (auto el : entries) {
            if (el.second > 1) {
                found = true;
                cout << el.first.substr(0, 3) << "-" << el.first.substr(3) << " " << el.second << "\n";
            }
        }
        if (!found) {
            cout << "No duplicates.\n";
        }
        if (datasets != 0) cout << "\n"; //crucial for formatting output

    }

    return 0;
}
