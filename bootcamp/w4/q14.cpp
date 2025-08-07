#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, W;
        cin >> n >> W;

        multiset<int> blocks;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            blocks.insert(x);
        }

        int height = 0;

        while (!blocks.empty()) {
            int space = W;
            while (true) {
                auto it = blocks.upper_bound(space);
                if (it == blocks.begin()) break; 
                --it;

                space -= *it;
                blocks.erase(it);
            }
            height++;
        }

        cout << height << "\n";
    }

    return 0;
}
