#include <bits/stdc++.h>

using namespace std;

void pFront(deque<int> &dq, int val) {
    dq.push_front(val);
}

void pBack(deque<int> &dq, int val) {
    dq.push_back(val);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t, check = 1;
    cin >> t;
    cin.ignore();

    bool rev = false;

    deque<int> dq;

    while (t--) {
        int val;
        string s, cmd;
        getline(cin, s);
        stringstream ss(s);
        ss >> cmd;

        if (cmd == "toFront") {
            ss >> val;
            if (rev) {
                pBack(dq, val);
            } else {
                pFront(dq, val);
            }
        } else if (cmd == "front") {
            if (!dq.empty()) {
                if (rev) {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                } else {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if (cmd == "back") {
            if (!dq.empty()) {
                if (rev) {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                } else {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if (cmd == "push_back") {
            ss >> val;
            if (rev) {
                pFront(dq, val);
            } else {
                pBack(dq, val);
            }
        } else if (cmd == "reverse") {
            if (check % 2 == 1) {
                rev = true;
            } else {
                rev = false;
            }
            check++;
        }
    }

    return 0;
}