#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Aux = 0;
    cin >> N;
    int V[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (int i = 0; i < N; i++) {
        if(abs(V[i]) == 5) {
            Aux++;
        }
    }

    printf("%d", Aux);

    return 0;
}