#include <bits/stdc++.h>

using namespace std;

int main () {

    int N, Aux;
    cin >> N;
    vector<int> V;

    for (int i = 0; i < N; i++) {
        cin >> Aux;
        V.push_back(Aux);
    }

    sort(V.begin(), V.end());

    Aux = 1;

    for (int i = 0; i < N; i++) {
        if (i > 0 && V[i - 1] < V[i]) {
            Aux++;
        }
    }

    cout << Aux;
}