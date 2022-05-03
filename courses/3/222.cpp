#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int isPrime = true;
    if (N == 1) isPrime = false;
    for (int i = 2; i < N; i ++) {
        if (N % i == 0) isPrime = false;
    }
    cout << (isPrime ? "Yes" : "No") << endl;
}   