#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int min=100, sum=0, num;

    for(int i=0; i<7; i++){
        cin >> num;
        if(num%2==1){
            if(num<min) min =num;
            sum += num;
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    }
    if(sum == 0) cout << -1 << '\n';
    else {
        cout << sum << '\n';
        cout << min;
    }
}