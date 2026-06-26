#include <bits/stdc++.h>
using namespace std;

int main() {
    int matriz[5][5];
    int posI, posJ;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                posI = i + 1;
                posJ = j + 1;
            }
        }
    }
    cout << abs(posI - 3) + abs(posJ - 3);
    return 0;
}