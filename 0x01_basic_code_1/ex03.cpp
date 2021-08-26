#include <iostream>
using namespace std;

int func3(int N){
    for(int i = 1; i < N; i++){
        if(i*i == N) return 1;
    }
    return 0;
}

int Answerfunc3(int N){
    for(int i = 1; i+i <= N; i++){
        if(i*i == N) return 1;
    }
    return 0;
}