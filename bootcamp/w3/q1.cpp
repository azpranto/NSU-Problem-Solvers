// link for this contest >> https://vjudge.net/contest/730556#overview

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int x;

    while(cin >> x) {
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<pair<int, int>> ans;

    int el = v[0];
    int freq = 1;

    for(int i = 1; i <= v.size(); i++) {

        if (v[i] != el) {
            ans.push_back({el, freq});
            el = v[i];
            freq = 1;
        } else {
            freq++; 
        }
        
    }

    for(auto p : ans) {
        cout << p.first << " " << p.second << "\n";
    }
    
    return 0;
}