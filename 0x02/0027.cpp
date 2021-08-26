#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N-1; i++){
        for(int j=0; j<=i; j++) cout << '*';
        for(int k=0; k<2*(N-1-i); k++) cout << ' ';
        for(int j=0; j<=i; j++) cout << '*';
        cout << '\n';
    }

    for(int i=0; i<2*N; i++) cout << '*';
    cout << '\n';

    for(int i=N-2; i>=0; i--){
        for(int j=0; j<=i; j++) cout << '*';
        for(int k=0; k<2*(N-1-i); k++) cout << ' ';
        for(int j=0; j<=i; j++) cout << '*';
        cout << '\n';
    }
}