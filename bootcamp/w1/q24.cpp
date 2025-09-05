#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s, num;

    while (getline(cin, s) && s != "#") {
        if (s.empty()) continue;

        long long val = 0;
        bool nega = false;
        long long mil = 0, thou = 0, hun = 0;

        stringstream ss(s);
        
        while (ss >> num) {
            if (num == "negative") {
                nega = true;
            } else if (num == "zero") {
                val += 0;
            } else if (num == "one") {
                val += 1;
            } else if (num == "two") {
                val += 2;
            } else if (num == "three") {
                val += 3;
            } else if (num == "four") {
                val += 4;
            } else if (num == "five") {
                val += 5;
            } else if (num == "six") {
                val += 6;
            } else if (num == "seven") {
                val += 7;
            } else if (num == "eight") {
                val += 8;
            } else if (num == "nine") {
                val += 9;
            } else if (num == "ten") {
                val += 10;
            } else if (num == "eleven") {
                val += 11;
            } else if (num == "twelve") {
                val += 12;
            } else if (num == "thirteen") {
                val += 13;
            } else if (num == "fourteen") {
                val += 14;
            } else if (num == "fifteen") {
                val += 15;
            } else if (num == "sixteen") {
                val += 16;
            } else if (num == "seventeen") {
                val += 17;
            } else if (num == "eighteen") {
                val += 18;
            } else if (num == "nineteen") {
                val += 19;
            } else if (num == "twenty") {
                val += 20;
            } else if (num == "thirty") {
                val += 30;
            } else if (num == "forty") {
                val += 40;
            } else if (num == "fifty") {
                val += 50;
            } else if (num == "sixty") {
                val += 60;
            } else if (num == "seventy") {
                val += 70;
            } else if (num == "eighty") {
                val += 80;
            } else if (num == "ninety") {
                val += 90;
            } else if (num == "million") {
                mil = val * 1000000;
                val = 0;
            } else if (num == "thousand") {
                thou = val * 1000;
                val = 0;
            } else if (num == "hundred") {
                val += val * 100 - val;
            }       
        }

        cout << (nega ? -(mil + thou + hun + val) : (mil + thou + hun + val)) << '\n';
    }

    return 0;
}