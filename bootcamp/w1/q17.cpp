#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    

    while (t--) {
        string p;
        getline(cin, p);

        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        stringstream ss1(s1), ss2(s2);

        vector<int> vecInt;
        vector<pair<int, string>> vec;

        int x;
        while (ss1 >> x) {
            vecInt.push_back(x);
        }

        for (int i = 0; i < vecInt.size(); i++) {
            string s;
            ss2 >> s;
            vec.push_back({vecInt[i], s});
        }

        sort(vec.begin(), vec.end());

        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i].second << "\n";
        }
        if (t) cout << "\n";
    }

    return 0;
}