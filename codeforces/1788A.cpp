#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        vector<int> vec(n);
        int count = 0;
        
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            if(vec[i] == 2) count++;
        }
        
        if(count == 0) cout << 1 << "\n";
        else if(count % 2 != 0) cout << -1 << "\n";
        else{
            
            count /= 2;
            for(int i = 0; i < n; i++){
                if(vec[i] == 2) count--;
                if(count == 0){
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
    
    return 0;
}