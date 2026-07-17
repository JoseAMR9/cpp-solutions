#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 4;
    set<int> horseshoes;
    
    while(n--){
        int s; cin >> s;
        horseshoes.insert(s);
    }
    cout << 4 - horseshoes.size();
    return 0;
}