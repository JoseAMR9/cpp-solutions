#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    int mx = 0;
    int totalPassengers = 0;
    while(n--){
        
        int a, b; cin >> a >> b;
        totalPassengers -= a;
        totalPassengers += b;
        mx = max(mx, totalPassengers);
        
    }
    cout << mx;
    return 0;
}