#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n, x; cin >> n >> x;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        int mxFuel = vec[0];
        for(int i = 1; i < n; i++){
            mxFuel = max(vec[i] - vec[i - 1], mxFuel);
        }
        mxFuel = max((x - vec.back()) * 2, mxFuel);
        cout << mxFuel << "\n";
    }
    return 0;
}