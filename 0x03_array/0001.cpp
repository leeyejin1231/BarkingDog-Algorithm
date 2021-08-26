#include <bits/stdc++.h>
using namespace std;

int result[26];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S;
    cin >> S;
    
    for(auto s : S)
        result[s-'a']++;
    
    for(int i=0; i<26; i++)
        cout << result[i] << ' ';

}