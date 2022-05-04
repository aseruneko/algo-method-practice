#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int U, T, A;
    cin >> U >> T >> A;
    int time = U;
    while(time < A) {
        time += T;
    } 
    cout << time <<  endl;
}