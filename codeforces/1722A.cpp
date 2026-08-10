#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string s; cin >> s;
        
        if(n != 5){
            cout << "NO\n";
            continue;
        }
        sort(s.begin(), s.end());
        if(s[0] == 'T' && s[1] == 'i' && s[2] == 'm' && s[3] == 'r' && s[4] == 'u') cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}