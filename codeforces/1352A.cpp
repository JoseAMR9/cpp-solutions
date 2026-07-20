#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        string number = to_string(n);
        int counter = 0;
        
        for(size_t i = 0; i < number.size(); i++){
            if(number[i] != '0') counter++;
        }
        cout << counter << endl;
        
        for(size_t i = 0; i < number.size(); i++){
            if(number[i] != '0'){
                cout << (number[i] - '0') * pow(10, number.size() - (i + 1)) << " ";
            }
        }
        cout << endl;
    }
    
}