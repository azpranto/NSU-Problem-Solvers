#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, sav = 0, dcnt = 0;
    cin >> N;

    for(int i = 1; sav < N; i++) {
        sav += i;
        dcnt++;
        
    }
    cout << dcnt << "\n";
    return 0;
}