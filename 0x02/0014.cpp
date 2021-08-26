#include <bits/stdc++.h>
using namespace std;

    int arr[9], result[7];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<9; i++) cin >> arr[i];

    for(int a=0; a<8; a++){
        int sum = 0;
        
        for( int b=a+1; b<9; b++){
            sum = 0;

            for(int c=0, i=0; c<9; c++) if(c != a && c != b) result[i++]=arr[c];
            for(int i=0; i<7; i++) sum += result[i];

            if(sum == 100) break;
        }
        if(sum == 100) break;
    }

    sort(result, result+7);
    for(int i=0; i<7; i++) cout << result[i] << '\n';

}                                                                          