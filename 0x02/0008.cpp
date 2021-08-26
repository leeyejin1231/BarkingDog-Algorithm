#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A;
    cin >> A;
    if((A%4 == 0 && A%100 != 0)|| A%400 == 0) cout << '1';
    else cout << '0';
}