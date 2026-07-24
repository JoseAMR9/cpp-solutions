#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int k, r; cin >> k >> r;
    int n = 1;
    
    while(true){
        int precio = k * n;
        if(precio % 10 == 0 || precio % 10 == r){
            break;
        }
        n++;
    }
    cout << n;
    return 0;
}