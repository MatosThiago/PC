#include <bits/stdc++.h>

using namespace std;

int main() {

    int M[5][5], V[5] = {0, 1, 2, 3, 4}, Aux[2] = {};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    do {
        Aux[0] = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = i; j < 4; j += 2) {
                Aux[0] += M[V[i]][V[i + 1]] + M[V[i + 1]][V[i]];
            }
        }
        Aux[1] = max(Aux[0], Aux[1]);
    } while (next_permutation(V, V + 5));

    printf("%d\n", Aux[1]);

    return 0;
}