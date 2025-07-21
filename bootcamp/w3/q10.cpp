#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T, sceneC = 1;
    cin >> T;

    while (T--) {
        int N, R;
        cin >> N >> R;
        unordered_map<int, int> spy, spied;

        for (int i = 0; i < R; i++) {
            int a, b;
            cin >> a >> b;
            spy[a]++;
            spied[b]++;
        }
        bool found = false;
        for (auto el : spied) {
            if (spy[el.first] > 0) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Scenario #" << sceneC << ": spied\n";
        } else {
            cout << "Scenario #" << sceneC << ": spying\n";
        }
        sceneC++;
    }
    return 0;
}