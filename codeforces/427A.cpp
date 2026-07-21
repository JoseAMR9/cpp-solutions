#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> vec;
    
    while(n--){
        int a; cin >> a;
        vec.push_back(a);
    }
    
    int officer = 0;
    int count = 0;
    for(size_t i = 0; i < vec.size(); i++){
        
        if(vec[i] > 0){
            officer += vec[i];
        }
        else{
            
            if(officer == 0){
                count++;
            }else{
                officer--;
            }
            
        }
        
    }
    cout << count;
    return 0;
}