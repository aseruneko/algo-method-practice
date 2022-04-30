#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i ++) {
        cin >> A[i];
    }
    string emp = "";
    cout << accumulate(A.begin(), A.end(), emp, [](string x, int y){
        return x + (y % 3 == 0 ? to_string(y) + "\n" : "");
    }) << endl;
}