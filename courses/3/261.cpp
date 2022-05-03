#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < N; i ++) {
        for (int j = i + 1; j < N; j ++) {
            if (S[i] == S[j]) count ++;
        }
    } 
    cout << count << endl;
}