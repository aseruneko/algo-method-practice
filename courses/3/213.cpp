#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int max = -100;
    for(int i = 0; i < N; i ++) {
    int A;
    cin >> A;
    if (max < A) max = A;
    }
    cout << max << endl;
}