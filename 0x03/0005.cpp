#include <bits/stdc++.h>
using namespace std;

int room[13];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K, S, Y, num=0;
    cin >> N >> K;

    for(int i=0; i<N; i++){
        cin >> S >> Y;
        if(S == 0) room[Y]++;
        else room[Y+6]++;
    }
    for(int i : room){
        if(i>0) num += (i+K-1)/K;
    }
    cout << num; 
}