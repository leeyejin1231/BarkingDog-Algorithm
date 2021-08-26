#include <iostream>
using namespace std;

int func2(int arr[], int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i]+arr[j] == 100) return 1;
        }
    }
    return 0;
}

int func3(int arr[], int N){
    int freq[101] = {};
    for(int i=0; i<N; i++){
        if(freq[100-arr[i]]) return 1;
        freq[arr[i]] = 1;
    }
    return 0;
}
