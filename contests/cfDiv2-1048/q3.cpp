#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long choco, vani, temp;
        vector<int> op;

        choco = x;
        vani = pow(2, k + 1) - x;
        

        while (choco != vani) {
            if (choco < vani) {
                temp = choco;
                choco *= 2;
                vani -= (choco - temp);
                op.push_back(1);
            } else if (choco > vani) {
                temp = vani;
                vani *= 2;
                choco -= (vani - temp);
                op.push_back(2);
            }
        }

        cout << op.size() << '\n';

        for (int i = op.size() - 1; i > -1; i--) {
            cout << op[i] << " ";
        }

        cout << '\n';
        
    }

    return 0;
}