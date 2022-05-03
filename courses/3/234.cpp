#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int x) {
    if (x == 1) {
        return false;
    } else {
        bool prime = true;
        for(int i = 2; i < x; i ++) {
            if (x % i == 0) {
                prime = false;
                break;
            }
        }
        return prime;
    }
}

int main() { 
    int N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        if (isPrime(A)) count ++;
    }
    cout << count << endl;
}