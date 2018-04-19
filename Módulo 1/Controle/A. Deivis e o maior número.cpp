#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Aux;
    scanf("%d", &N);
    vector<int> V;

    for (int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());

    printf("%d", V[N - 1]);

    return 0;
}