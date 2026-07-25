#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        int counter = 0;
        int mx = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a == 0){
                counter++;
            }
            else{
                mx = max(counter, mx);
                counter = 0;
            }
        }
        mx = max(counter, mx);
        cout << mx << endl;
    }
    
    return 0;
}