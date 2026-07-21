#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x1, x2, x3; cin >> x1 >> x2 >> x3;
    vector<int> distance = {x1,x2,x3};
    
    auto mx = max_element(distance.begin(), distance.end());
    auto mn = min_element(distance.begin(), distance.end());
    
    cout << *mx - *mn;
}