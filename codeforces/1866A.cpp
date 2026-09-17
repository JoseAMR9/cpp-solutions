#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> vec(n);
    
    for(int i = 0; i < n ; i++){
        cin >> vec[i];  
        if(vec[i] < 0) vec[i] *= -1;
    }
    
    cout << *min_element(vec.begin(), vec.end()) << "\n"; 
    
    return 0;
}