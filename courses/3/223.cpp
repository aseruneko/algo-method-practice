#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int A, B;
    cin >> A >> B;
    vector<int> divisorsOfA;
    vector<int> divisorsOfB;
    for (int i = 1; i <= A; i ++) {
        if (A % i == 0) divisorsOfA.push_back(i);
    }
    for (int i = 1; i <= B; i ++) {
        if (B % i == 0) divisorsOfB.push_back(i);
    }
    int gcd;
    for (int divisorA: divisorsOfA) {
        if (count(divisorsOfB.begin(), divisorsOfB.end(), divisorA)) gcd = divisorA;
    }
    cout << gcd << endl;
}