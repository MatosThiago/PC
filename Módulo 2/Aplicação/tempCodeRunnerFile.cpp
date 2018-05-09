#include <bits/stdc++.h>

using namespace std;

int check(long long N, long long Q);

int main() {

    int T;
    scanf("%d", &T);
    long long X, Y, Q;

    for(int i = 0; i < T; i++) {
        scanf("%lld %lld", &Y, &X);
        if(X >= Y) {
            printf("%lld\n", Y);
        } else {
            Q = Y - X;
            long long l = 0,
                      r = Y,
                      mid;
            while(l < r) {
                mid = (l + r) / 2;
                if(check(mid, Q)) {
                    r = mid;
                } else {
                    l = mid + 1;
                }
            }
            printf("%lld\n", X + l);
        }
    }

    return 0;
}

int check(long long N, long long Q) {

    if((double) (N * (N + 1) / 2) >= 1e18) {
        return 1;
    }

    long long R = (N + 1) * N / 2;
    return R >= Q;
}