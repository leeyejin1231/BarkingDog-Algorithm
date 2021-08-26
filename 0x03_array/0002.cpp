#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, v, freq=0;
    cin >> N;
    int arr[N+1];

    for(int i=0; i<N; i++) cin >> arr[i];

    cin >> v;

    for(int i=0; i<N; i++){
        if(arr[i] == v) freq++;
    }
    cout << freq;    
}