#include <bits/stdc++.h>
using namespace std;

int freq1[27], freq2[27];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    int res=0;\
    cin >> a >> b;

    for(auto s : a) freq1[s-'a']++;
    for(auto s : b) freq2[s-'a']++;
    

    for(int i=0; i<26; i++) res += abs(freq1[i]-freq2[i]);

    cout << res;

}