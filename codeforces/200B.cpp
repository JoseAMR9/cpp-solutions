#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    double total = 0;
    
    int aux = n;
    while(aux--){
        int p; cin >> p;
        total += double(p) / 100;
    }
    cout << total / n * 100;
    return 0;
}