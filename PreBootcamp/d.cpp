#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    int n;

    for(int i = 0; i < 3; i++) {
        cin >> n;
        vec1.push_back(n);
    }

    for(int i = 0; i < 3; i++) {
        cin >> n;
        vec2.push_back(n);
    }

    int alice = 0, bob = 0;
    for(int i = 0; i < 3; i++) {
        if(vec1[i] > vec2[i]) {
            alice++;
        } else if(vec1[i] < vec2[i]) {
            bob++;
        } else {
            continue;
        }
    }

    vec3.push_back(alice);
    vec3.push_back(bob);
    
    for(int i = 0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }


    return 0;
}