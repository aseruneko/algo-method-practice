#include <bits/stdc++.h> 
using namespace std;

int main() { 
    int time = 480 + ceil(1.0 * (660 - 480) / 13) * 13;
    int hour = time / 60;
    int minute = time % 60;
    cout << (hour < 10 ? "0" + to_string(hour) : to_string(hour) + ":" + (minute < 10 ? "0" + to_string(minute) : to_string(minute))) << endl; 
}