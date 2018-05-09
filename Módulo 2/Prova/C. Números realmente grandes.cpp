#include <bits/stdc++.h>

using namespace std;

long long f(long long N);

int main() {

    long long N, Y;
    scanf("%lld %lld", &N, &Y);

    long long l = 1,
              r = N,
              mid;

    while(r > l + 1) {
        mid = (l + r) / 2;
        if((mid - f(mid)) >= Y) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    if((l - f(l)) >= Y || (r - f(r)) >= Y) {
        if((l - f(l)) >= Y) {
            printf("%lld\n", (N - l + 1));
        } else {
            printf("%lld\n", (N - r + 1));
        }
    } else {
        printf("0\n");
    }


    return 0;
}

long long f(long long N) {
    
    vector<long long> D;

    for(long long j = 0, i = 1; N > 0; j++, i*=10) {
        D.push_back((N / i) % 10);
        N -= ((N / i) % 10) * i;
        if(j != 0) {
            D[j] += D[j - 1];
        }
    }

    return D[D.size() - 1];
}