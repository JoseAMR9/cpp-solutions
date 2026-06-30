#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    int sm = 0;
    
    while(n--){
        int a; cin >> a;
        sm += a;
    }
    
    if(sm >= 1) cout << "HARD";
    else cout << "EASY";
    
    return 0;
}