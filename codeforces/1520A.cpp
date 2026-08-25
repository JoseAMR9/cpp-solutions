#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string s; cin >> s;
        
        vector<char> vec;
        bool is_ok = true;
        for(int i = 0; i < n; i++){
            
            auto it = find(vec.begin(), vec.end(), s[i]);
            
            if(it == vec.end()){
                vec.push_back(s[i]);
            }
            else{
                if(s[i] != s[i - 1]){
                    is_ok = false;;
                    break;
                }
            }
            
        }
        cout << (is_ok ? "YES\n" : "NO\n");
    }
    
    return 0;
}