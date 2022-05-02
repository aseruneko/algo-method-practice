#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i ++) {
        cin >> A[i];
    }
    int count = 0;
    int before = A[0];
    for(int i = 1; i < N; i ++) {
        if(before < A[i]) count ++;
        before = A[i]; 
    }
    cout << count << endl;
}