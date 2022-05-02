#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    vector<int> counts = {0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < N; i ++) {
        int A;
        cin >> A;
        counts[A-1] ++;
    }
    int max = 0;
    int maxIndex = 0;
    for(int i = 0; i < counts.size(); i ++){
        if (max < counts[i]) {
            max = counts[i];
            maxIndex = i;
        }
    }
    cout << (maxIndex + 1) << endl;
}