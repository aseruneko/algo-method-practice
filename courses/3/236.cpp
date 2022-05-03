#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S;
    cin >> S;
    vector<char> usedAlphabets;
    for (char s: S) {
        if (count(usedAlphabets.begin(), usedAlphabets.end(), s) == 0) {
            usedAlphabets.push_back(s);
        }
    } 
    cout << usedAlphabets.size() << endl;
}

// 制約で文字列の長さが100以下なので、アルファベットでループしたほうが速いっすね。