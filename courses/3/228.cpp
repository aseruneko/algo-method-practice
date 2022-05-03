#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S;
    cin >> S;
    char before = S[0];
    int count = 0;
    for(int i = 1; i < S.length(); i ++) {
        if (before == S[i]) count ++;
        before = S[i];
    } 
    cout << count << endl;
}