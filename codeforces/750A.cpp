#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k; cin >> n >> k;
    int totalMinutes = 240 - k;
    int counter = 0;
    int sm = 0;

    for(int i = 1; i <= n; i++){
        int tiempo = 5 * i;
        if(sm + tiempo > totalMinutes) break;
        sm += tiempo;
        counter++;
    }
    cout << counter;
    return 0;
}