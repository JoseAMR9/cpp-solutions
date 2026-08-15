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
        
        int mn = *min_element(vec.begin(), vec.end());
        bool ok = false;
        int product = 1;
        
        for(int i = 0; i < n; i++){
            if(vec[i] == mn && !ok){
                ok = true;
                product *= (mn + 1);
                continue;
            }
            product *= vec[i];
        }
        cout << product << "\n";
    }
    return 0;
}