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
        
        vector<int> b;
        vector<int> c;
        
        int mn = *min_element(vec.begin(), vec.end());
        int times = count(vec.begin(), vec.end(), mn);
        
        if(times == n){
            cout << -1 << "\n";
            continue;
        }
        
        for(int i = 0; i < n; i++){
            if(vec[i] != mn) c.push_back(vec[i]);
            else b.push_back(vec[i]);
        }
        
        cout << b.size() << " " << c.size() << "\n";
        for(size_t i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "\n";
        for(size_t i = 0; i < c.size(); i++){
            cout << c[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}