#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;
    
    map<char,int> names;
    
    for(char c : s1){
        names[c]++;
    }
    for(char c : s2){
        names[c]++;
    }
    for(char c : s3){
        names[c]--;
    }
    
    bool ok = true;
    for(auto p : names){
        if(p.second != 0){
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}