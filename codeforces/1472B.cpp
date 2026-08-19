#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        
        vector<int> vec(n);
        int sm = 0;
        
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            sm += vec[i];
        }
        
        if(sm % 2 != 0){
            cout << "NO\n";
            continue;
        }
        
        int half = sm / 2;
        int total = 0;
        
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        
        for(int i = 0; i < n; i++){
            if(total + vec[i] <= half){
                total += vec[i];
            }
        }
        
        if(total == half) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}