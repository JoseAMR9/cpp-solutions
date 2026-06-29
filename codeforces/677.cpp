#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, h; cin >> n >> h;
    
    int total = 0;
    
    while(n--){
        int a; cin >> a;
        if(a <= h) total += 1;
        else total += 2;
    }
    cout << total;
    return 0;
}