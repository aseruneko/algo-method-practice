#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int min = 100;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (min > A) min = A;
    }
    cout << min << endl;
}