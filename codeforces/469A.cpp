#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    set<int> levels;
    
    int p; cin >> p;
    while(p--){
        int a; cin >> a;
        levels.insert(a);
    }
    
    int q; cin >> q;
    while(q--){
        int b; cin >> b;
        levels.insert(b);
    }
    
    if(levels.size() == n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
    
}