#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int A, B;
    cin >> A >> B;
    int a = A % 10;
    int b = B % 10;
    cout << (a < b ? A : B) << endl; 
}