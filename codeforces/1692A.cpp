#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int participantsInFrontOfTimur = 0;
        if(a < b) participantsInFrontOfTimur++;
        if(a < c) participantsInFrontOfTimur++;
        if(a < d) participantsInFrontOfTimur++;
        cout << participantsInFrontOfTimur << endl;
    }
    
    return 0;
}