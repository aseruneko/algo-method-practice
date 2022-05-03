#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int L, R;
    cin >> L >> R;
    int count = 0;
    for(int i = L; i <= R; i ++) {
        count += (R - i) / 10;
    } 
    cout << count << endl;
}