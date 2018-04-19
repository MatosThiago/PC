#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, l, r, Aux;
    cin >> N >> l >> r;
    vector<int> V;

    for (int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        V.push_back(Aux);
    }

    reverse(&V[l - 1], &V[r]);

    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}