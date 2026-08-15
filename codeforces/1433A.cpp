#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int x; cin >> x;
        int total;
        
        if(x == 1){
            total = 1;
        }
        else{
            total = 10 * (x % 10 - 1);
            int digits = to_string(x).size();
            for(int i = 1; i <= digits; i++){
                total += i;
            }
        }
        cout << total << "\n";
        
    }
    return 0;
}