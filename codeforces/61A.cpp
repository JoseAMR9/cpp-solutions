#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1, s2; cin >> s1 >> s2;
    string rpta = "";
    
    for(size_t i = 0; i < s1.size(); i++){
        
        if(s1[i] != s2[i]) rpta += "1";
        else rpta += "0";
        
    }
    cout << rpta;
    return 0;
}