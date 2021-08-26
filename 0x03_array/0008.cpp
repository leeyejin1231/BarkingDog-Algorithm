#include <bits/stdc++.h>
using namespace std;

int freq[2000001];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, n, num, res=0;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> n;
        freq[n]++;
    }

    cin >> num;

    for(int i=0; i<(num+1)/2; i++){
        if(freq[i]==1 && freq[num-i]==1) res++;
    }  

    cout << res;

}