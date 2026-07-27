#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> citizens(n);
    
    for(int i = 0; i < n; i++){
        cin >> citizens[i];
    }
    int mx = *max_element(citizens.begin(), citizens.end());
    int total = 0;
    for(int n : citizens){
        total += mx - n;
    }
    cout << total;
    return 0;
}