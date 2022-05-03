#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i ++) cin >> A[i];
    int count = 0;
    for(int i = 0; i < N; i ++) {
        for(int j = i + 1; j < N; j ++) {
            for(int k = j + 1; k < N; k ++) {
                if (A[i] <= A[j] && A[j] >= A[k]) count ++;
            }
        }
    } 
    cout << count << endl;
}