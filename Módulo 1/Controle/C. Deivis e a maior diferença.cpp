#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Aux = 0;
    cin >> N;
    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < (N - 1); i++) {
        if (abs(V[i] - V[i + 1]) > Aux) {
            Aux = abs(V[i] - V[i + 1]);
        }
    }

    cout << Aux;

    return 0;
}