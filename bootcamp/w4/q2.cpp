#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q;
    cin >> n >> k >> q;
    
    int freq[200001] = {0};
    int prefS[200001] ={0};
    
    while (n--) {
        int i, j;
        cin >> i >> j;

        freq[i]++;
        freq[j + 1]--;
    }

    for (int i = 1; i <= 200001; i++) {
        freq[i] += freq[i - 1];
    }

    for (int i = 1; i <= 200001; i++) {
        prefS[i] = prefS[i - 1] + (freq[i] >= k ? 1 : 0);
    }

    while(q--) {
        int i, j;
        cin >> i >> j;
        cout << (prefS[j] - prefS[i - 1]) << '\n';
    }
    return 0;
}