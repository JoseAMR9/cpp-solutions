#include <iostream>

using namespace std;

int main() {
    int k, n, w; cin >> k; cin >> n; cin >> w;
    int total = 0;
    for(int i = 1; i <= w; i++){
        total += k * i;
    }

    int totalBorrow = total - n;
    if(totalBorrow <= 0) cout << "0";
    else cout << totalBorrow;
    
    return 0;
}