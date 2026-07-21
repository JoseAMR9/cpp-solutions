#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> vec;
    
    while(n--){
        int a; cin >> a;
        vec.push_back(a);
    }
    
    int serejaPoints = 0;
    int dimaPoints = 0;
    bool serejaTurn = true;
    
    while(!vec.empty()){
        
        if(serejaTurn){
            if(vec.front() > vec.back()){
                serejaPoints += vec.front();
                vec.erase(vec.begin());
            }
            else{
                serejaPoints += vec.back();
                vec.pop_back();
            }
            serejaTurn = false;
        }
        else{
            if(vec.front() > vec.back()){
                dimaPoints += vec.front();
                vec.erase(vec.begin());
            }
            else{
                dimaPoints += vec.back();
                vec.pop_back();
            }
            serejaTurn = true;
            
        }
    }
    cout << serejaPoints << " " << dimaPoints;
    return 0;
}