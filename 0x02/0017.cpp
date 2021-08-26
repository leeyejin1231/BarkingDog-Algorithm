#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, a, result1=0, result2=0;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> a;
        result1 += (a/30)*10 + 10;
        result2 += (a/60)*15 + 15;
    }

    if(result1 > result2) cout << "M " << result2;
    else if (result2 > result1) cout << "Y " << result1;
    else cout << "Y M " << result2;

}