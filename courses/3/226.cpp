#include <bits/stdc++.h> 
using namespace std;

int main() { 
    string S;
    char c;
    cin >> S >> c;
    cout << (count(S.begin(), S.end(), c) ? "Yes" : "No") << endl; 
}