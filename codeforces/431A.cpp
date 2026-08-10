#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    string s; cin >> s;
    int totalCalories = 0;
    
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == '1') totalCalories += a;
        else if(s[i] == '2') totalCalories += b;
        else if(s[i] == '3') totalCalories += c;
        else totalCalories += d;
    }
    cout << totalCalories;
    return 0;
}