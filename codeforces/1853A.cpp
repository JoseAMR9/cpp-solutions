#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        
        if(!is_sorted(vec.begin(), vec.end())){
            cout << 0 << "\n";
            continue;
        }
        
        int mn = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            mn = min(mn, vec[i + 1] - vec[i]);
        }
        cout << mn / 2 + 1 << '\n';
    }
    return 0;
}