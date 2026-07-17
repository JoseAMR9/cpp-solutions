#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    string s; cin >> s;
    set<char> letters;
    
    for(char c : s){
        c = tolower(c);
        letters.insert(c);
    }
    
    if(letters.size() < 26) cout << "NO";
    else cout << "YES";
    
    return 0;
}