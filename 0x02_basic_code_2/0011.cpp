#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9], arr1[9];
    for(int i=0; i<9; i++){
         cin >> arr[i];
         arr1[i] = arr[i];
    }
    sort(arr, arr+9);
    cout << arr[8] << '\n';
    for(int i=0; i<9; i++){
        if(arr1[i]==arr[8]) cout << i+1;
    }
}