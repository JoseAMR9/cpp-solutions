#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        
        int c2 = n / 3; // 26
        int c1 = n - (c2 * 2); // 28
        int difference = abs(c2 - c1);
        
        while(difference > 1){
            c2++;
            c1 = n - (c2 * 2);
            difference = abs(c2 - c1);
        }
        cout << c1 << " " << c2 << "\n";
    }
    
    return 0;
}