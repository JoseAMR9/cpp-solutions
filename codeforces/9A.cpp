#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int y, w; cin >> y >> w;
    int favorable = 7 - max(y, w);
    int g = gcd(favorable, 6);
    cout << favorable / g << "/" << 6 / g;
    
    return 0;
}