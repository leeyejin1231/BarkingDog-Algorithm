#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int a, b;

    for(int j=0; j<10; j++) {

        cin >> a >> b;

        int diff = (b-a+1)/2;
        for(int i = 0; i < diff; i++){
            int temp = arr[a + i - 1];
            arr[a + i - 1] = arr[b - i - 1];
            arr[b-i-1] = temp;
        }
    }

    for(int i=0; i<20; i++) cout << arr[i] << ' ';

}