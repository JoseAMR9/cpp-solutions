#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        int sm = 0;
        
        for(int i = 0; i < n - 1; i++){
            int a; cin >> a;
            sm += a;
            
        }
        cout << -sm << "\n";
    }
    
    return 0;
}