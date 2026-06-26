#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;
    int n; cin >> n;

    while(n--){
        string valueX; cin >> valueX;
        if(valueX[1] == '+') x++;
        else x--;
    }
    cout << x;
    return 0;
}