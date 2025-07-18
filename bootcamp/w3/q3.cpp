#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int to_rmv = 0;

    unordered_map<int, int> freq;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for(auto iter : freq) {
        if(iter.first > iter.second) {
            to_rmv += iter.second;
        } else if(iter.first < iter.second) {
            to_rmv += iter.second - iter.first;
        } else {
            continue;
        }
    }
    cout << to_rmv << "\n";
    return 0;
}