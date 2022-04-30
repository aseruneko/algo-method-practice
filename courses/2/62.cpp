#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int N;
    cin >> N;
    int left = 0;
    int right = 0;
    for(int i = 0; i < N; i ++){
        string temp;
        cin >> temp;
        if(temp == "left") {
            left ++;
        } else {
            right ++;
        }
    } 
    if (left > right) {
        cout << "left" << endl;
    } else if (left == right) {
        cout << "same" << endl;
    } else {
        cout << "right" << endl;
    }
}