#include <bits/stdc++.h> 
using namespace std;

bool isPalindromeNumber(int x) {
    string xStr = to_string(x);
    int xLen = xStr.length();
    string first = xStr.substr(0, xLen / 2);
    string last = xStr.substr((xLen % 2 != 0 ? xLen / 2 + 1 : xLen / 2));
    reverse(last.begin(), last.end());
    return first == last;
}

int main() { 
    int L, R;
    cin >> L >> R;
    int count = 0;
    for (int i = L; i <= R; i ++) {
        if (isPalindromeNumber(i)) count ++;
    }
    cout << count << endl;
}