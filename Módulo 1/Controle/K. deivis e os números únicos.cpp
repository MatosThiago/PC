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
    Aux = 0;

    for (int i = 0; i < N; i++) {
        if (V[i] != V[i + 1] && V[i] != V[i - 1]) {
            Aux++;
        }
    }

    cout << Aux;

    return 0;
}