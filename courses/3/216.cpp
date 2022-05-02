#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    int V;
    cin >> N;
    cin >> V;
    int index = -1;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (A == V) index = i; 
    }
    cout << index << endl;
}