#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;

    string prev, cur; cin >> prev;

    int groups = 1;

    while(--n){
        cin >> cur;
        if(cur != prev)
            groups++;
        prev = cur;
    }

    cout << groups;
    return 0;
}