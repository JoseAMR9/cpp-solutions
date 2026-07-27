#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string s; cin >> s;
        
        int originalString = n;
        int i = 0, j = n - 1;
        while(i < j && s[i] != s[j]){
            originalString -= 2;
            i++;
            j--;
        }
        cout << originalString << "\n";
    }
    return 0;
}