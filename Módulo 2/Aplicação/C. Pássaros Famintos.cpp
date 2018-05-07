#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    scanf("%d", &T);
    long long Y, X, l, r, mid, Aux;

    for(int i = 0; i < T; i++) {
        scanf("%lld %lld", &X, &Y);
        Aux = Y + 1;
        l = X - Aux;
        r = 1e18;
        while(l - r != 0) {
            mid = (l + r) / 2;
            if((l +  - r < 0) {
                l = mid;
            }
        }
    }

    return 0;
}