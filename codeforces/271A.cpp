#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    string result;
    n += 1;
    
    while(true){
        
        string s = to_string(n);
        unordered_map<char,int> years;
        int count = 0;
        
        for(const auto &c : s){
            years[c]++;
        }
        
        for(const auto &pair : years){
            if(pair.second < 2) count++;
        }
        
        if(count == 4){
            result = s;
            break;
        }else{
            n++;
        }
        
    }
    cout << result;
    return 0;
}