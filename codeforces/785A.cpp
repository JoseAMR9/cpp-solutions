#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    int totalFaces = 0;
    
    while(n--){

        string s; cin >> s;
        if(s[0] == 'T'){
            totalFaces += 4;
        }
        else if(s[0] == 'C'){
            totalFaces += 6;
        }
        else if(s[0] == 'O'){
            totalFaces += 8;
        }
        else if(s[0] == 'D'){
            totalFaces += 12;
        }
        else {
            totalFaces += 20;
        }
    }
    cout << totalFaces;
}