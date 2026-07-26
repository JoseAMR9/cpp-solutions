#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int a, b; cin >> a >> b;
        int total = abs(a - b);
        if(total % 10 == 0) cout << total / 10 << "\n";
        else cout << total / 10 + 1 << "\n";
    }
    return 0;
}