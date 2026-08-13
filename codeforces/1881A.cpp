#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n, m; cin >> n >> m;
        string x; cin >> x;
        string s; cin >> s;
        int operations = 0;
        
        while(x.size() < s.size()){
            x += x;
            operations++;
        }
        if(x.find(s) != string::npos){
            cout << operations << "\n";
            continue;
        }
        x += x;
        operations++;
        if(x.find(s) != string::npos) cout << operations << '\n';
        else cout << -1 << '\n';
        
    }
    return 0;
}