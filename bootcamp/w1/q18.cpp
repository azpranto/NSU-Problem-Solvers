#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, cost = 0;
        cin >> n;
        vector<pair<char, int>> price;
        for (int i = 0; i < n; i++) {
            char c;
            int p;
            cin >> c >> p;
            price.push_back({c, p});
        }

        int lineC;
        cin >> lineC;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < lineC; i++) {
            string line;
            getline(cin, line);
            for (char c : line) {
                for (auto p : price) {
                    if (p.first == c) {
                        cost += p.second;
                        break;
                    }
                }
            }
        }
        cout << fixed << setprecision(2) << cost / 100.0 << "$\n";
    }

    return 0;
}