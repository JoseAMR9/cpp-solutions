#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    vector<int> vec = {5,4,3,2,1};
    
    int i = 0;
    int count = 0;
    
    while(x > 0){
        if(x - vec[i] >= 0){
            x -= vec[i];
            count++;
        }else{
            i++;
        }
        
    }
    cout << count;
}