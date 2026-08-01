#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(a > b || (a == b && c % 2 != 0)) cout << "First\n";
        else cout << "Second\n";
    }
    return 0;
}