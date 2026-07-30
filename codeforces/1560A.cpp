#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        int counter = 0;
        int x = 1;
        while(counter < k){
            if(x % 3 != 0 && x % 10 != 3) counter++;
            x++;
        }
        cout << x - 1 << "\n";
    }
    return 0;
}