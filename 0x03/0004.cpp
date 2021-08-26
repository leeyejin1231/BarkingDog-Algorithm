#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    while(N--){
        string a, b;
        cin >> a >> b;
        int freq[26] = {};

        for(auto s : a) freq[s-'a']++;
        for(auto s : b) freq[s-'a']--;

        bool isPossible = true;

        // for(int i : freq) {
        //     if(i!=0){
        //         cout << "Impossible\n";
        //         return 0;
        //     }
        // }
        // cout << "Possible\n";

        for(int i : freq) {
            if(i!=0){
                isPossible = false;
            }
        }

        if(isPossible) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}