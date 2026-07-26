#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        unordered_map<int, int> numbers;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            numbers[vec[i]]++;
        }
        int aux = 0;
        for(auto i : numbers){
            if(i.second == 1){
                aux = i.first;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(vec[i] == aux){
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}