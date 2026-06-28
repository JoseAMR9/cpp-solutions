#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    unordered_map<char,int> m;
    
    for(char c : s){
        m[c]++;
    }
    if (m.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    return 0;
}