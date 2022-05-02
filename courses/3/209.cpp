#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int V;
    cin >> V;
    bool flag = false;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (A == V) {
            flag = true;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
}