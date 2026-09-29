#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> vec(n);
    
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    int counter = 0;
    int aux = 0;
    
    for(int i = 0; i < n - 1; i++){
        if(vec[i] < vec[i + 1]) counter++;
        else{
            aux = max(aux, counter + 1);
            counter = 0;
        }
    }
    cout << max(aux, counter + 1) << "\n";
    
    return 0;
}