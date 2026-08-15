#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        string s; cin >> s;
        
        if(s.size() % 2 != 0){
            cout << "NO\n";
            continue;
        }
        
        int mid = s.size() / 2;
        string s1 = s.substr(0, mid);
        string s2 = s.substr(mid);
        
        cout << (s1 == s2 ? "YES\n" : "NO\n");
    }
    return 0;
}