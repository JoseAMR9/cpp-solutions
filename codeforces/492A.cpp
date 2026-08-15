#include <bits/stdc++.h>
using namespace std;

int nextLevel(int x){
    return x * (x + 1) / 2;
}

int main() {
    
    int n; cin >> n;
    int levels = 1;
    int total = 1;
    int next = nextLevel(levels + 1);
    
    while(total + next <= n){
        levels++;
        total += next;
        next = nextLevel(levels + 1);
    }
    cout << levels;
    
    return 0;
}