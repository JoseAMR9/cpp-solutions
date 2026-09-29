#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mp[a]++;
        }
        
        bool is_ok = false;
        
        for(auto m : mp){
            if(m.second >= 3){
                is_ok = true;
                cout << m.first << "\n";
                break;
            }
        }
        if(!is_ok) cout << "-1\n";
    }
    return 0;
}