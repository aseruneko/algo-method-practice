#include <bits/stdc++.h> 
using namespace std;

int countDivisors(int x) {
    int count = 0;
    for (int i = 1; i <= x; i ++) {
        if (x % i == 0) count ++;
    }
    return count;
}

int main() { 
    int N, K;
    cin >> N >> K;
    int count = 0;
    for (int i = 1; i <= N; i ++) {
        if (countDivisors(i) == K) count ++;
    }
    cout << count << endl;
}