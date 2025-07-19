#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while(T--) {
        int cs = 1;
        int n, d;
        cin >> n >> d;

        vector<int> arr, diffArr;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        for(int i = 0; i < n - d + 1; i++) {
            diffArr.push_back(max(arr[i + d - 1], arr[i]) - min(arr[i + d - 1], arr[i]));
        }

        cout << "Case " << cs << ": " <<*max_element(diffArr.begin(), diffArr.end()) << "\n";
    }
    return 0;
}