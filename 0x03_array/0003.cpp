#include <bits/stdc++.h>
using namespace std;

int freq[11];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B, C, result;
    cin >> A >> B >> C;
    result = A*B*C;

    while(result != 0){
        freq[result%10]++;
        result/=10;
    }

    for(int i=0; i<10; i++)
        cout << freq[i] << '\n';

}