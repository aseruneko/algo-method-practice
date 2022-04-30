#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S;
    int N, M;
    cin >> S >> N >> M;
    char n = S[N-1];
    char m = S[M-1];
    cout << S.replace(N-1,1,{m}).replace(M-1,1,{n}) << endl; 
}