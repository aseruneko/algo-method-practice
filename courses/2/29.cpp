#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << max(max(A, B), max(C, D)) << endl; 
}