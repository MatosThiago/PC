#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, O, Q;
    scanf("%d %d %d", &N, &O, &Q);
    vector<long long> Batatas(O + 1, 0);
    long long Aux;
    int Liar;

    Batatas[0] = N;
    for(int i = 1; i < O + 1; i++) {
        scanf("%lld", &Aux);
        Batatas[i] = Batatas[i - 1] + Aux;
    }

    for(int i = 0; i < Q; i++) {
        scanf("%lld", &Aux);
        Liar = lower_bound(Batatas.begin(), Batatas.end(), Aux) - Batatas.begin();
        if(Liar < Batatas.size()) {
            printf("%d\n", Liar);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}