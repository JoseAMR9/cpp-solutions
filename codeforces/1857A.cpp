#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        int sm = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            sm += a;
        }
        cout << (sm % 2 == 0 ? "YES\n" : "NO\n");
    }
    
    return 0;
}