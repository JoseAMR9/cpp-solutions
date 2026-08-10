#include <bits/stdc++.h>
using namespace std;

bool findPrime(int number){
    
    bool isPrime = true;
    for(int i = 2; i * i <= number; i++){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    
    int n, m; cin >> n >> m;
    
    while(true){
        if(findPrime(++n)) break;
    }
    if(n != m) cout << "NO";
    else cout << "YES";
    return 0;
}