#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<int, int> freq;


    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (freq.find(x) != freq.end()) {
            freq[x]++;
        } else {
            freq[x] = 1;
        }
    }

    
    vector<pair<int, int>> copyFreq(freq.begin(), freq.end());
    sort(copyFreq.begin(), copyFreq.end());
    int vboxes = copyFreq[0].second;

    for(int i = 0; i < copyFreq.size() - 1; ++i) {
        if (copyFreq[i].second <= copyFreq[i+1].second) vboxes = max(vboxes, copyFreq[i+1].second);
        else continue;
    }
    cout << vboxes << "\n";
    return 0;
}