#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int max = 0;
    int index = 0;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (max < A) {
            max = A;
            index = i;
        }
    }
    cout << index << endl;
}