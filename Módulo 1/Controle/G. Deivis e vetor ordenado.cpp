#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Aux;
    cin >> N;
    vector<int> V;

    for (int i = 0; i < N; i++) {
        scanf("%d", &Aux);
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}