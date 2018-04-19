#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N, Q, l, r, x;
    scanf("%d %d", &N, &Q);
    long long Liar = 0;
    vector<long long> V(N, 0), Aux(N, 0);

    for (int i = 0; i < Q; i++) {
        scanf("%d %d %d", &l, &r, &x);
        Aux[l - 1] += x;
        if (r < N) {
            Aux[r] -= x;   
        }
    }

    for (int i = 0; i < N; i++) {
        Liar += Aux[i];
        V[i] = Liar;
    }

    for (int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }

    return 0;
}