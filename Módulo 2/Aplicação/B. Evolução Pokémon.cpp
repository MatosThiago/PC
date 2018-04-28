#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, M, X, Y, Tem, Precisa;
    scanf("%lld %lld %lld %lld", &N, &M, &X, &Y);

    Tem = M;
    Precisa = N * X;

    while(Tem < Precisa) {
        Tem += Y;
        Precisa -= X;
    }

    printf("%lld", Precisa / X);

    return 0;
}