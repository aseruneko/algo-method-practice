#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S;
    cin >> S;
    int len = S.length();
    string first = S.substr(0, len / 2);
    string last = S.substr(len % 2 == 0 ? len / 2 : len / 2 + 1);
    reverse(last.begin(), last.end());
    cout << (first == last ? "Yes" : "No") << endl; 
}