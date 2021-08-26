#include <bits/stdc++.h>
using namespace std;

int freq[10];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, set=1;
    cin >> N;

    while(N != 0){
        freq[N%10]++;
        N/=10;
    }

    freq[6] += freq[9];
    freq[6] = (freq[6]+1)/2;
    freq[9] = 0;

    for(int i : freq){
        if(i>set) set = i;
    }
    cout << set;
}