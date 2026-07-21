#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    vector<int> performances;
    
    while(n--){
        int a; cin >> a;
        performances.push_back(a);
    }
    
    int bestPerformance = performances[0];
    int worstPerformance = performances[0];
    int amazingPerformances = 0;
    for(size_t i = 1; i < performances.size(); i++){
        
        if(performances[i] > bestPerformance){
            bestPerformance = performances[i];
            amazingPerformances++;
        }
        if(performances[i] < worstPerformance){
            worstPerformance = performances[i];
            amazingPerformances++;
        }
        
    }
    cout << amazingPerformances;
    return 0;
}