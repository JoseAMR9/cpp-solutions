#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string s; cin >> s;
        unordered_map<char,int> letters;
        
        for(char c : s){
            letters[c]++;
        }
        
        int nBalloons = 0;
        for(auto v : letters){
            nBalloons += v.second + 1;
        }
        cout << nBalloons << "\n";
    }
    return 0;
}