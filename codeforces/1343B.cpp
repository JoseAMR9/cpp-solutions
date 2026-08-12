#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        
        if(n % 4 != 0) {
            cout << "NO\n";
            continue;
        }
        
        vector<int> vec;
        int evenSum = 0;
        int oddSum = 0;

        for(int i = 2; i <= n; i += 2) {
            vec.push_back(i);
            evenSum += i;
        }

        for(int i = 1; i < n - 1; i += 2) {
            vec.push_back(i);
            oddSum += i;
        }
        vec.push_back(evenSum - oddSum);
        for(int n : vec) cout << n << " ";
        cout << "\n";
    }
    
    return 0;
}