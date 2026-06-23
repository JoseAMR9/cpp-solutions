#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        string s; cin >> s;
        if(s.size() <= 10) cout << s;
        else{
            string result = "";
            result += s[0];
            string aux = s.substr(1, s.size() - 2);
            result += to_string(aux.size());
            result += s[s.size() - 1];
            cout << result;
        }
        cout << endl;
    }
    return 0;
}