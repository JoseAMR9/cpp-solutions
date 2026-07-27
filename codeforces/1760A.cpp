#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        vector<int> vec = {a,b,c};
        sort(vec.begin(), vec.end());
        cout << vec[1] << "\n";
    }
    
    return 0;
}