#include <bits/stdc++.h>

using namespace std;

vector<int> gv; // Global vector

int main() {
    // use faster IO method, input is large
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;

    // v.push_back(1);
    // v.pop_back();
    // v.clear();

    // v.push_back(2);
    // cout << v[0] << endl;
    
    /* cout << v.capacity() << endl; // Output the capacity of the vector

    v.push_back(1);
    v.push_back(1);

    cout << v.capacity() << endl; // Output the capacity of the vector

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    cout << v.capacity() << endl; // Output the capacity of the vector

    //capacity of a vector is doubled when it is full and we try to add more elements

    return 0; */

    deque<int> dq;
    // deque is a double-ended queue, it can be used like a vector. we can push and pop elements from both ends.

    dq.push_back(1); // Add 1 to the back
    dq.push_front(2); // Add 2 to the front

    /* for(int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " "; // Output the elements in the deque
    } */

    /* for(int i : dq) {
        cout << i << " "; // Output the elements in the deque using range-based for loop
    } */

    vector<int> v1(10, 1); // Create a vector of size 10, initialized with 1s

    gv.assign(10, 2); // Assign 10 elements with value 2 to the global vector

    //l-value, r-value, and r-value reference

    string s = "Hello";
    s.pop_back(); // Remove the last character from the string
    cout << s << endl; // Output the modified string

    string t = "World";
    s = s + t; // Concatenate strings s and t
    cout << s << endl; // Output the concatenated string

    //cin works until it encounters a whitespace character

    string input;
    getline(cin, input); // Read a line of input including spaces
    cout << input << endl; // Output the input string

}