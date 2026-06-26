#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n; cin >> k;
    vector<int> participants;
    
    for(int i = 0; i < n; i++){
        int p; cin >> p;
        participants.push_back(p);
    }
    
    int nextRound = 0;
    for(size_t i = 0; i < participants.size(); i++){
        if(participants[i] >= participants[k - 1] && participants[i] > 0) nextRound++;
    }
    cout << nextRound;
    return 0;
}