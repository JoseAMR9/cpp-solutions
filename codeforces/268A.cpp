#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<pair<int,int>> games;
    
    while(n--){
        int h, a; cin >> h >> a;
        games.push_back({h,a});
    }
    
    int counter = 0;
    for(size_t i = 0; i < games.size(); i++){
        
        for(size_t j = 0; j < games.size(); j++){
            if(games[i].first == games[j].second) counter++;
        }
    }
    cout << counter;
}