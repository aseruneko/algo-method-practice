#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(string s) {
    int sLen = s.length();
    string first = s.substr(0, sLen / 2);
    string last = s.substr(sLen % 2 != 0 ? sLen / 2 + 1 : sLen / 2);
    reverse(last.begin(), last.end());
    return first == last;
}

int main() { 
    int N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N; i ++) {
        string A;
        cin >> A;
        if (isPalindrome(A)) count ++;
    }
    cout << count << endl;
}