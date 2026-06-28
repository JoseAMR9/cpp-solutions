#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin >> s;
    
    string str = "";
    for(char c : s){
        if(c != '+') str += c;
    }
    
    sort(str.begin(), str.end());
    
    string result = "";
    
    for(char c : str){
        result += c;
        result += "+";
    }
    result.pop_back();
    cout << result;
    return 0;
}