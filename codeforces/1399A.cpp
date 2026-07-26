#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        bool isCorrect = true;
        for(size_t i = 0; i < vec.size() - 1; i++){
            if(vec[i + 1] - vec[i] > 1){
                isCorrect = false;
                break;
            }
        }
        if(isCorrect) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}