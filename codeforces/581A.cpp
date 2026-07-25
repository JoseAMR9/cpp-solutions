#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b; cin >> a >> b;

    int same = 0;
    int mn = min(a,b);
    int mx = max(a,b);
    mx -= mn;
    
    while(mx > 1){
        mx -= 2;
        same++;
    }
    cout << mn << " " << same;
    return 0;
}