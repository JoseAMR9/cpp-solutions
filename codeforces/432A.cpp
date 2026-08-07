#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k; cin >> n >> k;
    int counter = 0;
    
    for(int i = 0; i < n; i++){
        int y; cin >> y;
        if(5 - y >= k) counter++;
    }
    cout << counter / 3;
    return 0;
}