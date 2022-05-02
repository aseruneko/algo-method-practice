#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int V;
    cin >> V;
    int count = 0;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (A == V) {
            count ++;
        }
    }
    cout << count << endl;
}