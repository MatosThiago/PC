#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N, M, Melhor, Aux;
    scanf("%d %d", &N, &M);
    vector<int> Valor, Peso;

    for (int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        Valor.push_back(Aux);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        Peso.push_back(Aux);
    }

    for (int i = 0; i < (1 << N); i++) {
        int ValorAtual = 0;
        int PesoAtual = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                ValorAtual += Valor[j];
                PesoAtual += Peso[j];
            }
        }
        if (PesoAtual <= M) {
            Melhor = max(Melhor, ValorAtual);
        }
    }

    printf("%d\n", Melhor);

    return 0;
}
close