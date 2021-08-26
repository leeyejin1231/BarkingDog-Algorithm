#include <bits/stdc++.h>
using namespace std;

int sum=0, num;
string result = "DCBAE";

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> num;
            sum += num;
        }
        cout << result[sum] << '\n';
        sum=0;
    }

    // int arr[3][4], n[3], N=0;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++) cin >> arr[i][j];
    // }

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         if(arr[i][j]==0) N++;
    //     }
    //     n[i]=N;
    //     N=0;
    // }

    // for(int i=0; i<3; i++){
    //     if(n[i]==1) cout << 'A' << '\n';
    //     if(n[i]==2) cout << 'B' << '\n';
    //     if(n[i]==3) cout << 'C' << '\n';
    //     if(n[i]==4) cout << 'D' << '\n';
    //     if(n[i]==0) cout << 'E' << '\n';
    // }

}