#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string letters; getline(cin, letters);
    set<char> distinct_letters;
    
    for(size_t i = 0; i < letters.size(); i++){
        if(letters[i] >= 'a' && letters[i] <= 'z'){
            distinct_letters.insert(letters[i]);
        }
    }
    cout << distinct_letters.size();
}