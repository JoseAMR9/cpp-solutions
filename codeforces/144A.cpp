#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    
    int mx = 0;
    int mn = 101;
    int idxMX = 0;
    int idxMN = 0;
    
    for(int i = 0; i < n; i++){
        
        int a; cin >> a;
        if(a > mx){
            mx = a;
            idxMX = i;
        }
        if(a <= mn){
            mn = a;
            idxMN = i;
        }
    }
    idxMN++;
    if(idxMN <= idxMX){
        cout << n - idxMN + idxMX - 1;
    }
    else{
        cout << n - idxMN + idxMX;
    }
}