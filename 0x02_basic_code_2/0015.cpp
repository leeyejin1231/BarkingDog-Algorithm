#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long firstInput, secondInput, largeInput, smallInput;

    cin >> firstInput >> secondInput;

    if(firstInput>secondInput) {
        largeInput = firstInput;
        smallInput = secondInput;
    } else if (firstInput < secondInput) {
        largeInput = secondInput;
        smallInput = firstInput;
    } else {
        cout << 0;
        return 0;
    }

    cout << largeInput-smallInput-1 << '\n';

    for(long long i=smallInput+1; i<largeInput; i++){
        cout << i << ' ';
    }

}