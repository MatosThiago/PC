#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, O, Q, Aux, Liar;
    scanf("%lld %lld %lld", &N, &O, &Q);
    vector<long long> B;

    for(int i = 0; i < O; i++) {
        scanf("%lld", &Aux);
        B.push_back(Aux);
    }

    for(long long j, i = 0; i < Q; i++) {
        scanf("%lld", &Aux);
        Liar = N;
        for(j = 0; j < O && Liar < Aux; j++) {
            Liar += B[j];
        }
        if(j == O && Liar < Aux) {
            printf("-1\n");
        } else {
            printf("%lld\n", j);
        }
    }

    return 0;
}