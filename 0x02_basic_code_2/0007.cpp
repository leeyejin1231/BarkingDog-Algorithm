#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A[4];
    for(int i=0; i<3; i++) cin >> A[i];
    sort(A, A+3);
    for(int i=0; i<3; i++) cout << A[i] << " ";
}