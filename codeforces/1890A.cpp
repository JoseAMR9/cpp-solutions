#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        
        if(mp.size() > 2){
            cout << "NO\n";
            continue;
        }
        if(mp.size() == 1){
            cout << "YES\n";
            continue;
        }
        
        vector<int> freq;
        for(auto m : mp){
            freq.push_back(m.second);
        }
        cout << (abs(freq[0] - freq[1]) <= 1 ? "YES\n" : "NO\n");
    }
    return 0;
}