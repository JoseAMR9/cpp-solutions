#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        string s; cin >> s;
        const string aux = "codeforces";
        int diff = 0;
        for(size_t i = 0; i < s.size(); i++){
            if(aux[i] != s[i]) differents++;
        }
        cout << diff << "\n";
    }
    
    return 0;
}