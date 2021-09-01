#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> arr = {1, 2};
    list<int>::iterator t = arr.begin();
    arr.push_front(4);
    arr.insert(t, 3);
    for(auto i:arr) cout << i << ' ';
}