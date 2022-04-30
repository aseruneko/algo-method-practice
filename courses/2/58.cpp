#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    string ans = "";
    for(int i = 0; i < N; i ++) {
        string temp;
        cin >> temp;
        ans += temp[0];
    }
    cout << ans << endl;
}