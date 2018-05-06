#include <bits/stdc++.h>

using namespace std;

int main() {

    long long X, Aux = 0;
    scanf("%lld", &X);

    while(Aux != 1) {
        Aux = 1;
        for(long long i = 2; (i * i < X) && (Aux == 1); i++) {
            if(X % i == 0) {
                Aux = 0;
            }
        }
        X++;
    }

    printf("%lld\n", --X);

    return 0;
}