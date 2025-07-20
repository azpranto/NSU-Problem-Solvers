#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> eln; 
    vector<pair<string, string>> elm;
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        eln[ip] = name;
    }

    for (int i = 0; i < m; i++) {
        string name, ip;
        cin >> name >> ip;
        elm.emplace_back(ip, name);
    }

    for(auto el : elm) {
        string pivot = el.first;
        pivot.pop_back();
        auto pos = eln.find(pivot);
        if (pos != eln.end()) {
            cout << el.second << " " << el.first << " #" << pos->second << "\n";
        }
    }

    return 0;
}