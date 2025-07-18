#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int N, M;
        cin >> N >> M;

        unordered_map<int, int> freq1, freq2;
        int tc = 0;

        for(int i = 0; i < N; i++) {
            int x;
            cin >> x;
            freq1[x]++;
            tc++;
        }

        for(int i = 0; i < M; i++) {
            int x;
            cin >> x;
            freq2[x]++;
            tc++;
        }

        int cmn = 0;

        for(auto el : freq1) {
            int val = el.first;
            if(freq2.find(val) != freq2.end()) {
                cmn += min(el.second, freq2[val]);
            }
        }

        int rv = tc - 2 * cmn;
        cout << rv << "\n";
    } 

    return 0;
}