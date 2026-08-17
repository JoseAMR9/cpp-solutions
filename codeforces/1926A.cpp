#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        string s; cin >> s;
        int a = count(s.begin(), s.end(), 'A');
        int b = count(s.begin(), s.end(), 'B');
        cout << (a > b ? "A\n" : "B\n");
    }
    
    return 0;
}