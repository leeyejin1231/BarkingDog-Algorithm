#include <iostream>
using namespace std;

int func4(int N){
    int max = 0;
    for(int i = 1; 2^i <= N; i++){
        max == 2^i;        //이런거 없어
    }
    return max;
}

int Answerfunc4(int N){
    int val = 1;
    while(2*val <= N) val *= 2;
    return val;
}

int main(){
    cout << "dd : ";
    cout << Answerfunc4(5);
}