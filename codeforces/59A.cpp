#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int countUpper = 0;
    int countLower = 0;
    
    for(char c : s){
        if(isupper(c)) countUpper++;
        else countLower++;
    }
    if(countUpper > countLower){
        for(char &c : s){
            c = toupper(c);
        }
    }else{
        for(char &c : s){
            c = tolower(c);
        }
    }
    cout << s;
    return 0;
}