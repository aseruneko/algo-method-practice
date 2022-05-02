#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> counts = {0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        counts[A-1] ++;
    }
    for(int count: counts) {
        cout << count << endl;
    }
}