#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K, Q, l, r, Delta[200001] = {}, Recomendacoes[200001] = {}, Show[200001] = {}, Soma[200002] = {};
    scanf("%d %d %d", &N, &K, &Q);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &l, &r);
        Delta[l]++;
        Delta[r + 1]--;
    }

    int Aux = 0;

    for (int i = 0; i < 200001; i++) {
        Aux += Delta[i];
        Recomendacoes[i] = Aux;
    }

    for (int i = 0; i < 200001; i++) {
        if(Recomendacoes[i] >= K) {
            Show[i] = 1;
        }
    }

    Aux = 0;

    for (int i = 1; i < 200002; i++) {
        Aux += Show[i];
        Soma[i] = Aux;
    }

    for (int i = 0; i < Q; i++) {
        scanf("%d %d", &l, &r);
        printf("%d\n", Soma[r] - Soma[l - 1]);
    }

    return 0;
}
close