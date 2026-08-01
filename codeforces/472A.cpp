#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    
    bool primeNum = true;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            primeNum = false;
            break;
        }
    }
    return primeNum;
}

int main() {
    
    int n; cin >> n;
    int x = 4;
    
    while(true){
        int y = n - x;
        if(!isPrime(x) && !isPrime(y)){
            cout << x << " " << y;
            break;
        }
        x++;
    }
    return 0;
}