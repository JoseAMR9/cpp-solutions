#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> vec;
    vector<bool> idxs(n, false);
    map<int,int> team;
    
    while(n--){
        int t; cin >> t;
        team[t]++;
        vec.push_back(t);
    }
    
    if(team.size() < 3) cout << "0\n";
    else{
        
        int mn = 5000;
        for(auto n : team){
            mn = min(mn, n.second);
        }
        cout << mn << "\n";
        while(mn--){
            int i = 0;
            vector<bool> v(3,false);
            while(i < vec.size()){
                
                if(vec[i] == 1 && !v[0] && !idxs[i]){
                    cout << i + 1 << " ";
                    idxs[i] = true;
                    v[0] = true;
                }
                if(vec[i] == 2 && !v[1] && !idxs[i]){
                    cout << i + 1 << " ";
                    idxs[i] = true;
                    v[1] = true;
                }
                if(vec[i] == 3 && !v[2] && !idxs[i]){
                    cout << i + 1 << " ";
                    idxs[i] = true;
                    v[2] = true;
                }
                i++;
            }
            cout << "\n";
        }
    }
    return 0;
}