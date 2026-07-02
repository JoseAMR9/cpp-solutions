#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int>gifts;
    
    while(n--){
        int p; cin >> p;
        gifts.push_back(p);
    }
    
    vector<int> result;
    for(size_t i = 0; i < gifts.size(); i++){
        
        for(size_t j = 0; j < gifts.size(); j++){
            if(i == gifts[j] - 1) result.push_back(j + 1);
        }
        
    }
    
    for(size_t i = 0; i < result.size(); i++){
        cout << result[i];
        if(i < result.size() - 1) cout << " ";
    }
    return 0;
}