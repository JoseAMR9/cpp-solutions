#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int milliliters = k * l;
    int toast = milliliters / nl;
    int limes = c * d;
    int salt = p / np;
    cout << min({toast, limes, salt}) / n;
    return 0;
}