#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    
    if(n == 1) cout << "I hate it";
    else{
        
        for(int i = 1; i <= n; i++){
            if(i == n && i % 2 == 1){
                cout << "I hate it";
                continue;
            }
            if(i == n && i % 2 == 0){
                cout << "I love it";
                continue;
            }
            if(i % 2 == 1) cout << "I hate that ";
            else cout << "I love that ";
        }
    
        
    }
    return 0;
}