#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    int mx = max({a,b,c,d});
    
    if(mx - a != 0) cout << mx - a << " ";
    if(mx - b != 0) cout << mx - b << " ";
    if(mx - c != 0) cout << mx - c << " ";
    if(mx - d != 0) cout << mx - d;
    
    return 0;
}