#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    priority_queue<int> devisors;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            devisors.push(-i);
            if(i != n / i) devisors.push(-(n / i));
        }
    }

    while(!devisors.empty()) {
        cout << -devisors.top() << " ";
        devisors.pop();
    }

    return 0;
}