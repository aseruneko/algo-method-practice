#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int X, Y, Z;
    cin >> X >> Y >> Z;
    vector<int> A(X);
    vector<int> B(Y);
    vector<int> C(Z);
    for(int i = 0; i < X; i++){
        cin >> A[i];
    } 
    for(int i = 0; i < Y; i++){
        cin >> B[i];
    } 
    for(int i = 0; i < Z; i++){
        cin >> C[i];
    } 
    int count = 0;
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++) {
            for(int k = 0; k < Z; k++) {
                if(A[i] + B[j] == C[k]) count ++;
            }
        }
    }
    cout << count << endl;
}