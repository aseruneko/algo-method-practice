#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S, T;
    cin >> S >> T;
    bool matched = false;
    for (int i = 0; i <= S.length() - T.length(); i++) {
        int count = 0;
        for (int j = 0; j < T.length(); j ++) {
            if (S[i + j] == T[j]) {
                count ++;
            } else break;
        }
        if (count == T.length()) {
            matched = true;
            break;
        }
    }
    cout << (matched ? "Yes" : "No") << endl;
}