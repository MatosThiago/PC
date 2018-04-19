#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q, X, Aux;
    scanf("%d", &N);
    scanf("%d", &Q);
    vector<int> V;

    for(int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());

    for(int i = 0; i < Q; i++) {
        scanf("%d", &X);
        Aux = lower_bound(V.begin(), V.end(), X) - V.begin();
        if(Aux < N) {
            printf("%d\n", V[Aux]);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}