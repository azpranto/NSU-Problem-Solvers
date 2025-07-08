//max fuel tank needed

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> compV;
        int i = 0;
        compV.push_back(v[0]); 
        while(true) {
            if(i == n - 1) {
                compV.push_back((k - v[i])*2);
                break;
            }
            compV.push_back(v[i+1] - v[i]);
            i++;   
        }
        sort(compV.begin(), compV.end());
        cout << compV[compV.size() - 1] << endl;
    }
    return 0;
}