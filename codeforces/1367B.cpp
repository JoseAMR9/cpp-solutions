#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        int evenWrong = 0;
        int oddWrong = 0;
        
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(i % 2 == 0 && x % 2 != 0) oddWrong++;
            else if(i % 2 != 0 && x % 2 == 0) evenWrong++;
        }
        
        if(evenWrong != oddWrong){
            cout << "-1\n";
            continue;
        }
        cout << (evenWrong + oddWrong) / 2 << "\n";
    }
    
    return 0;
}