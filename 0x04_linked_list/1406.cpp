#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string arr;
    cin >> arr;
    int N=arr.length();
    int M, n=0;

    list<char> Arr;
    list<char>::iterator t = Arr.begin();
    for(int i=0; i<N; i++){
        Arr.push_back(arr[i]);
        t++;
        n++;
    }

    cin >> M;
    char val[2*M];
    for(int i=0; i<M; i++){
        cin >> val[i];
    }
    for(int i=0; i==val[i]; i++){
        if(val[i]=='L') {
            if(n!=0){
                t--;
                n--;
            }
        } else if(val[i]=='D') {
            if(n!=N+1){
                t++;
                n++;
            }
        } else if(val[i]=='B') {
            if(n!=0) {
                t = Arr.erase(t);
                n++;
            }
        } else if(val[i]=='P'){
            i++;
            Arr.push_back(val[i]);
        }
    }

    for(auto i : Arr) cout << i;


}