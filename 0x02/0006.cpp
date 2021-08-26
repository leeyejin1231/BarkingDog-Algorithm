#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X;
    cin >> X;
    if(X>=90) cout << 'A';
    else if(X>=80) cout << 'B';
    else if(X>=70) cout << 'C';
    else if(X>=60) cout << 'D';
    else cout << 'F';
}