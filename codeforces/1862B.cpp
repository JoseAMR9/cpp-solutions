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
        
        vector<int> result;
        result.push_back(vec[0]);
        
        for(int i = 0; i < n - 1; i++){
            result.push_back(vec[i + 1]);
            if(vec[i] > vec[i + 1]){
                result.push_back(vec[i + 1]);
            }
        }
        
        cout << result.size() << "\n";
        for(int i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}