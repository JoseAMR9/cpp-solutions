#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m; cin >> n >> m;
    bool snake = true;
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            if(i % 2 == 0){
                cout << "#";
                continue;
            }
            if(snake == true){
                if(j == m - 1){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            else{
                if(j == 0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }

        }
        if(i % 2 == 1){
            if(snake == true) snake = false;
            else snake = true;
        }
        cout << endl;
    }
    
}