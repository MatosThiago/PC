#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, X, Aux = -1;
    cin >> N >> X;
    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < N; i++) {
        if (V[i] >= X) {
            Aux = i + 1;
        }
    }

    cout << Aux;

    return 0;
}