#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i ++) {
        cin >> A[i];
    }
    cout 
    << int(accumulate(A.begin(), A.end(), 0,
     [](int x, int y){ return x + y; }) / A.size()) 
     << endl; 
}