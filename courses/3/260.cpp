#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i ++) cin >> S[i]; 
    bool hasSameString = false;
    for(int i = 0; i < N; i ++) {
        for(int j = i + 1; j < N; j ++) {
            if (S[i] == S[j]) hasSameString = true;
            if (hasSameString) break;
        }
        if (hasSameString) break;
    }
    cout << (hasSameString ? "Yes" : "No") << endl;
}