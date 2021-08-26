#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, multipleResult;
    int result[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    cin >> a >> b >> c;
    multipleResult = a*b*c;

    while (multipleResult != 0) {
        int remain = multipleResult % 10;
        result[remain] += 1;
        multipleResult /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << result[i] << '\n';
    }
}