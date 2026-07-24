#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n, k; cin >> n >> k;
        vector<int> boxes;
        while(n--){
            int number; cin >> number;
            boxes.push_back(number);
        }
        if(is_sorted(boxes.begin(), boxes.end()) || k != 1) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}