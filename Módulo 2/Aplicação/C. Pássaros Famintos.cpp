#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    scanf("%d", &T);
    long long Y, X, j, Aux;

    for(int i = 0; i < T; i++) {
        scanf("%lld %lld", &Y, &X);
        Aux = Y;
        for(j = 1; Y > 0; j++) {
            Y += X;
            if(Y > Aux) {
                Y = Aux;
            }
            Y -= j;
        }
        printf("%lld\n", j - 1);
    }

    return 0;
}